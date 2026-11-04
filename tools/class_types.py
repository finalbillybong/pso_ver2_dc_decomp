#!/usr/bin/env python3
"""Shared class layouts from the field evidence of matched units.

Every matched unit declares its own mechanical view of the objects it touches
(`typedef struct Object {char unknown0[0x70]; float f70;} Object;`, a C++ `class Object` with
`char unknown0[0x18]` and placeholder virtuals, an `ObjectData` cast view). This tool reads
those views, attributes each unit to a recovered class (docs/CLASSES.md) by its function name,
merges the field evidence of every unit that operates on a class (its own methods and those of
its ancestors), reports conflicts, writes one header per class under src/include/classes/ and
rewrites units to include it.

    python3 tools/class_types.py scan [--json out.json]        # per-unit evidence summary
    python3 tools/class_types.py layout CLASS [CLASS ...]       # merged layout and conflicts
    python3 tools/class_types.py emit CLASS [CLASS ...]         # write src/include/classes/<Class>.h
    python3 tools/class_types.py convert CLASS [CLASS ...]      # rewrite units (sources + manifest headers)
    python3 tools/class_types.py check                          # header contract (no compiler needed)
    python3 tools/class_types.py report [--top N]               # family-level conversion estimate

Conversion is a source-only rewrite: it must not change one compiled byte. After `convert`,
rebuild the changed units (tools/verify_source.py builds everything) and keep only exact units;
`convert --only UNIT_ID ...` restricts the rewrite to units already proved exact.
"""
import argparse
from collections import Counter, defaultdict
import json
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
from shc_units import is_shc  # noqa: E402  (SHC units take no project headers)
HEADER_DIR = 'src/include/classes'
# Method suffixes whose first parameter is the object itself (not `create`, a factory).
THIS_METHODS = re.compile(r'^(?:ctor|dtor|update|render|render_shadow|v\d+)(?:_[0-9a-f]{6})?$')
SCALARS = {
    'char': 1, 'signed char': 1, 'unsigned char': 1,
    'short': 2, 'signed short': 2, 'unsigned short': 2, 'short int': 2, 'unsigned short int': 2,
    'int': 4, 'signed int': 4, 'unsigned int': 4, 'unsigned': 4, 'signed': 4,
    'long': 4, 'signed long': 4, 'unsigned long': 4, 'long int': 4, 'unsigned long int': 4,
    'float': 4,
}
GAP_NAME = re.compile(r'^(?:unknown|pad|gap|unk|reserved)_?[0-9a-fA-F]*$')
QUALIFIERS = ('const', 'volatile')


# ---------------------------------------------------------------- parsing

def strip_comments(text):
    out, i, n = [], 0, len(text)
    while i < n:
        c = text[i]
        if text.startswith('//', i):
            j = text.find('\n', i)
            j = n if j < 0 else j
            out.append(' ' * (j - i)); i = j
        elif text.startswith('/*', i):
            j = text.find('*/', i + 2)
            j = n if j < 0 else j + 2
            out.append(re.sub(r'[^\n]', ' ', text[i:j])); i = j
        elif c in '"\'':
            j = i + 1
            while j < n and text[j] != c:
                j += 2 if text[j] == '\\' else 1
            out.append(text[i:j + 1]); i = j + 1
        else:
            out.append(c); i += 1
    return ''.join(out)


def select_language(code, cplusplus):
    """Keep the `#ifdef __cplusplus` / `#ifndef __cplusplus` branches for one language (blank others)."""
    out, stack = [], []
    for line in code.split('\n'):
        s = line.strip()
        m = re.match(r'#\s*(ifdef|ifndef)\s+__cplusplus\b', s)
        if m:
            stack.append((m.group(1) == 'ifdef') == cplusplus); out.append(''); continue
        if stack and re.match(r'#\s*else\b', s):
            stack[-1] = not stack[-1]; out.append(''); continue
        if stack and re.match(r'#\s*endif\b', s):
            # only endifs that close a __cplusplus block are tracked; other #if blocks keep both arms
            stack.pop(); out.append(''); continue
        out.append(line if all(stack) else '')
    return '\n'.join(out)


def match_brace(text, i):
    depth = 0
    for j in range(i, len(text)):
        if text[j] == '{':
            depth += 1
        elif text[j] == '}':
            depth -= 1
            if depth == 0:
                return j
    raise ValueError('Unbalanced braces')


AGG = re.compile(r'(?:(?<=[;}\n])|^)[ \t]*(typedef\s+)?(struct|class|union)\s+(\w+)?\s*(:[^{;]*)?\{', re.M)
FORWARD = re.compile(r'^[ \t]*(?:typedef\s+(?:struct|union)\s+(\w+)\s+(\w+)|(?:struct|class|union)\s+(\w+))\s*;[ \t]*\n?', re.M)


class Aggregate:
    def __init__(self, kind, tag, name, body, span, base):
        self.kind, self.tag, self.name, self.body, self.span, self.base = kind, tag, name, body, span, base
        self.members = None      # list of dicts: offset, size, type, name, gap
        self.virtuals = []       # (index, return, name, params)
        self.vptr = None
        self.size = None
        self.align = 1
        self.error = None


def parse_aggregates(code):
    aggs = []
    for m in AGG.finditer(code):
        start = m.start()
        open_brace = m.end() - 1
        close = match_brace(code, open_brace)
        rest = re.match(r'\s*(\w*)\s*;', code[close + 1:])
        if not rest:
            continue  # a variable definition with an initializer or similar: not a type
        end = close + 1 + rest.end()
        typedef_name = rest.group(1) if m.group(1) else None
        if not m.group(1) and rest.group(1):
            continue  # `struct X {...} variable;`
        tag = m.group(3)
        aggs.append(Aggregate(m.group(2), tag, typedef_name or tag, code[open_brace + 1:close],
                              (start, end), (m.group(4) or '').strip(' :')))
    return aggs


def split_top(body, sep=';'):
    parts, depth, cur = [], 0, []
    for c in body:
        if c in '({[':
            depth += 1
        elif c in ')}]':
            depth -= 1
        if c == sep and depth == 0:
            parts.append(''.join(cur)); cur = []
        else:
            cur.append(c)
    if ''.join(cur).strip():
        parts.append(''.join(cur))
    return parts


def int_expr(text):
    text = text.strip()
    if re.fullmatch(r'0[xX][0-9a-fA-F]+[uUlL]*|\d+[uUlL]*', text):
        return int(text.rstrip('uUlL'), 0)
    return None


def normalize_type(t):
    t = ' '.join(t.replace('*', ' * ').split())
    return t.replace(' *', '*').replace('* ', '*')


