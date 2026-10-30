#!/usr/bin/env python3
"""Typed static-data modules: manifest checks, source lint, exact compile/link/compare.

A data module is one C source that defines, in address order, every object of one
complete contiguous reference range. It is compiled with the pinned settings
(plain C, no per-unit flags), must emit only `.rodata`, is linked at the range's
original address with the pinned GNU linker, and must reproduce every byte of the
range. Only typed definitions are accepted:

* `vtable`: an array of `VirtualFunction` whose entries are `0` or named, declared
  functions. A pointer-valued slot written as an integer is rejected.
* `string`: a `char` array initialized only by C string literals.
* `function_table`: a `Function const` array of `0` or declared functions.
* `pointer_table`: `const void *const` entries that are `0`, `(void *)function` or a
  declared data object.
* `float_table`, `int_table`, `int16_table`, `byte_table`: arrays of `float`,
  `int`/`unsigned int`, `short`/`unsigned short`, `signed char`/`unsigned char`
  with plain literals.
* `record_table`: an array of a `Record_<addr>` struct whose fields are `const void *`,
  `float`, `int` or `unsigned int`; pointer fields follow the pointer rule.

No integer or float word may equal a known symbol address (it must be a pointer).

Opaque byte, halfword or word dumps are not a data kind and earn no credit.
"""
import argparse
import json
import os
from pathlib import Path
import re
import shutil
import struct
import subprocess
import tempfile

import matching

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = 'config/data.json'
KINDS = {'vtable', 'string', 'function_table', 'pointer_table', 'float_table', 'int_table',
         'int16_table', 'byte_table', 'record_table'}
POINTER_KINDS = {'vtable', 'function_table', 'pointer_table'}
ALIGNMENT = {'vtable': 4, 'function_table': 4, 'pointer_table': 4, 'float_table': 4, 'int_table': 4,
             'record_table': 4, 'int16_table': 2, 'byte_table': 1, 'string': 1}
IDENT = r'[A-Za-z_][A-Za-z_0-9]*'
R_SH_DIR32 = 1


def read(root=ROOT):
    """The data manifest; an absent manifest means no reconstructed data."""
    path = Path(root) / MANIFEST
    if not path.exists():
        return {'schema_version': 1, 'units': []}
    return json.loads(path.read_text())


def unit_size(unit):
    return unit['ranges'][0]['size']


def validate(data, base, size, code_ids=()):
    """Structural checks that need no compiler or reference: one contiguous range per
    module, objects that tile it exactly in address order, known kinds, unique names."""
    if data.get('schema_version') != 1:
        raise ValueError('Unsupported data manifest schema')
    ids, names = set(code_ids), set()
    for unit in data['units']:
        if unit['id'] in ids:
            raise ValueError('Duplicate unit identifier: ' + unit['id'])
        ids.add(unit['id'])
        source = Path(unit['source'])
        if (source.is_absolute() or '..' in source.parts or source.parts[:2] != ('src', 'data')
                or source.suffix != '.c'):
            raise ValueError('Data module source must be src/data/*.c: ' + unit['id'])
        if unit.get('language', 'c') != 'c' or 'linker' in unit or 'flags' in unit:
            raise ValueError('Data modules use the pinned C settings and GNU linker: ' + unit['id'])
        if len(unit['ranges']) != 1:
            raise ValueError('Data modules must describe one complete contiguous range')
        r = unit['ranges'][0]
        start = int(unit['address'], 0)
        if base + r['offset'] != start or r['size'] <= 0 or r['offset'] < 0 or r['offset'] + r['size'] > size:
            raise ValueError('Invalid data module range: ' + unit['id'])
        if not re.fullmatch(r'[0-9a-f]{64}', unit.get('reference_sha256', '')):
            raise ValueError('Missing data module reference hash: ' + unit['id'])
        cursor = start
        if not unit['objects']:
            raise ValueError('Empty data module: ' + unit['id'])
        for obj in unit['objects']:
            if obj['kind'] not in KINDS:
                raise ValueError('Untyped or unknown data kind: ' + obj['kind'])
            if not re.fullmatch(IDENT, obj['name']) or obj['name'] in names:
                raise ValueError('Invalid or duplicate data object name: ' + obj['name'])
            names.add(obj['name'])
            address = int(obj['address'], 0)
            if address != cursor or obj['size'] <= 0:
                raise ValueError('Data objects must tile the module range: ' + unit['id'])
            align = ALIGNMENT[obj['kind']]
            if address % align or obj['size'] % align:
                raise ValueError('Misaligned or partial table: ' + obj['name'])
            cursor = address + obj['size']
        if cursor != start + r['size']:
            raise ValueError('Data objects do not cover the module range: ' + unit['id'])
        for name, address in unit.get('symbols', {}).items():
            if not re.fullmatch('_' + IDENT, name) or not 0 <= int(address, 0) <= 0xffffffff:
                raise ValueError('Invalid external symbol: ' + name)
    return data


