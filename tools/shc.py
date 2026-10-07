#!/usr/bin/env python3
"""Compile a self-contained C/C++ unit with a pinned Hitachi SH-4 toolchain."""
import argparse
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import struct
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[1]
VERSIONS = ('shc-v5.0r31', 'shc-v5.1r01', 'shc-v5.1r13')


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def win(path):
    return 'Z:' + str(path).replace('/', '\\')


def load_tools(version):
    receipt = json.loads((ROOT / 'config/installed-compilers.json').read_text())
    installed = receipt['compilers'][version]
    base = Path(installed['directory'])
    runner = Path(receipt['runner'])
    if sha(runner) != receipt['runner_sha256']:
        raise ValueError('Runner hash mismatch')
    for name, expected in installed['files'].items():
        if sha(base / name) != expected:
            raise ValueError(f'Compiler file hash mismatch: {name}')
    tools = {p.name.lower(): p for p in (base / 'bin').iterdir() if p.is_file()}
    return runner, base, tools


def elf_image(data, base):
    if data[:7] != b'\x7fELF\x01\x01\x01':
        raise ValueError('Expected ELF32 little-endian output')
    if struct.unpack_from('<HH', data, 16) != (2, 42):
        raise ValueError('Expected linked SuperH executable')
    entry, phoff = struct.unpack_from('<II', data, 24)
    phsize, count = struct.unpack_from('<HH', data, 42)
    if phsize != 32 or count < 1 or phoff + phsize * count > len(data):
        raise ValueError('Invalid ELF program headers')
    segments = []
    for i in range(count):
        kind, offset, address, _, size, memory_size, _, _ = struct.unpack_from('<8I', data, phoff + i * phsize)
        if kind == 1 and size:
            if offset + size > len(data) or memory_size < size or address < base:
                raise ValueError('Invalid ELF load segment')
            segments.append((address, data[offset:offset + size]))
    if not segments or min(a for a, _ in segments) != base:
        raise ValueError('Linked code does not begin at requested address')
    end = max(a + len(b) for a, b in segments)
    if end - base > 16 * 1024 * 1024:
        raise ValueError('Unexpectedly large linked image')
    image = bytearray(end - base)
    occupied = set()
    for address, segment in segments:
        positions = set(range(address - base, address - base + len(segment)))
        if occupied & positions:
            raise ValueError('Overlapping ELF load segments')
        occupied |= positions
        image[address - base:address - base + len(segment)] = segment
    if not base <= entry < end:
        raise ValueError('Entry point outside linked image')
    return bytes(image), entry


def compile_unit(source, output, version='shc-v5.0r31', base=0x8c010000,
                 entry='_probe', optimize='1', extra_flags=()):
    runner, compiler_dir, tools = load_tools(version)
    cfg = json.loads((ROOT / 'local.json').read_text())
    work_root = Path(cfg['scratch']) / 'compiler-builds'
    work_root.mkdir(exist_ok=True)
    source = Path(source).resolve()
    output = Path(output).resolve()
    if output.suffix != '.bin':
        raise ValueError('Output must end in .bin')
    # Old SHC rejects dotted path components and multi-dot filenames. Use short
    # relative names in an isolated directory, never rewrite source in place.
    if not re.fullmatch(r'[A-Za-z_][A-Za-z_0-9]*', entry):
        raise ValueError('Invalid entry symbol')
    if not 0 <= base <= 0xffffffff or base % 4:
        raise ValueError('Base address must be 32-bit and four-byte aligned')
    output.unlink(missing_ok=True)
    output.with_suffix('.json').unlink(missing_ok=True)
    with tempfile.TemporaryDirectory(prefix='shc-', dir=work_root) as temp:
        work = Path(temp)
        local_source = 'unit.cpp' if source.suffix.lower() in ('.cpp', '.cc', '.cxx') else 'unit.c'
        shutil.copyfile(source, work / local_source)
        env = dict(os.environ, SHC_LIB=win(compiler_dir / 'bin'),
                   SHC_TMP=win(work), SHC_INC=win(compiler_dir / 'bin/include'))
        allowed = {'-size', '-speed', '-nospeed', '-round=nearest', '-round=zero',
                   '-denormalize=on', '-denormalize=off', '-double=float',
                   '-noinline', '-noloop', '-debug', '-lang=cpp'}
        if not set(extra_flags) <= allowed:
            raise ValueError('Unsupported additional compiler flag')
        flags = ['-cpu=sh4', '-endian=little', '-fpu=single', '-optimize=' + optimize,
                 *extra_flags]
        commands = []
        log = []

        def run(arguments):
            command = [str(runner), *[str(x) for x in arguments]]
            commands.append(command)
            proc = subprocess.run(command, cwd=work, env=env, capture_output=True, text=True, timeout=60)
            text = proc.stdout + proc.stderr
            log.append(text)
            if proc.returncode or re.search(r'^\*\* (?!121\b)\d+', text, re.M):
                raise ValueError(f'Compiler/linker failed:\n{text}')

        run([tools['shc.exe'], local_source, *flags, '-object=unit.obj'])
        run([tools['shc.exe'], local_source, *flags, '-code=asm', '-object=unit.src'])
        (work / 'link.sub').write_text('align_section\nudfcheck\nelf\ninput unit.obj\n'
            'output unit.elf\nprint unit.map\nform a\n'
            f'start P({base:08X}),C,D,B\nentry {entry}\nexit\n')
        run([tools['lnk.exe'], '-sub=link.sub'])
        image, actual_entry = elf_image((work / 'unit.elf').read_bytes(), base)
        output.parent.mkdir(parents=True, exist_ok=True)
        output.write_bytes(image)
        for ext in ('elf', 'obj', 'src', 'map'):
            shutil.copyfile(work / ('unit.' + ext), output.with_suffix('.' + ext))
        output.with_suffix('.log').write_text('\n'.join(log))
        result = {'compiler': version, 'flags': flags, 'base': hex(base),
                  'entry': hex(actual_entry), 'source_sha256': sha(source),
                  'output_sha256': sha(output), 'code_size': len(image),
                  'commands': commands, 'matching_claim': False}
        output.with_suffix('.json').write_text(json.dumps(result, indent=2) + '\n')
        return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source', type=Path)
    parser.add_argument('-o', '--output', type=Path, required=True)
    parser.add_argument('--compiler', choices=VERSIONS, default=VERSIONS[0])
    parser.add_argument('--base', type=lambda x: int(x, 0), default=0x8c010000)
    parser.add_argument('--entry', default='_probe')
    parser.add_argument('--optimize', choices=['0', '1'], default='1')
    parser.add_argument('--flag', action='append', default=[], help='Additional option; use --flag=-size')
    args = parser.parse_args()
    if args.output.suffix != '.bin':
        parser.error('Output must end in .bin')
    try:
        result = compile_unit(args.source, args.output, args.compiler, args.base, args.entry,
                              args.optimize, args.flag)
    except (OSError, ValueError, KeyError, subprocess.TimeoutExpired) as e:
        parser.exit(2, f'ERROR: {e}\n')
    print(json.dumps(result, indent=2))


if __name__ == '__main__':
    main()