def layout(aggs_by_name, agg, stack=()):
    if agg.members is not None or agg.error:
        return
    if agg.name in stack:
        agg.error = 'recursive'
        return
    members, offset, align = [], 0, 1
    vindex = 0
    body = re.sub(r'\b(public|private|protected)\s*:', ';', agg.body)
    if agg.base:
        agg.error = 'inheritance'
        return
    for decl in split_top(body):
        decl = ' '.join(decl.split())
        if not decl:
            continue
        if decl.startswith('virtual '):
            vm = re.fullmatch(r'virtual (.+?)\b(\w+)\s*\((.*)\)\s*(=\s*0)?', decl)
            if not vm:
                agg.error = 'virtual: ' + decl
                return
            if agg.vptr is None:
                offset = (offset + 3) & ~3
                agg.vptr = offset
                members.append(dict(offset=offset, size=4, type='<vptr>', name='<vptr>', gap=False))
                offset += 4
                align = max(align, 4)
            agg.virtuals.append((vindex, normalize_type(vm.group(1)), vm.group(2), ' '.join(vm.group(3).split())))
            vindex += 1
            continue
        if '(' in decl and not re.search(r'\(\s*\*', decl):
            continue  # a method declaration or similar: no storage
        fm = re.fullmatch(r'(.+?)\(\s*\*\s*(\w+)\s*\)\s*\((.*)\)', decl)
        if fm:
            items = [(fm.group(1) + '(*)(' + fm.group(3) + ')', fm.group(2), [], 4, 4)]
        else:
            tm = re.fullmatch(r'((?:(?:const|volatile|unsigned|signed|struct|union|enum)\s+)*[A-Za-z_]\w*(?:\s+(?:int|char|short|long))*)\s*(.*)', decl)
            if not tm:
                agg.error = 'member: ' + decl
                return
            base = ' '.join(tm.group(1).split())
            items = []
            for d in split_top(tm.group(2), ','):
                dm = re.fullmatch(r'\s*(\**)\s*(\w+)\s*((?:\[[^\]]*\]\s*)*)', d)
                if not dm:
                    agg.error = 'declarator: ' + decl
                    return
                dims = [int_expr(x) for x in re.findall(r'\[([^\]]*)\]', dm.group(3))]
                if any(x is None for x in dims):
                    agg.error = 'array size: ' + decl
                    return
                if dm.group(1):
                    tsize, talign = 4, 4
                    tname = base + ' ' + dm.group(1)
                else:
                    plain = ' '.join(w for w in base.split() if w not in QUALIFIERS)
                    plain_struct = re.sub(r'^(struct|union) ', '', plain)
                    if plain in SCALARS:
                        tsize = SCALARS[plain]; talign = tsize
                    elif plain_struct in aggs_by_name:
                        inner = aggs_by_name[plain_struct]
                        layout(aggs_by_name, inner, stack + (agg.name,))
                        if inner.error or inner.size is None:
                            agg.error = 'member type ' + plain_struct
                            return
                        tsize, talign = inner.size, inner.align
                    else:
                        agg.error = 'unknown type ' + plain
                        return
                    tname = base
                count = 1
                for x in dims:
                    count *= x
                items.append((tname, dm.group(2), dims, tsize * count, talign))
        for tname, name, dims, size, talign in items:
            offset = (offset + talign - 1) & ~(talign - 1)
            align = max(align, talign)
            gap = bool(GAP_NAME.match(name)) and normalize_type(tname).replace('unsigned ', '') == 'char' and bool(dims)
            members.append(dict(offset=offset, size=size, type=normalize_type(tname), name=name,
                                dims=dims, gap=gap))
            offset += size
    if agg.kind == 'union':
        agg.error = 'union'
        return
    agg.size = (offset + align - 1) & ~(align - 1)
    agg.align = align
    agg.members = members


def func_pattern(name):
    return r'(?:extern\s+"C"\s+)?([^;{}()]*?)\b' + re.escape(name) + r'\s*\(([^()]*)\)\s*\{'


def parse_unit(text, function, root=ROOT, cplusplus=False):
    code = strip_comments(text)
    aggs = parse_aggregates(code)
    by_name = {}
    included, seen = [], set()

    def include(text):
        for inc in re.findall(r'^\s*#\s*include\s+"([^"]+)"', text, re.M):
            path = root / inc
            if inc in seen or not path.is_file():
                continue
            seen.add(inc)
            header = select_language(strip_comments(path.read_text()), cplusplus)
            include(header)
            included.extend(parse_aggregates(header))
    include(code)
    for a in aggs + included:
        by_name.setdefault(a.name, a)
        if a.tag:
            by_name.setdefault(a.tag, a)
    for a in aggs + included:
        layout(by_name, a)
    info = dict(aggregates=aggs, included={a.name for a in included}, by_name=by_name, code=code)
    fm = re.search(func_pattern(function), code) if function else None
    if not fm:
        info['error'] = 'no definition'
        return info
    params = [p.strip() for p in split_top(fm.group(2), ',')]
    info['params'] = params
    body_start = fm.end() - 1
    info['body'] = code[body_start:match_brace(code, body_start) + 1]
    if not params or params[0] in ('', 'void'):
        info['this'] = None
        return info
    pm = re.fullmatch(r'((?:const\s+|volatile\s+|struct\s+|class\s+)*)(\w+)\s*\*\s*(?:const\s+)?(\w+)', params[0])
    if not pm:
        info['this'] = None
        info['this_param'] = params[0]
        return info
    if pm.group(2) in SCALARS or pm.group(2) == 'void':
        info['this'] = None
        info['this_param'] = params[0]
        return info
    info['this'] = dict(type=pm.group(2), name=pm.group(3))
    # cast views of the object: ((T *)o)
    views = set()
    for vm in re.finditer(r'\(\s*(?:struct\s+)?(\w+)\s*\*\s*\)\s*\(?\s*' + re.escape(pm.group(3)) + r'\b(?!\s*[+-])', info['body']):
        if vm.group(1) in by_name:
            views.add(vm.group(1))
    info['views'] = sorted(views)
    raw = []
    for rm in re.finditer(r'\*\s*\(\s*((?:unsigned |signed |volatile |const )*\w+)\s*\*\s*\)\s*\(\s*\(\s*(?:char|unsigned char)\s*\*\s*\)\s*'
                          + re.escape(pm.group(3)) + r'\s*\+\s*(0x[0-9a-fA-F]+|\d+)\s*\)', info['body']):
        raw.append((int(rm.group(2), 0), rm.group(1)))
    info['raw'] = raw
    return info


# ---------------------------------------------------------------- classes

def load_classes(root=ROOT):
    """Class table of docs/CLASSES.md: name -> {vtable, slots, ctors, dtor, parent, size}."""
    classes = CLASSES
    classes.clear()
    text = (root / 'docs/CLASSES.md').read_text()
    section = text[text.index('## All named classes'):]
    section = section[:section.index('\n## ', 10)]
    for line in section.splitlines():
        cells = [c.strip() for c in line.strip().strip('|').split('|')]
        if len(cells) < 8 or not re.match(r'^T\w+$', cells[0]):
            continue
        size = cells[6].rstrip('*')
        entry = dict(name=cells[0], vtable=cells[1].strip('`'), slots=int(cells[2]) if cells[2].isdigit() else None,
                     ctors=re.findall(r'0x[0-9a-f]+', cells[3]), dtor=cells[4].strip('`'),
                     parent=cells[5] or None, size=int(size, 16) if size else None)
        classes.setdefault(cells[0], entry)
    return classes


def class_of(function, names_longest_first):
    for name in names_longest_first:
        if function.startswith(name + '_'):
            return name, function[len(name) + 1:]
    return None, None