# ----------------------------------------------------------------- source lint
def statements(text):
    """Split C text into statements at semicolons outside string literals, comments and
    braces. Comments become a space; string literals are kept verbatim."""
    out, cur, i, n, depth = [], [], 0, len(text), 0
    literal = re.compile(STRING_LITERAL)
    while i < n:
        c = text[i]
        if text.startswith('/*', i):
            j = text.find('*/', i + 2)
            if j < 0:
                raise ValueError('Unterminated comment')
            cur.append(' '); i = j + 2
        elif text.startswith('//', i):
            j = text.find('\n', i)
            cur.append(' '); i = n if j < 0 else j
        elif c == '"':
            m = literal.match(text, i)
            if not m:
                raise ValueError('Unsupported string literal')
            cur.append(m[0]); i = m.end()
        elif c == "'" or c == '#' or c == '\\':
            raise ValueError('Data modules contain only declarations and typed definitions')
        elif c == ';' and depth == 0:
            out.append(' '.join(''.join(cur).split())); cur = []; i += 1
        else:
            depth += (c == '{') - (c == '}')
            if depth < 0:
                raise ValueError('Unbalanced braces')
            cur.append(c); i += 1
    if ''.join(cur).strip() or depth:
        raise ValueError('Trailing text after the last statement')
    return out


STRING_LITERAL = r'"(?:[^"\\\n]|\\(?:[0-7]{1,3}|[nt"\\?\'abfrv]))*"'
INT_LITERAL = r'-?(?:0x[0-9a-f]+|[0-9]+)u?'
FLOAT_LITERAL = r'-?(?:[0-9]+\.[0-9]*(?:e[+-]?[0-9]+)?|[0-9]+e[+-]?[0-9]+)f'
# element type -> (kind, element size, integer range or 'float')
SCALARS = {'const float': ('float_table', 4, 'float'),
           'const int': ('int_table', 4, (-2 ** 31, 2 ** 31 - 1)),
           'const unsigned int': ('int_table', 4, (0, 2 ** 32 - 1)),
           'const short': ('int16_table', 2, (-2 ** 15, 2 ** 15 - 1)),
           'const unsigned short': ('int16_table', 2, (0, 2 ** 16 - 1)),
           'const signed char': ('byte_table', 1, (-128, 127)),
           'const unsigned char': ('byte_table', 1, (0, 255))}
FIELD_TYPES = {'const void *': 'pointer', 'float': 'float', 'int': 'int', 'unsigned int': 'uint'}


def _split(body):
    """Top-level comma-separated items of an initializer body."""
    items, depth, cur = [], 0, ''
    for c in body:
        if c == ',' and depth == 0:
            items.append(cur.strip()); cur = ''
            continue
        depth += (c == '{') - (c == '}')
        cur += c
    if cur.strip():
        items.append(cur.strip())
    return items


def _int(text, bounds):
    if not re.fullmatch(INT_LITERAL, text):
        raise ValueError('Not an integer literal: ' + text[:30])
    value = int(text.rstrip('u'), 0)
    if not bounds[0] <= value <= bounds[1]:
        raise ValueError('Integer literal out of range for its type: ' + text)
    return value


