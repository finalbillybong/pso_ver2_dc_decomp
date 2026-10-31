#!/usr/bin/env python3
"""Hitachi SHC pool-group units: selection, fixed settings, build and tool profile.

A project unit that declares "compiler": "shc-v5.1r13" (the SDK and library code) or
"shc-v5.0r28" (the 0x8c3d0000 region, see docs/SHC.md "Second release") is built here;
every other unit goes to tools/matching.py unchanged. matching.py is deliberately not
edited: its hash is part of the reconstruction-history fingerprint."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import struct
import subprocess
import sys
import tempfile

sys.path.insert(0, str(Path(__file__).resolve().parent))
import matching
import shc

ROOT = Path(__file__).resolve().parents[1]
SHC_COMPILER = 'shc-v5.1r13'
# One fixed flag set; there is no per-unit flag override.
SHC_FLAGS = ['-cpu=sh4', '-endian=little', '-fpu=single', '-optimize=1', '-macsave=0']
# Whitelisted releases, each with exactly one fixed flag set (currently the same set).
# The symbol module is always assembled and the unit always linked with the pinned
# 5.1r13 asmsh/LNK: the linker only places section P and binds absolute symbols, so a
# single linker keeps that step identical for every unit, and not every release ships
# one (5.1r11 has no LNK; 5.0r10 ships a different lnk.exe).
SHC_RELEASES = {
    'shc-v5.1r13': {'flags': SHC_FLAGS, 'name': 'Hitachi SH C/C++ Compiler 5.1 Release 13'},
    'shc-v5.0r28': {'flags': SHC_FLAGS, 'name': 'Hitachi SH C Compiler 5.0 Release 28'},
}
SHC_RECEIPT = 'config/installed-compilers.json'
PACKAGES = 'config/compiler-packages.json'
SYMBOL = re.compile(r'_[A-Za-z_][A-Za-z_0-9]*')


def unit_compiler(unit):
    """CodeWarrior unless the manifest names a whitelisted SHC release explicitly."""
    compiler = unit.get('compiler', 'codewarrior')
    if compiler != 'codewarrior' and compiler not in SHC_RELEASES:
        raise ValueError('Unsupported matching compiler')
    if compiler in SHC_RELEASES and ('linker' in unit or unit.get('language', 'c') != 'c'):
        raise ValueError('SHC units are C only and always use the Hitachi linker')
    return compiler


def is_shc(unit):
    return unit_compiler(unit) in SHC_RELEASES


def shc_units(manifest):
    return [u for u in manifest['units'] if is_shc(u)]


def unit_flags(unit):
    """SHC settings for SHC units; otherwise exactly matching.unit_flags."""
    return list(SHC_RELEASES[unit_compiler(unit)]['flags']) if is_shc(unit) else matching.unit_flags(unit)


def unit_linker(unit):
    return 'hitachi' if is_shc(unit) else matching.unit_linker(unit)


def compile_unit(source, output, unit, flags=None):
    """Dispatch: SHC units here, everything else to the unchanged CodeWarrior adapter."""
    if is_shc(unit):
        return compile_shc_unit(source, output, unit, flags)
    if flags is None:  # the exact call CodeWarrior callers made before SHC units existed
        return matching.compile_unit(source, output, unit)
    return matching.compile_unit(source, output, unit, flags)


def load_shc_tools(root=ROOT, version=SHC_COMPILER):
    """Pinned releases and runner from tools/setup_compilers.py, re-hashed on every use.
    The compiler comes from `version`; assembler and linker always from the pinned 5.1r13."""
    if version not in SHC_RELEASES:
        raise ValueError('Unsupported SHC release')
    lock = json.loads((root / PACKAGES).read_text())
    if version not in {package['id'] for package in lock['compilers']}:
        raise ValueError('SHC release is not in the package lock')
    receipt = json.loads((root / SHC_RECEIPT).read_text())
    if receipt.get('runner_sha256') != lock['runner']['sha256']:
        raise ValueError('SHC runner does not match the package lock')
    runner, base, files = shc.load_tools(SHC_COMPILER)  # checks the runner and every release file
    if not receipt['compilers'][SHC_COMPILER]['files']:
        raise ValueError('SHC installation receipt lists no files')
    tools = {'runner': runner, 'bin': base / 'bin'}
    for role, name in (('compiler', 'shc.exe'), ('assembler', 'asmsh.exe'), ('linker', 'lnk.exe')):
        if name not in files:
            raise ValueError('SHC installation lacks ' + name)
        tools[role] = files[name]
    if version != SHC_COMPILER:
        _, release_base, release_files = shc.load_tools(version)
        if not receipt['compilers'][version]['files'] or 'shc.exe' not in release_files:
            raise ValueError('SHC installation lacks ' + version)
        tools['bin'], tools['compiler'] = release_base / 'bin', release_files['shc.exe']
    return tools


def profile(root=ROOT, unit=None):
    """Tool identity for reconstruction receipts of SHC units (CodeWarrior keeps its own).
    Without a unit (or for 5.1r13 units) this is the pinned 5.1r13 profile."""
    version = unit_compiler(unit) if unit is not None and is_shc(unit) else SHC_COMPILER
    tools = load_shc_tools(root, version)
    return dict(compiler=version,
                tools={role: matching.sha(path) for role, path in tools.items() if role != 'bin'},
                installed_sha256=matching.sha(root / SHC_RECEIPT),
                packages_sha256=matching.sha(root / PACKAGES),
                adapter_sha256=matching.sha(Path(__file__)),
                runner_driver_sha256=matching.sha(Path(shc.__file__)))


def symbol_module(symbols):
    """Absolute extern bindings: .EXPORT plus .EQU lines only, no code or data."""
    lines = []
    for name, address in sorted(symbols.items()):
        value = int(address, 0)
        if not SYMBOL.fullmatch(name) or len(name) > 250 or not 0 <= value <= 0xffffffff:
            raise ValueError('Invalid external symbol')
        lines.append('          .EXPORT     ' + name)
    for name, address in sorted(symbols.items()):
        lines.append(f"{name}: .EQU H'{int(address, 0):08X}")
    return '\n'.join(lines + ['          .END', ''])


def diagnostics(text, tool):
    """Any compiler warning, error or fatal message, or any linker message, fails the build."""
    if tool == 'compiler':
        if re.search(r'\((?:W|E|F)\)', text) or 'Object not created' in text:
            raise ValueError('SHC compiler diagnostics:\n' + text)
    elif tool == 'assembler':
        if not (re.search(r'TOTAL ERRORS\s+0\b', text) and re.search(r'TOTAL WARNINGS\s+0\b', text)):
            raise ValueError('SHC assembler diagnostics:\n' + text)
    elif re.search(r'^\*\*', text, re.M) or 'LINKAGE EDITOR COMPLETED' not in text:
        raise ValueError('SHC linker diagnostics:\n' + text)


def map_sections(text):
    """Section rows of an LNK map: [(name, start, length)]; zero-length module rows are ignored."""
    rows = re.findall(r"^(\S+)\s+H'([0-9A-F]{8})\s+-\s+H'([0-9A-F]{8})\s+H'([0-9A-F]{8})\s*$", text, re.M)
    return [(name, int(start, 16), int(length, 16)) for name, start, _, length in rows
            if name != '*' and int(length, 16)]


def load_image(data, base):
    """The single loadable segment of an LNK ELF executable (LNK writes program headers only)."""
    if len(data) < 52 or data[:7] != b'\x7fELF\x01\x01\x01':
        raise ValueError('Expected ELF32 little-endian output')
    if struct.unpack_from('<HHI', data, 16) != (2, 42, 1):
        raise ValueError('Expected linked SuperH executable')
    entry, phoff = struct.unpack_from('<II', data, 24)
    phsize, count = struct.unpack_from('<HH', data, 42)
    if entry != base:
        raise ValueError('Linked entry does not equal unit address')
    if phsize != 32 or count < 1 or phoff + phsize * count > len(data):
        raise ValueError('Invalid ELF program headers')
    loads = []
    for i in range(count):
        kind, offset, address, _, size, memory, _, _ = struct.unpack_from('<8I', data, phoff + i * phsize)
        if kind == 1 and memory:
            if size != memory or offset + size > len(data):
                raise ValueError('Uncompared or truncated loadable segment')
            loads.append((address, data[offset:offset + size]))
    if len(loads) != 1 or loads[0][0] != base or not loads[0][1]:
        raise ValueError('Expected exactly one loadable code segment at the unit address')
    return loads[0][1]


def compile_shc_unit(source, output, unit, flags=None):
    """SHC -> object -> Hitachi LNK (ELF) -> program-header extraction.

    The unit is one complete pool group: contiguous functions (file-static ones
    allowed) followed by the literal pool SHC emits for them. Only section P may
    have contents; constant, data and bss sections are rejected."""
    version = unit_compiler(unit)
    flags = list(SHC_RELEASES[version]['flags'] if flags is None else flags)
    source, output = Path(source).resolve(), Path(output).resolve()
    if source.suffix != '.c' or output.suffix != '.bin':
        raise ValueError('SHC units are C sources; output must be .bin')
    if unit.get('headers'):
        raise ValueError('SHC units do not take project headers yet')
    if '#pragma' in source.read_text():
        raise ValueError('SHC units may not use #pragma (SHC pragmas include inline_asm)')
    output.parent.mkdir(parents=True, exist_ok=True)
    output.unlink(missing_ok=True)
    receipt_path = output.with_suffix('.compiler.json')
    receipt_path.unlink(missing_ok=True)
    tools = load_shc_tools(ROOT, version)
    matching.dependencies(source, unit)
    source_hash = matching.sha(source)
    base = int(unit['address'], 0)
    if not 0 <= base <= 0xffffffff or base % 4:
        raise ValueError('SHC units start on a four-byte boundary (section P is ALIGN=4)')
    if not SYMBOL.fullmatch(unit['entry']):
        raise ValueError('Invalid unit entry symbol')
    symbols = unit.get('symbols', {})
    module = symbol_module(symbols) if symbols else None
    scratch = Path(json.loads((ROOT / 'local.json').read_text())['scratch'])
    work_root = scratch / 'compiler-builds'
    work_root.mkdir(exist_ok=True)
    with tempfile.TemporaryDirectory(prefix='shc-unit-', dir=work_root) as temp:
        work = Path(temp)
        shutil.copyfile(source, work / 'unit.c')
        env = dict(os.environ, SHC_LIB=shc.win(tools['bin']), SHC_TMP=shc.win(work),
                   SHC_INC=shc.win(tools['bin']))
        commands, logs = [], []

        def run(command, tool):
            command = [str(x) for x in command]
            commands.append(command)
            result = subprocess.run(command, cwd=work, env=env, capture_output=True, text=True, timeout=60)
            logs.append(result.stdout + result.stderr)
            if result.returncode:
                raise ValueError('SHC ' + tool + ' failed:\n' + logs[-1])
            diagnostics(logs[-1], tool)

        # Old SHC rejects dotted path components: short relative names in an isolated directory.
        run([tools['runner'], tools['compiler'], 'unit.c', *flags, '-object=unit.obj'], 'compiler')
        run([tools['runner'], tools['compiler'], 'unit.c', *flags, '-code=asm', '-object=unit.src'], 'compiler')
        if not (work / 'unit.obj').is_file() or not (work / 'unit.src').is_file():
            raise ValueError('SHC compiler produced no object')
        inputs = ['unit.obj']
        if module:
            (work / 'symbols.src').write_text(module)
            run([tools['runner'], tools['assembler'], 'symbols.src', '-cpu=sh4', '-endian=little',
                 '-object=symbols.obj'], 'assembler')
            inputs.append('symbols.obj')
        (work / 'link.sub').write_text('elf\n' + ''.join('input ' + i + '\n' for i in inputs)
            + f"output unit.elf\nprint unit.map\nform a\nstart P({base:08X})\nentry {unit['entry']}\nexit\n")
        run([tools['runner'], tools['linker'], '-sub=link.sub'], 'linker')
        sections = map_sections((work / 'unit.map').read_text(errors='replace'))
        if [name for name, _, _ in sections] != ['P'] or sections[0][1] != base:
            raise ValueError('SHC unit must contain only code section P at its address: ' + repr(sections))
        code = load_image((work / 'unit.elf').read_bytes(), base)
        if len(code) != sections[0][2]:
            raise ValueError('Linked image size disagrees with section P')
        for suffix in ('obj', 'elf', 'map', 'src'):
            shutil.copyfile(work / ('unit.' + suffix), output.with_suffix('.' + suffix))
        output.with_suffix('.log').write_text('\n'.join(logs))
        if matching.sha(source) != source_hash:
            raise ValueError('Source changed during compilation')
        output.write_bytes(code)
        receipt = {'compiler': SHC_RELEASES[version]['name'] + ' (' + version + ')',
                   'flags': flags, 'address': hex(base), 'entry': unit['entry'],
                   'linker': 'hitachi', 'compiler_object_sha256': matching.sha(work / 'unit.obj'),
                   'source_sha256': source_hash, 'output_sha256': matching.sha(output),
                   'headers_sha256': {}, 'symbols': symbols,
                   'symbol_module_sha256': hashlib.sha256(module.encode()).hexdigest() if module else None,
                   'installed_tools_sha256': matching.sha(ROOT / SHC_RECEIPT),
                   'size': len(code), 'commands': commands, 'comparison_required': True}
        receipt_path.write_text(json.dumps(receipt, indent=2) + '\n')
        return receipt


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--unit', required=True, help='Unit id in config/project.json')
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    manifest = json.loads((ROOT / 'config/project.json').read_text())
    unit = next(u for u in manifest['units'] if u['id'] == args.unit)
    print(json.dumps(compile_unit(ROOT / unit['source'], args.output, unit), indent=2))


if __name__ == '__main__':
    main()