def ancestors(classes, name):
    chain, seen = [], set()
    while name and name in classes and name not in seen:
        seen.add(name)
        chain.append(name)
        parent = classes[name]['parent']
        name = parent if parent in classes else None
    return chain


# ---------------------------------------------------------------- evidence

def kind_of(member):
    t = member['type']
    if member.get('dims'):
        return 'array'
    if t == '<vptr>':
        return 'vptr'
    if '(*)' in t:
        return 'funcptr'
    if t.endswith('*'):
        return 'pointer'
    plain = ' '.join(w for w in t.split() if w not in QUALIFIERS)
    if plain == 'float':
        return 'float'
    if plain in SCALARS:
        return ('unsigned ' if plain.startswith('unsigned') else 'signed ') + str(SCALARS[plain])
    return 'struct'


def unit_evidence(unit, root=ROOT, names=None):
    function = unit['functions'][0]['name']
    text = (root / unit['source']).read_text()
    try:
        info = parse_unit(text, function, root, unit.get('language') == 'c++')
    except ValueError as exc:
        info = dict(error=str(exc))
    ev = dict(id=unit['id'], source=unit['source'], function=function,
              language=unit.get('language', 'c'), shc=is_shc(unit),
              fields=[], virtuals=[], views=[], raw=info.get('raw', []), problems=[])
    if 'error' in info:
        ev['problems'].append(info['error'])
        return ev, info
    this = info.get('this')
    if not this:
        ev['this'] = None
        return ev, info
    ev['this'] = this['type']
    types = [this['type']] + [v for v in info['views'] if v != this['type']]
    ev['views'] = types
    for tname in types:
        agg = info['by_name'].get(tname)
        if tname in info['included']:
            ev['shared'] = tname
            if not (root / HEADER_DIR / (tname + '.h')).is_file() or agg is None or agg.error:
                continue
            # A converted unit: its evidence is the header members its body names.
            used = set(re.findall(r'(?:->|\.)\s*(\w+)', info['body']))
            for mem in agg.members:
                if mem['type'] == '<vptr>':
                    if any(v for v in used if re.fullmatch(r'v\d+', v)):
                        ev['fields'].append(dict(offset=mem['offset'], size=4, type='<vptr>', name='<vptr>', kind='vptr', view=tname))
                elif not mem['gap'] and mem['name'] in used:
                    ev['fields'].append(dict(offset=mem['offset'], size=mem['size'], type=mem['type'], name=mem['name'],
                                             dims=mem.get('dims', []), kind=kind_of(mem), view=tname))
            for index, ret, vname, params in agg.virtuals:
                if re.search(r'->\s*' + vname + r'\s*\(', info['body']):
                    ev['virtuals'].append(dict(index=index, ret=ret, name=vname, params=params, used=True, view=tname))
            continue
        if agg is None:
            ev['problems'].append('this type not defined locally: ' + tname)
            continue
        if agg.error:
            ev['problems'].append(tname + ': ' + agg.error)
            continue
        for mem in agg.members:
            if mem['gap']:
                continue
            if mem['type'] == '<vptr>':
                ev['fields'].append(dict(offset=mem['offset'], size=4, type='<vptr>', name='<vptr>', kind='vptr', view=tname))
                continue
            ev['fields'].append(dict(offset=mem['offset'], size=mem['size'], type=mem['type'], name=mem['name'],
                                     dims=mem.get('dims', []), kind=kind_of(mem), view=tname))
        for index, ret, vname, params in agg.virtuals:
            used = re.search(r'->\s*' + re.escape(vname) + r'\s*\(', info['body']) is not None
            ev['virtuals'].append(dict(index=index, ret=ret, name=vname, params=params, used=used, view=tname))
    return ev, info


def scan(root=ROOT):
    manifest = json.loads((root / 'config/project.json').read_text())
    classes = load_classes(root)
    order = sorted(classes, key=len, reverse=True)
    out = []
    for unit in manifest['units']:
        function = unit['functions'][0]['name']
        cls, method = class_of(function, order)
        if not cls:
            continue
        method_base = re.sub(r'_8c[0-9a-f]{6}$', '', method)
        if not THIS_METHODS.match(method_base):
            continue
        ev, _ = unit_evidence(unit, root)
        ev['class'], ev['method'] = cls, method_base
        out.append(ev)
    return classes, out


def family_root(classes, name):
    chain = ancestors(classes, name)
    return chain[-1] if chain else name


def header_evidence(name, root=ROOT):
    """An existing class header is evidence too, and it outranks units: once committed, its fields
    are the contract later batches extend (new fields go into its gaps) instead of re-deciding."""
    path = root / HEADER_DIR / (name + '.h')
    if not path.is_file():
        return None
    ev = dict(id='header:' + name, class_=name, pseudo=True, fields=[], virtuals=[], language='h', problems=[])
    for cplusplus in (False, True):
        info = parse_unit('#include "%s/%s.h"\n' % (HEADER_DIR, name), '', root, cplusplus)
        agg = info['by_name'].get(name)
        if agg is None or agg.error:
            raise ValueError('Unparsable class header: ' + str(path) + ' ' + str(agg and agg.error))
        for mem in agg.members:
            if mem['gap']:
                continue
            if not cplusplus:
                kind = 'vptr' if mem['offset'] == VPTR and mem['type'] == 'void*' else kind_of(mem)
                ev['fields'].append(dict(offset=mem['offset'], size=mem['size'], type=mem['type'], name=mem['name'],
                                         dims=mem.get('dims', []), kind=kind, view=name))
        if cplusplus:
            for index, ret, vname, params in agg.virtuals:
                if (ret, params) != ('void', ''):
                    ev['virtuals'].append(dict(index=index, ret=ret, name=vname, params=params, used=True, view=name))
    return ev


def merge(classes, evidence, name):
    """Field evidence for `name`: units of the class and of its ancestors (they see the same bytes)."""
    chain = set(ancestors(classes, name))
    units = [e for e in evidence if e['class'] in chain]
    # Ancestor headers first: their fields are fixed for every class below them.
    for base in reversed(ancestors(classes, name)):
        pseudo = header_evidence(base)
        if pseudo:
            pseudo['rank'] = len(ancestors(classes, base))
            units = units + [pseudo]
    slots = defaultdict(Counter)
    views = defaultdict(lambda: defaultdict(list))   # offset -> (size, type, kind) -> [unit ids]
    names = defaultdict(Counter)
    for e in units:
        for f in e['fields']:
            key = (f['size'], f['type'], f['kind'], tuple(f.get('dims', [])))
            if e['id'] not in views[f['offset']][key]:
                views[f['offset']][key].append(e['id'])
            names[f['offset']][f['name']] += (100000 - 1000 * e.get('rank', 0)) if e['id'].startswith('header:') else 1
        for v in e['virtuals']:
            if v['used']:
                slots[v['index']][(v['ret'], v['params'])] += (100000 - 1000 * e.get('rank', 0)) if e['id'].startswith('header:') else 1
    return units, views, names, slots