def _float_bits(text):
    if not re.fullmatch(FLOAT_LITERAL, text):
        raise ValueError('Not a float literal: ' + text[:30])
    return struct.unpack('<I', struct.pack('<f', float(text[:-1])))[0]


def lint(text, unit, info=None):
    """Reject anything except the typed forms. Returns the names that must be bound as
    symbols (declared functions and declared data not defined here). When `info` is a
    dict it receives, per object, the pointer word offsets of one element, the element
    stride and every 32-bit integer or float bit pattern (for the disguised-pointer check)."""
    if any(t in text for t in ('__asm', 'asm(', 'asm (', '.incbin')):
        raise ValueError('Assembly cannot count as reconstructed data')
    functions, data_decls, records, defined = set(), {}, {}, []
    info = {} if info is None else info

    def pointer(entry, allow_function_name):
        if entry == '0':
            return False
        if allow_function_name and entry in functions:
            return True
        m = re.fullmatch(r'\(void \*\)(' + IDENT + r')', entry)
        if m and m[1] in functions:
            return True
        if entry in data_decls:
            return True
        raise ValueError('Pointer entries must be 0, a declared function or declared data: ' + entry[:40])

    for s in statements(text):
        if s in ('typedef void (*VirtualFunction)(void)', 'typedef void (*Function)(void)'):
            continue
        m = re.fullmatch(r'typedef struct \{ (.*) \} (Record_[0-9a-f]{8})', s)
        if m:
            fields = [f.strip() for f in m[1].rstrip(';').split(';')]
            kinds = []
            for i, f in enumerate(fields):
                fm = re.fullmatch(r'(const void \*|float |int |unsigned int )f' + str(i), f)
                if not fm:
                    raise ValueError('Record fields must be f0..fN of const void *, float, int or unsigned int')
                kinds.append(FIELD_TYPES[fm[1].strip() if fm[1] != 'const void *' else fm[1]])
            records[m[2]] = kinds
            continue
        m = re.fullmatch(r'extern void (' + IDENT + r')\(void\)', s)
        if m:
            functions.add(m[1])
            continue
        m = re.fullmatch(r'extern (VirtualFunction const|Function const|const char|const void \*const|const Record_[0-9a-f]{8}|'
                         + '|'.join(re.escape(k) for k in SCALARS) + r') (' + IDENT + r')\[\]', s)
        if m:
            if m[1].startswith('const Record_') and m[1][6:] not in records:
                raise ValueError('Undeclared record type: ' + m[1])
            data_decls[m[2]] = m[1]
            continue
        m = re.fullmatch(r'(VirtualFunction const|Function const|const void \*const|const Record_[0-9a-f]{8}|'
                         + '|'.join(re.escape(k) for k in SCALARS) + r') (' + IDENT + r')\[(\d+)\] = \{(.*)\}', s)
        if m:
            ctype, name, count, entries = m[1], m[2], int(m[3]), _split(m[4])
            if len(entries) != count:
                raise ValueError('Initializer count differs from the array size: ' + name)
            words = []
            if ctype in ('VirtualFunction const', 'Function const'):
                for e in entries:
                    if e != '0' and e not in functions:
                        raise ValueError('Function table entries must be 0 or declared functions: ' + name)
                kind = ('vtable',) if ctype == 'VirtualFunction const' else ('function_table',)
                size, stride, pointers = 4 * count, 4, {0}
            elif ctype == 'const void *const':
                for e in entries:
                    pointer(e, False)
                kind, size, stride, pointers = ('pointer_table',), 4 * count, 4, {0}
            elif ctype.startswith('const Record_'):
                fields = records.get(ctype[6:])
                if fields is None:
                    raise ValueError('Undeclared record type: ' + ctype)
                for e in entries:
                    rm = re.fullmatch(r'\{(.*)\}', e)
                    values = _split(rm[1]) if rm else []
                    if len(values) != len(fields):
                        raise ValueError('Record initializer does not match its fields: ' + name)
                    for v, f in zip(values, fields):
                        if f == 'pointer':
                            pointer(v, False)
                        elif f == 'float':
                            words.append(_float_bits(v))
                        else:
                            words.append(_int(v, (-2 ** 31, 2 ** 31 - 1) if f == 'int' else (0, 2 ** 32 - 1)) & 0xffffffff)
                kind, size, stride = ('record_table',), 4 * len(fields) * count, 4 * len(fields)
                pointers = {4 * i for i, f in enumerate(fields) if f == 'pointer'}
            else:
                kind0, width, bounds = SCALARS[ctype]
                for e in entries:
                    if bounds == 'float':
                        words.append(_float_bits(e))
                    else:
                        v = _int(e, bounds)
                        if width == 4:
                            words.append(v & 0xffffffff)
                kind, size, stride, pointers = (kind0,), width * count, width, set()
            defined.append((name, kind, size))
            info[name] = {'stride': stride, 'pointers': pointers, 'words': words}
            continue
        m = re.fullmatch(r'const char (' + IDENT + r')\[(\d+)\] = ((?:' + STRING_LITERAL + r' ?)+)', s)
        if m:
            defined.append((m[1], ('string',), int(m[2])))
            info[m[1]] = {'stride': 1, 'pointers': set(), 'words': []}
            continue
        raise ValueError('Untyped or unsupported data statement: ' + s[:60])
    expected = [(o['name'], o['kind'], o['size']) for o in unit['objects']]
    if len(defined) != len(expected) or any(n != en or ek not in k or sz != esz
                                            for (n, k, sz), (en, ek, esz) in zip(defined, expected)):
        raise ValueError('Definitions disagree with the manifest objects (order, kind or size): ' + unit['id'])
    local = {n for n, _, _ in defined}
    return functions | (set(data_decls) - local)


