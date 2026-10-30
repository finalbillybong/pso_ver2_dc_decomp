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
KINDS = {'vtable', 'string'}
POINTER_KINDS = {'vtable'}
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
            if obj['kind'] in POINTER_KINDS and (address % 4 or obj['size'] % 4):
                raise ValueError('Misaligned pointer table: ' + obj['name'])
            cursor = address + obj['size']
        if cursor != start + r['size']:
            raise ValueError('Data objects do not cover the module range: ' + unit['id'])
        for name, address in unit.get('symbols', {}).items():
            if not re.fullmatch('_' + IDENT, name) or not 0 <= int(address, 0) <= 0xffffffff:
                raise ValueError('Invalid external symbol: ' + name)
    return data


# ----------------------------------------------------------------- source lint
def statements(text):
    """Split C text into statements at semicolons outside string literals and comments.
    Comments become a space; string literals are kept verbatim."""
    out, cur, i, n = [], [], 0, len(text)
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
            m = re.compile(STRING_LITERAL).match(text, i)
            if not m:
                raise ValueError('Unsupported string literal')
            cur.append(m[0]); i = m.end()
        elif c == "'" or c == '#' or c == '\\':
            raise ValueError('Data modules contain only declarations and typed definitions')
        elif c == ';':
            out.append(' '.join(''.join(cur).split())); cur = []; i += 1
        else:
            cur.append(c); i += 1
    if ''.join(cur).strip():
        raise ValueError('Trailing text after the last statement')
    return out


STRING_LITERAL = r'"(?:[^"\\\n]|\\(?:[0-7]{1,3}|[nt"\\?\'abfrv]))*"'


def lint(text, unit):
    """Reject anything except the typed forms; returns the declared external functions."""
    if any(t in text for t in ('__asm', 'asm(', 'asm (', '.incbin')):
        raise ValueError('Assembly cannot count as reconstructed data')
    externs, defined = set(), []
    for s in statements(text):
        if s == 'typedef void (*VirtualFunction)(void)':
            continue
        m = re.fullmatch(r'extern void (' + IDENT + r')\(void\)', s)
        if m:
            externs.add(m[1])
            continue
        m = re.fullmatch(r'VirtualFunction const (' + IDENT + r')\[(\d+)\] = \{(.*)\}', s)
        if m:
            entries = [e.strip() for e in m[3].split(',')]
            if entries and entries[-1] == '':
                entries.pop()
            if len(entries) != int(m[2]) or any(e != '0' and e not in externs for e in entries):
                raise ValueError('Virtual table entries must be 0 or declared functions: ' + m[1])
            defined.append((m[1], 'vtable', 4 * int(m[2])))
            continue
        m = re.fullmatch(r'const char (' + IDENT + r')\[(\d+)\] = ((?:' + STRING_LITERAL + r' ?)+)', s)
        if m:
            defined.append((m[1], 'string', int(m[2])))
            continue
        raise ValueError('Untyped or unsupported data statement: ' + s[:60])
    expected = [(o['name'], o['kind'], o['size']) for o in unit['objects']]
    if defined != expected:
        raise ValueError('Definitions disagree with the manifest objects (order, kind or size): ' + unit['id'])
    return externs


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


def check_object(data, unit):
    """The relocatable object holds only `.rodata` sections (CodeWarrior emits one per
    object), each manifest object is a global symbol of its size in its own section, and
    every nonzero word of a pointer-kind object is produced by a DIR32 relocation
    (addend 0) against a named symbol."""
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
                offset, info, addend = struct.unpack_from('<IIi', data, s[4] + 12 * i)
                target = symbols[info >> 8]['name']
                if info & 0xff != R_SH_DIR32 or not target or addend:
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
        inside = [o for (k, o) in relocated if k == sym['shndx'] and lo <= o < hi]
        if obj['kind'] in POINTER_KINDS:
            for o in range(lo, hi, 4):
                if contents[o:o + 4] != bytes(4) and (sym['shndx'], o) not in relocated:
                    raise ValueError('Pointer stored as a bare integer: %s+%#x' % (obj['name'], o - lo))
        elif inside:
            raise ValueError('Relocation inside a non-pointer object: ' + obj['name'])
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
    externs = lint(text, unit)
    symbols = unit.get('symbols', {})
    if {'_' + name for name in externs} != set(symbols):
        raise ValueError('Declared functions and bound symbols differ: ' + unit['id'])
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
        check_object((work / 'unit.o').read_bytes(), unit)
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
    for unit in data['units']:
        lint((ROOT / unit['source']).read_text(), unit)
    print(f"{len(data['units'])} data modules, {sum(totals(data).values()):,} typed bytes: lint passed.")


if __name__ == '__main__':
    main()