def conflict_class(a, b):
    """Name the difference between two views of the same offset."""
    (sa, ta, ka, da), (sb, tb, kb, db) = a, b
    if ka == 'vptr' or kb == 'vptr':
        return 'vptr'
    if sa != sb:
        return 'width'
    if {ka, kb} == {'signed 1', 'unsigned 1'} or {ka, kb} == {'signed 2', 'unsigned 2'} or {ka, kb} == {'signed 4', 'unsigned 4'}:
        return 'signedness'
    if 'float' in (ka, kb) and ka != kb:
        return 'float-int'
    if 'pointer' in (ka, kb) and ka != kb:
        return 'pointer-int'
    if 'array' in (ka, kb) or 'struct' in (ka, kb):
        return 'aggregate'
    if ka == kb == 'pointer':
        return 'pointee'
    return 'type'


SHARED_TYPES = {'Vector3': 'src/include/vector3.h'}   # aggregates a class header may embed
VPTR = 0x18
DEPTH = {}
MECHANICAL = re.compile(r'^(?:f_?[0-9a-fA-F]+|field_?[0-9a-fA-F]*|value_?[0-9a-fA-F]*|unknown\w*|pad\w*)$')


def pick_name(counter):
    """A header's own name first; then a descriptive unit name over a mechanical fXX one."""
    return max(counter.items(), key=lambda kv: (kv[1] >= 1000, not MECHANICAL.match(kv[0]), kv[1], kv[0]))[0]


def header_rank(ids):
    """0 without header support; otherwise higher for the more basic class's header."""
    depths = [DEPTH.get(i[7:], 1) for i in ids if i.startswith('header:')]
    return 1000 - min(depths) if depths else 0


def portable_element(t):
    """An array element type a header can state: a scalar, a pointer or a shared aggregate."""
    plain = ' '.join(w for w in t.split() if w not in QUALIFIERS)
    return plain.endswith('*') or plain in SCALARS or plain in SHARED_TYPES


def portable_signature(sig):
    """A virtual slot signature a shared header can state: built-in types and void pointers only."""
    ret, params = sig
    words = re.findall(r'[A-Za-z_]\w*', ret + ' ' + params)
    return all(w in ('void', 'char', 'short', 'int', 'long', 'float', 'double', 'unsigned', 'signed', 'const', 'volatile')
               for w in words)   # TObject layout: CodeWarrior places the vtable pointer after the 0x18-byte TObject header


def resolve(classes, evidence, name):
    """Choose one view per offset (most units, then widest), drop overlapping losers, report conflicts."""
    for c in classes:
        DEPTH.setdefault(c, len(ancestors(classes, c)))
    units, views, names, slots = merge(classes, evidence, name)
    chosen, conflicts = {}, []
    c_vptr_names = Counter()
    for offset in sorted(set(views) | {VPTR}):
        opts = views.get(offset, {})
        merged = defaultdict(list)
        pointer_types = set()
        for key, ids in opts.items():
            if offset == VPTR and (key[2] == 'vptr' or key[1] == 'void*'):
                merged[(4, '<vptr>', 'vptr', ())].extend(ids)
                if key[1] == 'void*' and any(i.startswith('header:') for i in ids):
                    for u in units:
                        if u.get('pseudo'):
                            for f in u['fields']:
                                if f['offset'] == VPTR:
                                    c_vptr_names[f['name']] += 100000 - 1000 * u.get('rank', 0)
                elif key[1] == 'void*':
                    for e in units:
                        for f in e['fields']:
                            if f['offset'] == VPTR and f['type'] == 'void*':
                                c_vptr_names[f['name']] += 1
            elif key[2] == 'pointer':
                merged[(4, '<ptr>', 'pointer', ())].extend(ids)
                pointer_types.add(key[1])
            elif (key[2] == 'struct' and key[1] not in SHARED_TYPES) or (key[2] == 'array' and not portable_element(key[1])):
                conflicts.append(dict(offset=offset, kind='local-aggregate', chosen='', other=key[1], units=sorted(set(ids))))
            else:
                merged[key].extend(ids)
        if offset == VPTR:
            merged.setdefault((4, '<vptr>', 'vptr', ()), [])
            best = ((4, '<vptr>', 'vptr', ()), merged[(4, '<vptr>', 'vptr', ())])
        elif not merged:
            continue
        else:
            best = max(merged.items(), key=lambda kv: (header_rank(kv[1]), len(set(kv[1])), kv[0][0]))
        key = best[0]
        header_void = any(f['offset'] == offset and f['type'] == 'void*' for u in units if u.get('pseudo') for f in u['fields'])
        if key[1] == '<ptr>' and (pointer_types == {'void*'} or header_void):
            key = (4, 'void*', 'pointer', ())
        chosen[offset] = (key, sorted(set(best[1])))
        for other, ids in merged.items():
            if other != best[0]:
                conflicts.append(dict(offset=offset, kind=conflict_class(best[0], other), chosen=key[1],
                                      other=other[1], units=sorted(set(ids))))
    fields = []
    for offset in sorted(chosen):
        key, ids = chosen[offset]
        if fields and fields[-1]['offset'] + fields[-1]['size'] > offset:
            prev = fields[-1]
            rank = lambda ids_: (header_rank(ids_), len(ids_))
            if rank(ids) > rank(prev['units']) and prev['kind'] != 'vptr':
                conflicts.append(dict(offset=prev['offset'], kind='overlap', chosen=key[1], other=prev['type'], units=prev['units']))
                fields.pop()
            else:
                conflicts.append(dict(offset=offset, kind='overlap', chosen=prev['type'], other=key[1], units=ids))
                continue
        if key[2] == 'vptr':
            fname = c_vptr_names.most_common(1)[0][0] if c_vptr_names else 'vtable'
        else:
            fname = pick_name(names[offset])
        fields.append(dict(offset=offset, size=key[0], type=key[1], kind=key[2], dims=list(key[3]), units=ids, name=fname))
    size = classes.get(name, {}).get('size')
    if size:
        # A view that runs past the constructor's size field cannot be the object's own field.
        for f in [f for f in fields if f['offset'] + f['size'] > size]:
            conflicts.append(dict(offset=f['offset'], kind='beyond-size', chosen='', other=f['type'], units=f['units']))
            fields.remove(f)
    vslots, vconf = {}, []
    for index, sigs in sorted(slots.items()):
        portable = Counter({s: c for s, c in sigs.items() if portable_signature(s)})
        for sig in sigs:
            if sig not in portable:
                vconf.append(dict(index=index, kind='slot-local-type', chosen=None, other=sig))
        if not portable:
            continue
        best = portable.most_common(1)[0][0]
        vslots[index] = best
        for sig in portable:
            if sig != best:
                vconf.append(dict(index=index, kind='slot-signature', chosen=best, other=sig))
    nslots = classes.get(name, {}).get('slots') or 0
    return dict(name=name, units=units, fields=fields, conflicts=conflicts, slots=vslots, slot_conflicts=vconf,
                nslots=max(nslots, max(list(vslots) + [-1]) + 1), size=classes.get(name, {}).get('size'))


# ---------------------------------------------------------------- emission