def check_disguised_pointers(data, code, root=ROOT):
    """No integer or float word of any data object may equal a known symbol address
    (an admitted function, a data object or any bound symbol): such a word must be a
    pointer. Returns the number of words checked."""
    known = {int(f['address'], 0) for u in code['units'] for f in u['functions']}
    for u in code['units'] + data['units']:
        known.update(int(a, 0) for a in u.get('symbols', {}).values())
    for u in data['units']:
        known.update(int(o['address'], 0) for o in u['objects'])
    checked = 0
    for u in data['units']:
        info = {}
        lint((Path(root) / u['source']).read_text() if 'text' not in u else u['text'], u, info)
        for name, item in info.items():
            for word in item['words']:
                checked += 1
                if word in known:
                    raise ValueError('Integer or float equals a symbol address; write a pointer: %s %#x' % (name, word))
    return checked


# ----------------------------------------------------------------- ELF helpers
def _symbols(data):
    sections = matching.elf_sections(data)
    out = []
    for _, s in sections:
        if s[1] == 2:
            strtab = sections[s[6]][1]
            for i in range(s[5] // 16):
                name, value, size, info, other, shndx = struct.unpack_from('<IIIBBH', data, s[4] + 16 * i)
                raw = data[strtab[4] + name:]
                out.append(dict(name=raw[:raw.index(b'\0')].decode(), value=value, size=size,
                                bind=info >> 4, shndx=shndx))
    return sections, out


def check_object(data, unit, info=None):
    """The relocatable object holds only `.rodata` sections (CodeWarrior emits one per
    object), each manifest object is a global symbol of its size in its own section, every
    nonzero pointer word is produced by a DIR32 relocation (addend 0) against a named
    symbol, and no relocation falls outside a pointer word."""
    if info is None:
        info = {}
    sections, symbols = _symbols(data)
    allocated = {i for i, (n, s) in enumerate(sections) if s[2] & 2 and s[5]}
    if not allocated or any(sections[i][0] != b'.rodata' for i in allocated):
        raise ValueError('Data module must emit only .rodata: ' + unit['id'])
    relocated = {}
    for n, s in sections:
        if s[1] == 9 and s[7] in allocated:
            raise ValueError('REL relocations are not supported')
        if s[1] == 4 and s[7] in allocated:
            for i in range(s[5] // 12):
                offset, info_word, addend = struct.unpack_from('<IIi', data, s[4] + 12 * i)
                target = symbols[info_word >> 8]['name']
                if info_word & 0xff != R_SH_DIR32 or not target or addend:
                    raise ValueError('Unexpected relocation in data module: ' + unit['id'])
                relocated[(s[7], offset)] = target
    placed = {s['name']: s for s in symbols if s['shndx'] in allocated and s['name']}
    owners = {}
    for obj in unit['objects']:
        sym = placed.get('_' + obj['name'])
        if sym is None or sym['size'] != obj['size'] or sym['bind'] != 1:
            raise ValueError('Object symbol differs from the manifest: ' + obj['name'])
        owners.setdefault(sym['shndx'], []).append(sym)
        section = sections[sym['shndx']][1]
        lo, hi = sym['value'], sym['value'] + sym['size']
        if hi > section[5]:
            raise ValueError('Object outside its section: ' + obj['name'])
        contents = data[section[4]:section[4] + section[5]]
        if obj['kind'] in POINTER_KINDS:
            layout = {'stride': 4, 'pointers': {0}}
        else:
            layout = info.get(obj['name'], {'stride': 1, 'pointers': set()})
        stride, fields = layout['stride'], layout['pointers']
        words = {o for o in range(lo, hi, 4) if (o - lo) % stride in fields} if fields else set()
        for o in words:
            if contents[o:o + 4] != bytes(4) and (sym['shndx'], o) not in relocated:
                raise ValueError('Pointer stored as a bare integer: %s+%#x' % (obj['name'], o - lo))
        for (k, o) in relocated:
            if k == sym['shndx'] and lo <= o < hi and o not in words:
                raise ValueError('Relocation outside a pointer field: ' + obj['name'])
    for index in allocated:
        covered = sum(s['size'] for s in owners.get(index, []))
        if covered != sections[index][1][5]:
            raise ValueError('Allocated bytes outside the manifest objects: ' + unit['id'])
    return {o: name for (_, o), name in relocated.items()}


def check_placement(data, unit):
    """In the linked module every object symbol sits at its manifest address."""
    _, symbols = _symbols(data)
    where = {s['name']: s['value'] for s in symbols}
    for obj in unit['objects']:
        if where.get('_' + obj['name']) != int(obj['address'], 0):
            raise ValueError('Object placement differs from the manifest: ' + obj['name'])


def linked_section(data, base):
    """One allocated `.rodata` section at the module address with no relocations left."""
    sections = matching.elf_sections(data)
    if struct.unpack_from('<HHI', data, 16) != (2, 42, 1):
        raise ValueError('Expected linked SuperH executable')
    result = None
    for name, s in sections:
        if s[1] in (4, 9) and s[5]:
            raise ValueError('Unexpected remaining relocations')
        if s[2] & 2 and s[5]:
            if name != b'.rodata' or result is not None or s[3] != base or s[1] != 1:
                raise ValueError('Unexpected allocated section in linked data module')
            result = data[s[4]:s[4] + s[5]]
    if not result:
        raise ValueError('No linked data')
    return result


def compile_unit(source, output, unit, root=ROOT):
    """Compile, check, link at the original address and write the raw range bytes."""
    source, output = Path(source).resolve(), Path(output).resolve()
    if source.suffix != '.c' or output.suffix != '.bin':
        raise ValueError('Data modules are C sources producing .bin outputs')
    output.parent.mkdir(parents=True, exist_ok=True)
    output.unlink(missing_ok=True)
    receipt_path = output.with_suffix('.compiler.json')
    receipt_path.unlink(missing_ok=True)
    text = source.read_text()
    layout = {}
    externs = lint(text, unit, layout)
    symbols = unit.get('symbols', {})
    if {'_' + name for name in externs} != set(symbols):
        raise ValueError('Declared external names and bound symbols differ: ' + unit['id'])
    flags = matching.unit_flags({})
    tools = matching.load_tools()
    source_hash = matching.sha(source)
    scratch = Path(json.loads((Path(root) / 'local.json').read_text())['scratch'])
    work_root = scratch / 'compiler-builds'
    work_root.mkdir(exist_ok=True)
    base = int(unit['address'], 0)
    with tempfile.TemporaryDirectory(prefix='cwdata-', dir=work_root) as temp:
        work = Path(temp)
        shutil.copyfile(source, work / 'unit.c')
        env = dict(os.environ, TEMP=matching.win(work), TMP=matching.win(work), TMPDIR=str(work))
        commands, logs = [], []

        def run(command):
            command = [str(x) for x in command]
            commands.append(command)
            result = subprocess.run(command, cwd=work, env=env, capture_output=True, text=True, timeout=60)
            logs.append(result.stdout + result.stderr)
            if result.returncode or 'Warning:' in logs[-1] or 'Error:' in logs[-1]:
                raise ValueError('Data compiler/linker failed:\n' + logs[-1])
            return result.stdout

        run([tools['runner'], tools['compiler'], *flags, '-o', 'unit.o', 'unit.c'])
        check_object((work / 'unit.o').read_bytes(), unit, layout)
        (work / 'unit.ld').write_text('SECTIONS {\n . = ' + hex(base) + ';\n .rodata : { *(.rodata) }\n'
                                      ' .text : { *(.text) }\n .data : { *(.data) }\n'
                                      ' .bss : { *(.bss) *(COMMON) }\n}\n')
        run([tools['linker'], '-m', 'shlelf', '-T', 'unit.ld', '-e', hex(base),
             *['--defsym=' + name + '=' + address for name, address in symbols.items()],
             '-Map=unit.map', 'unit.o', '-o', 'unit.elf'])
        expected_output = linked_section((work / 'unit.elf').read_bytes(), base)
        check_placement((work / 'unit.elf').read_bytes(), unit)
        run([tools['objcopy'], '-O', 'binary', '-j', '.rodata', 'unit.elf', 'unit.bin'])
        if (work / 'unit.bin').read_bytes() != expected_output:
            raise ValueError('Raw output disagrees with complete linked section')
        for suffix in ('o', 'elf', 'map'):
            shutil.copyfile(work / ('unit.' + suffix), output.with_suffix('.' + suffix))
        output.with_suffix('.log').write_text('\n'.join(logs))
        if matching.sha(source) != source_hash:
            raise ValueError('Source changed during compilation')
        output.write_bytes(expected_output)
        receipt = {'compiler': 'CodeWarrior Dreamcast 2.4 Engineering Build, Mar 21 2000',
                   'flags': flags, 'address': hex(base), 'linker': 'gnu', 'section': '.rodata',
                   'compiler_object_sha256': matching.sha(work / 'unit.o'),
                   'source_sha256': source_hash, 'output_sha256': matching.sha(output),
                   'symbols': symbols, 'objects': unit['objects'],
                   'installed_tools_sha256': matching.sha(Path(root) / 'config/matching-installed.json'),
                   'size': len(expected_output), 'commands': commands, 'comparison_required': True}
        receipt_path.write_text(json.dumps(receipt, indent=2) + '\n')
        return receipt


def totals(data):
    """Bytes per kind for progress accounting."""
    result = {kind: 0 for kind in sorted(KINDS)}
    for unit in data['units']:
        for obj in unit['objects']:
            result[obj['kind']] += obj['size']
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    parser.add_argument('command', choices=['lint'])
    parser.parse_args()
    data = read()
    code = json.loads((ROOT / 'config/project.json').read_text())
    decoded = json.loads((ROOT / 'config/decoded.json').read_text())
    validate(data, int(code['base_address'], 0), decoded['size'], [u['id'] for u in code['units']])
    words = check_disguised_pointers(data, code)
    print(f"{len(data['units'])} data modules, {sum(totals(data).values()):,} typed bytes: lint passed"
          f" ({words:,} integer/float words checked against symbol addresses).")


if __name__ == '__main__':
    main()