def field_name(field):
    name = field['name']
    if name == '<vptr>':
        return 'vtable'
    return name


def guard(name):
    return 'PSO_CLASSES_' + re.sub(r'\W', '_', name).upper() + '_H'


CLASSES = {}


def pointer_tag(cls, offset):
    """Opaque pointee tag, named after the most basic class whose size covers the offset, so a
    field keeps one tag through the whole family."""
    owner = cls
    for base in reversed(ancestors(CLASSES, cls)):
        if (CLASSES[base].get('size') or 0) > offset:
            owner = base
            break
    return '%s_p%x' % (owner, offset)


def emit_header(classes, layout_, evidence_by_id=None):
    """C-compatible header. In C++ the vtable pointer at 0x18 is declared as virtual slots, so the
    class has exactly the layout CodeWarrior gives the units' `char unknown0[0x18]; virtual ...`."""
    name = layout_['name']
    size = layout_['size']
    chain = ancestors(classes, name)
    fields = layout_['fields']
    has_vptr = any(f['kind'] == 'vptr' for f in fields)
    lines = ['#ifndef ' + guard(name), '#define ' + guard(name),
             '/* %s: generated by tools/class_types.py from the field views of %d matched units.' % (name, sum(1 for u in layout_['units'] if not u.get('pseudo') and u.get('method') != 'attributed')),
             ' * Inheritance: %s. Size 0x%x (constructor size field).' % (' -> '.join(chain) or name, size or 0) if size else
             ' * Inheritance: %s. Size unknown.' % (' -> '.join(chain) or name),
             ' * Field names are the units\' names (fXX = offset); gaps are pad_XX. Pointers to objects',
             ' * this header does not describe are opaque `struct %s_pXX`, completed by each unit. */' % name]
    for tname in sorted({f['type'] for f in fields} & set(SHARED_TYPES)):
        lines.append('#include "%s"' % SHARED_TYPES[tname])
    ptr_tags = [pointer_tag(name, f['offset']) for f in fields if f['type'] == '<ptr>']
    for tag in ptr_tags:
        lines.append('struct %s;' % tag)
    lines.append('typedef struct %s %s;' % (name, name) if not has_vptr else '')
    if has_vptr:
        lines += ['#ifdef __cplusplus', 'class %s {' % name, 'public:', '#else',
                  'struct %s {' % name, '#endif']
    else:
        lines.append('struct %s {' % name)
    # Where each ancestor ends, a comment marks the start of the next class's own fields.
    bounds = sorted({(classes[a]['size'], a) for a in chain[1:] if classes.get(a, {}).get('size')})
    owner = {}
    for i, (end, base) in enumerate(bounds):
        owner[end] = chain[chain.index(base) - 1]

    def mark(at):
        if at in owner and '    /* %s */' % owner[at] not in lines:
            lines.append('    /* %s */' % owner[at])

    def pad(start, stop):
        while start < stop:
            mark(start)
            cut = min([b for b, _ in bounds if start < b < stop] + [stop])
            lines.append('    char pad_%x[0x%x];' % (start, cut - start))
            start = cut

    offset = 0
    for f in fields:
        if f['offset'] > offset:
            pad(offset, f['offset'])
        mark(f['offset'])
        if f['kind'] == 'vptr':
            lines.append('#ifdef __cplusplus')
            for i in range(layout_['nslots']):
                ret, params = layout_['slots'].get(i, ('void', ''))
                lines.append('    virtual %s v%d(%s);' % (ret, i, params))
            lines.append('#else')
            lines.append('    void *%s;' % f['name'])
            lines.append('#endif')
        else:
            t = f['type']
            if t == '<ptr>':
                t = 'struct ' + pointer_tag(name, f['offset']) + '*'
            dims = ''.join('[0x%x]' % d for d in f['dims'])
            if '(*)' in t:
                lines.append('    %s;' % t.replace('(*)', '(*%s%s)' % (f['name'], dims), 1))
                offset = f['offset'] + f['size']
                continue
            stars = len(t) - len(t.rstrip('*'))
            lines.append('    %s %s%s%s;' % (t.rstrip('*').strip(), '*' * stars, f['name'], dims))
        offset = f['offset'] + f['size']
    if size and size > offset:
        pad(offset, size)
    lines.append('};')
    if has_vptr:
        lines += ['#ifndef __cplusplus', 'typedef struct %s %s;' % (name, name), '#endif']
    if size:
        lines.append('typedef char check_%s_size[sizeof(%s) == 0x%x ? 1 : -1];' % (name, name, size))
    lines.append('#endif')
    return '\n'.join(l for l in lines if l != '') + '\n'


# ---------------------------------------------------------------- conversion

IDENT = re.compile(r'[A-Za-z_]\w*')


def rename_idents(text, mapping):
    out, last = [], 0
    for m in IDENT.finditer(text):
        if m.group(0) in mapping:
            # never rename member names after -> or .
            before = text[:m.start()].rstrip()
            if before.endswith('->') or before.endswith('.'):
                continue
            out.append(text[last:m.start()]); out.append(mapping[m.group(0)]); last = m.end()
    out.append(text[last:])
    return ''.join(out)


INT_KINDS = ('signed 4', 'unsigned 4')
VTABLE_HEADER = 'src/include/object_vtable.h'


def compatible(ev, layout_, renames=None, extras=None):
    """Every field the unit's this-views declare must be the header's field (same offset, type, name).
    With `renames`, a name difference is recorded there (unit name -> header name) instead."""
    by_offset = {f['offset']: f for f in layout_['fields']}
    tags = {}
    for f in ev['fields']:
        h = by_offset.get(f['offset'])
        where = 'field 0x%x ' % f['offset']
        # A float inside a header Vector3 becomes a member of it: o->f40 -> o->f3c.y
        v3 = [g for g in layout_['fields'] if g['type'] == 'Vector3' and g['offset'] <= f['offset'] < g['offset'] + 12]
        if v3 and f['type'] == 'float' and not f.get('dims') and (f['offset'] - v3[0]['offset']) % 4 == 0 \
                and renames is not None:
            target = '%s.%s' % (v3[0]['name'], 'xyz'[(f['offset'] - v3[0]['offset']) // 4])
            if renames.get(f['name'], target) != target:
                return False, where + 'float inside Vector3 twice', tags
            renames[f['name']] = target
            continue
        if h is None:
            return False, where + 'not in header', tags
        if h['kind'] == 'vptr':
            if f['kind'] == 'vptr' and ev['language'] == 'c++':
                continue
            if ev['language'] == 'c' and f['type'] == 'void*':
                if f['name'] == h['name']:
                    continue
                if renames is not None and renames.get(f['name'], h['name']) == h['name']:
                    renames[f['name']] = h['name']
                    continue
            if extras is not None and ev['language'] == 'c++' and f['kind'] == 'pointer' and \
                    extras.setdefault('vtable_member', f['name']) == f['name']:
                # A C++ constructor/destructor storing the vtable pointer as data: it writes
                # through TOBJECT_VTABLE(o) (src/include/object_vtable.h) instead.
                continue
            return False, where + 'vptr view ' + f['type'] + ' ' + f['name'], tags
        loose = extras is not None and extras.get('loose') is not None
        if loose and {f['kind'], h['kind']} & {'pointer'} and ({f['kind'], h['kind']} - {'pointer'}) <= set(INT_KINDS) \
                and f['kind'] != h['kind']:
            # Pointer against int: try the header's type; only an exact compile admits it.
            extras['loose'].append(f['offset'])
        elif h['type'] == '<ptr>':
            if f['kind'] != 'pointer':
                return False, where + 'kind %s vs pointer' % f['kind'], tags
            pointee = f['type'][:-1].strip()
            if pointee != 'void':
                if pointee.endswith('*') or pointee in SCALARS or ' ' in pointee:
                    return False, where + 'pointee ' + pointee, tags
                if pointee in tags.values() or tags.get(pointee, pointer_tag(layout_['name'], f['offset'])) != pointer_tag(layout_['name'], f['offset']):
                    return False, where + 'pointee shared by two fields', tags
                tags[pointee] = pointer_tag(layout_['name'], f['offset'])
        elif (h['type'], h['size'], h['dims']) != (f['type'], f['size'], f.get('dims', [])):
            return False, where + '%s vs %s' % (f['type'], h['type']), tags
        if h['name'] != f['name']:
            if renames is None or renames.get(f['name'], h['name']) != h['name']:
                return False, where + 'name %s vs %s' % (f['name'], h['name']), tags
            renames[f['name']] = h['name']
    for v in ev['virtuals']:
        if v['used'] and layout_['slots'].get(v['index']) != (v['ret'], v['params']):
            return False, 'virtual slot %d signature' % v['index'], tags
    return True, '', tags


def convert_unit(unit, ev, info, layout_, root=ROOT, loose=False):
    """Rewrite one unit: drop its local this-type definitions, include the class header, rename."""
    cls = layout_['name']
    renames = {}
    extras = {'loose': []} if loose else {}
    ok, why, tags = compatible(ev, layout_, renames, extras)
    if not ok:
        return None, why
    if renames:
        # Member renames are safe only when no other aggregate the unit sees has either name.
        others = [a for a in info['aggregates'] if a.name not in ev['views'] and a.tag not in ev['views']]
        others += [a for a in info['by_name'].values() if a.name in info['included']]
        for a in others:
            members = {m['name'] for m in (a.members or [])} | set(re.findall(r'\b(\w+)\s*(?:\[[^\]]*\])*\s*;', a.body))
            clash = members & (set(renames) | set(renames.values()))
            if clash:
                return None, 'member rename clashes with %s.%s' % (a.name, sorted(clash)[0])
    text = (root / unit['source']).read_text()
    code = info['code']
    # A static size assertion on the local view only guards that view: it goes with the view.
    view_alt = '|'.join(re.escape(v) for v in ev['views'])
    size_assert = re.compile(r'^[ \t]*typedef\s+char\s+\w+\s*\[\s*\(?\s*sizeof\s*\(\s*(?:struct\s+)?(?:' + view_alt +
                             r')\s*\)\s*\)?\s*==\s*(?:0x[0-9a-fA-F]+|\d+)\s*\?\s*1\s*:\s*-\s*1\s*\]\s*;[ \t]*\n?', re.M)
    rest = size_assert.sub('', code)
    if 'sizeof' in info['body'] or re.search(r'sizeof\s*\(\s*(?:struct\s+)?(?:' + view_alt + r')\s*\)', rest):
        return None, 'sizeof of the local view'
    dropped_asserts = [(m.start(), m.end()) for m in size_assert.finditer(code)]
    if ev['language'] == 'c++' and re.search(r'^(?!extern "C")[^\n#]*\b\w+\s*\([^;{]*\)\s*;', code, re.M):
        # A non-extern "C" prototype would mangle the renamed types.
        for line in code.splitlines():
            if re.match(r'\s*extern "C"', line) or not re.search(r'\w\s*\([^;{]*\)\s*;\s*$', line):
                continue
            if re.match(r'\s*(virtual|return|if|while|for|switch)\b', line) or '=' in line or '->' in line:
                continue
            if line.startswith(' '):
                continue
            return None, 'C++ prototype with C++ linkage'
    views = ev['views']
    pointees = set(tags)
    drop = set(views) | pointees
    # Opaque pointee structs: keep the unit's own definition, renamed to the header's tag.
    mapping = {v: cls for v in views}
    for pointee, tag in tags.items():
        mapping[pointee] = tag
    # Remove definitions (aggregate spans) of the view types and their forward typedefs.
    spans = []
    for a in info['aggregates']:
        if a.name in views or (a.tag in views if a.tag else False):
            spans.append(a.span)
    for fm in FORWARD.finditer(code):
        names = {x for x in fm.groups() if x}
        if names & set(views):
            spans.append((fm.start(), fm.end()))
        elif names & pointees and fm.group(1):
            # `typedef struct P P;` for a pointee: keep as `typedef struct TAG P;` through the rename,
            # which turns it into `typedef struct TAG TAG;` (a unit-local typedef of the opaque tag)
            pass
    # Every use of a pointee type other than via the header field must be through the same tag.
    for a in info['aggregates']:
        if a.name in pointees and a.kind == 'class':
            return None, 'pointee is a C++ class'
    # The unit's own copy of a shared type the header includes (or that nothing else uses) goes.
    header_shared = {f['type'] for f in layout_['fields']} & set(SHARED_TYPES)
    extra_headers = []
    for a in info['aggregates']:
        if a.name == 'Vector3' and a.members is not None and [(m['type'], m['offset']) for m in a.members] == [('float', 0), ('float', 4), ('float', 8)]:
            rest = code[:a.span[0]] + code[a.span[1]:]
            if 'Vector3' in header_shared:
                spans.append(a.span)
            elif not re.search(r'\bVector3\b', rest):
                spans.append(a.span)
    for tname in sorted(header_shared):
        extra_headers.append(SHARED_TYPES[tname])
        if tname not in [a.name for a in info['aggregates']] and SHARED_TYPES[tname] not in unit.get('headers', []):
            pass
    spans += dropped_asserts
    spans.sort()
    pieces, last = [], 0
    for s, e in spans:
        if s < last:
            continue
        pieces.append(text[last:s]); last = e
        while last < len(text) and text[last] == '\n' and (not pieces[-1] or pieces[-1].endswith('\n')):
            last += 1
    pieces.append(text[last:])
    new = ''.join(pieces)
    new = rename_idents(new, mapping)
    if renames:
        new = re.sub(r'(->|\.)(\s*)(' + '|'.join(map(re.escape, sorted(renames, key=len, reverse=True))) + r')\b(?!\s*\.\s*[xyz]\b)',
                     lambda m: m.group(1) + m.group(2) + renames[m.group(3)], new)
    # A cast view of the object to its own class is now a no-op cast: drop it.
    param = re.escape(info['this']['name'])
    new = re.sub(r'\(\(\s*' + re.escape(cls) + r'\s*\*\s*\)\s*' + param + r'\s*\)(?=\s*->)', info['this']['name'], new)
    vmember = extras.get('vtable_member')
    if vmember:
        new = re.sub(r'\b' + param + r'\s*->\s*' + re.escape(vmember) + r'\b', 'TOBJECT_VTABLE(%s)' % info['this']['name'], new)
        if re.search(r'(->|\.)\s*' + re.escape(vmember) + r'\b', strip_comments(new)):
            return None, 'vtable member used other than through the object'
    include = '#include "%s/%s.h"\n' % (HEADER_DIR, cls)
    if vmember:
        include = '#include "%s"\n' % VTABLE_HEADER + include
    headers = list(unit.get('headers', []))
    # The include goes after any existing includes, else at the top.
    lines = new.split('\n')
    pos = 0
    for i, line in enumerate(lines):
        if line.startswith('#include'):
            pos = i + 1
    lines.insert(pos, include.rstrip('\n'))
    new = '\n'.join(lines)
    removed = text.count('\n') - new.count('\n')
    header = '%s/%s.h' % (HEADER_DIR, cls)
    if vmember:
        extra_headers.append(VTABLE_HEADER)
    for h in extra_headers + [header]:
        if h not in headers:
            headers.append(h)
    return dict(text=new, headers=headers, removed=removed + 1, renames=renames,
                vtable=bool(vmember), loose=extras.get('loose') or []), ''


# ---------------------------------------------------------------- commands

def expand(classes, names):
    """`@Root` names the class and every class below it."""
    out = []
    for n in names:
        if n.startswith('@'):
            out += sorted(c for c in classes if n[1:] in ancestors(classes, c))
        elif n not in out:
            out.append(n)
    return out


def build_layouts(classes, evidence, names):
    return {n: resolve(classes, evidence, n) for n in names}


def cmd_scan(args):
    classes, evidence = scan()
    with_this = [e for e in evidence if e.get('this')]
    print('class-method units:', len(evidence), 'with a this-pointer struct:', len(with_this),
          'with problems:', sum(1 for e in evidence if e['problems']))
    if args.json:
        Path(args.json).write_text(json.dumps(dict(evidence=evidence), indent=1))


def cmd_layout(args):
    classes, evidence = scan()
    args.classes = expand(classes, args.classes)
    for n in args.classes:
        lay = resolve(classes, evidence, n)
        print('==', n, 'size', hex(lay['size'] or 0), 'units', len(lay['units']))
        for f in lay['fields']:
            print('  0x%-4x %-3d %-24s %-10s %d units' % (f['offset'], f['size'], f['type'], f['name'], len(f['units'])))
        for c in lay['conflicts']:
            print('  conflict 0x%x %s: %s vs %s %s' % (c['offset'], c['kind'], c['chosen'], c['other'], c['units']))
        for c in lay['slot_conflicts']:
            print('  slot conflict', c)


def load_attributed(path):
    """Evidence of units attributed to a class by other evidence than their name."""
    if not path:
        return []
    manifest = json.loads((ROOT / 'config/project.json').read_text())
    units = {u['id']: u for u in manifest['units']}
    out = []
    for uid, entry in sorted(json.loads(Path(path).read_text())['units'].items()):
        ev, _ = unit_evidence(units[uid])
        ev['class'], ev['method'] = entry['class'], 'attributed'
        out.append(ev)
    return out


def additive(old_text, new_text, name):
    """A re-emitted header may only fill gaps: every existing field and slot signature stays."""
    with_dir = lambda text: text
    def parse(text, cplusplus):
        agg = parse_aggregates(select_language(strip_comments(text), cplusplus))
        by = {a.name: a for a in agg}
        a = by.get(name)
        layout({**by, **{'Vector3': Aggregate('struct', 'Vector3', 'Vector3', 'float x, y, z;', (0, 0), '')}}, a)
        return a
    for cplusplus in (False, True):
        old, new = parse(old_text, cplusplus), parse(new_text, cplusplus)
        if old is None or new is None or old.error or new.error:
            return False
        nm = {(m['offset'], m['size'], m['type'], m['name']) for m in new.members if not m['gap']}
        if any((m['offset'], m['size'], m['type'], m['name']) not in nm for m in old.members if not m['gap']):
            return False
        if new.size != old.size:
            return False
        ov = {i: (r, p) for i, r, _, p in old.virtuals}
        nv = {i: (r, p) for i, r, _, p in new.virtuals}
        if any(ov[i] != nv.get(i) and ov[i] != ('void', '') for i in ov):
            return False
    return True


def emitted_type(cls, f):
    return 'struct %s*' % pointer_tag(cls, f['offset']) if f['type'] == '<ptr>' else f['type']


def keep_new_field(classes, name, f, path):
    """A field a header did not have yet must not contradict a subclass's committed header, and
    must not pull vector3.h into a header whose users don't declare it."""
    if f['kind'] == 'vptr':
        return True
    old = header_fields(name) if path.is_file() else {}
    key = (f['offset'], f['size'], emitted_type(name, f), f['name'])
    if old and f['offset'] in old and (old[f['offset']]['offset'], old[f['offset']]['size'],
                                         old[f['offset']]['type'], old[f['offset']]['name']) == key:
        return True
    if path.is_file() and f['type'] in SHARED_TYPES and SHARED_TYPES[f['type']] not in path.read_text():
        return False
    for sub in classes:
        if name in ancestors(classes, sub)[1:] and (ROOT / HEADER_DIR / (sub + '.h')).is_file():
            for g in header_fields(sub).values():
                if g['kind'] == 'vptr' or g['offset'] >= f['offset'] + f['size'] or g['offset'] + g['size'] <= f['offset']:
                    continue
                if (g['offset'], g['size'], g['type'], g['name']) != key:
                    return False
    return True


def cmd_emit(args):
    classes, evidence = scan()
    evidence += load_attributed(args.attribution)
    args.classes = expand(classes, args.classes)
    (ROOT / HEADER_DIR).mkdir(parents=True, exist_ok=True)
    for n in sorted(args.classes, key=lambda c: len(ancestors(classes, c))):
        lay = resolve(classes, evidence, n)
        path = ROOT / HEADER_DIR / (n + '.h')
        lay['fields'] = [f for f in lay['fields'] if keep_new_field(classes, n, f, path)]
        if not path.is_file():
            # A new base header names the C vtable member as its subclasses' headers do.
            subs = [s for s in classes if n in ancestors(classes, s)[1:] and (ROOT / HEADER_DIR / (s + '.h')).is_file()]
            names = Counter(header_fields(s)[VPTR]['name'] for s in subs if VPTR in header_fields(s))
            for f in lay['fields']:
                if f['kind'] == 'vptr' and names:
                    f['name'] = names.most_common(1)[0][0]
        text = emit_header(classes, lay)
        if path.is_file():
            old = path.read_text()
            if old == text:
                continue
            if not additive(old, text, n):
                print('refused (not a pure gap fill):', path.relative_to(ROOT))
                continue
            print('extended', path.relative_to(ROOT))
        else:
            print('wrote', path.relative_to(ROOT))
        path.write_text(text)


def cmd_convert(args):
    classes, evidence = scan()
    args.classes = expand(classes, args.classes)
    manifest_path = ROOT / 'config/project.json'
    manifest_text = manifest_path.read_text()
    manifest = json.loads(manifest_text)
    units = {u['id']: u for u in manifest['units']}
    only = set(args.only or [])
    skip = set(args.skip or [])
    results = []
    # Units attributed to a class by other evidence than their name (vtable slot, constructor,
    # callers, layout); see docs/TYPES.md.
    evidence += load_attributed(args.attribution)
    for n in args.classes:
        lay = resolve(classes, evidence, n)
        for ev in lay['units']:
            if ev.get('pseudo'):
                continue
            if ev['class'] != n and not args.ancestors:
                continue
            if only and ev['id'] not in only or ev['id'] in skip:
                continue
            unit = units[ev['id']]
            if ev.get('shared') in classes:
                results.append((ev['id'], n, 'already shared: ' + ev['shared']))
                continue
            if ev.get('shared'):
                results.append((ev['id'], n, 'existing shared header: ' + ev['shared']))
                continue
            if not ev.get('this') or not ev['fields']:
                results.append((ev['id'], n, 'no object struct (no this-pointer struct or no fields)'))
                continue
            if ev['shc']:
                results.append((ev['id'], n, 'SHC unit (no project headers)'))
                continue
            if ev['problems']:
                results.append((ev['id'], n, 'parse: ' + '; '.join(ev['problems'])))
                continue
            if not (ROOT / HEADER_DIR / (n + '.h')).is_file():
                results.append((ev['id'], n, 'no header for the class (run emit first)'))
                continue
            _, info = unit_evidence(unit)
            res, why = convert_unit(unit, ev, info, lay, loose=args.loose)
            if res is None:
                results.append((ev['id'], n, 'local: ' + why))
                continue
            notes = ''
            if res['renames']:
                notes += ', renamed ' + ','.join('%s->%s' % kv for kv in sorted(res['renames'].items()))
            if res['vtable']:
                notes += ', vtable via TOBJECT_VTABLE'
            if res['loose']:
                notes += ', pointer/int at ' + ','.join('0x%x' % o for o in res['loose'])
            results.append((ev['id'], n, 'converted, -%d lines%s' % (res['removed'], notes)))
            if args.write:
                (ROOT / unit['source']).write_text(res['text'])
                unit['headers'] = res['headers']
    if args.write:
        manifest_path.write_text(json.dumps(manifest, indent=2) + '\n')
    for r in results:
        print(*r, sep='\t')


def header_fields(name, root=ROOT):
    ev = header_evidence(name, root)
    return {f['offset']: f for f in ev['fields']} if ev else None


def check(root=ROOT):
    """Header contract, without a compiler: every class header parses in C and C++, has the
    documented size, agrees with its ancestors' headers where they overlap, and is included only
    by units that declare it (with vector3.h when used) in config/project.json."""
    problems = []
    classes = load_classes(root)
    manifest = json.loads((root / 'config/project.json').read_text())
    headers = sorted((root / HEADER_DIR).glob('*.h')) if (root / HEADER_DIR).is_dir() else []
    users = Counter()
    for unit in manifest['units']:
        text = (root / unit['source']).read_text()
        for inc in re.findall(r'^\s*#\s*include\s+"(%s/[^"]+)"' % re.escape(HEADER_DIR), text, re.M):
            users[inc] += 1
            if inc not in unit.get('headers', []):
                problems.append('%s includes undeclared %s' % (unit['id'], inc))
            if 'Vector3' in (root / inc).read_text() and SHARED_TYPES['Vector3'] not in unit.get('headers', []):
                problems.append('%s lacks %s' % (unit['id'], SHARED_TYPES['Vector3']))
    attribution = root / 'config/class-attribution.json'
    if attribution.is_file():
        by_id = {u['id']: u for u in manifest['units']}
        for uid, entry in json.loads(attribution.read_text())['units'].items():
            inc = '#include "%s/%s.h"' % (HEADER_DIR, entry['class'])
            if uid not in by_id or inc not in (root / by_id[uid]['source']).read_text():
                problems.append('%s: attributed to %s but does not include its header' % (uid, entry['class']))
    for path in headers:
        name = path.stem
        if name not in classes:
            problems.append('%s: not a class in docs/CLASSES.md' % path.name)
            continue
        try:
            mine = header_fields(name, root)
        except ValueError as exc:
            problems.append(str(exc))
            continue
        size = classes[name]['size']
        text = path.read_text()
        if size and 'sizeof(%s) == 0x%x ?' % (name, size) not in text:
            problems.append('%s: size check is not 0x%x' % (path.name, size))
        if not users['%s/%s' % (HEADER_DIR, path.name)]:
            problems.append('%s: included by no unit' % path.name)
        for base in ancestors(classes, name)[1:]:
            if not (root / HEADER_DIR / (base + '.h')).is_file():
                continue
            theirs = header_fields(base, root)
            for offset, f in theirs.items():
                g = mine.get(offset)
                if g and (g['type'], g['size'], g['name']) != (f['type'], f['size'], f['name']):
                    problems.append('%s 0x%x %s %s disagrees with %s %s %s' % (name, offset, g['type'], g['name'], base, f['type'], f['name']))
    return problems


def cmd_check(args):
    problems = check()
    for p in problems:
        print(p)
    if problems:
        sys.exit(1)
    print('class headers: consistent')


def cmd_report(args):
    classes, evidence = scan()
    fam = defaultdict(list)
    for e in evidence:
        fam[family_root(classes, e['class'])].append(e)
    rows = []
    for root_name, evs in fam.items():
        rows.append((len(evs), sum(1 for e in evs if e.get('this') and e['fields']), root_name))
    rows.sort(reverse=True)
    print('families', len(rows), 'units', sum(r[0] for r in rows), 'with this-type fields', sum(r[1] for r in rows))
    for r in rows[:args.top]:
        print(*r, sep='\t')


def main(argv=None):
    p = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = p.add_subparsers(dest='command', required=True)
    s = sub.add_parser('scan'); s.add_argument('--json'); s.set_defaults(func=cmd_scan)
    s = sub.add_parser('layout'); s.add_argument('classes', nargs='+'); s.set_defaults(func=cmd_layout)
    s = sub.add_parser('emit'); s.add_argument('classes', nargs='+'); s.add_argument('--attribution')
    s.set_defaults(func=cmd_emit)
    s = sub.add_parser('convert'); s.add_argument('classes', nargs='+')
    s.add_argument('--write', action='store_true', help='rewrite sources and config/project.json')
    s.add_argument('--only', nargs='*'); s.add_argument('--skip', nargs='*')
    s.add_argument('--ancestors', action='store_true', help='also convert ancestor-class units to this header')
    s.add_argument('--attribution', help='JSON {"units": {unit id: {"class": ...}}} of units attributed by evidence')
    s.add_argument('--loose', action='store_true', help='also try pointer-vs-int views with the header type (keep only exact units)')
    s.set_defaults(func=cmd_convert)
    s = sub.add_parser('check'); s.set_defaults(func=cmd_check)
    s = sub.add_parser('report'); s.add_argument('--top', type=int, default=30); s.set_defaults(func=cmd_report)
    args = p.parse_args(argv)
    args.func(args)


if __name__ == '__main__':
    main()
