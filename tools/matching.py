#!/usr/bin/env python3
"""Compile reviewed C samples and link at their original PSO addresses."""
import argparse
import hashlib
import json
import os
import re
from pathlib import Path
import shutil
import struct
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[1]
FLAGS = ['-proc', 'SH4', '-endian', 'little', '-mw_fp', 'hardware',
         '-Cpp_exceptions', 'off', '-O2']


def sha(path):
    with Path(path).open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def win(path):
    return 'Z:' + str(path).replace('/', '\\')


def dependencies(source, sample, root=None):
    """Resolve only explicitly declared, project-local quoted includes.

    Includes use project-relative names. Macro/system includes and alternative
    preprocessor spellings are deliberately unsupported by this adapter.
    """
    root = Path(ROOT if root is None else root).resolve()
    declared = sample.get('headers', [])
    result = {}
    for name in declared:
        if not isinstance(name, str):
            raise ValueError('Invalid header dependency')
        path = (root / name).resolve()
        if (not isinstance(name, str) or Path(name).is_absolute()
                or '..' in Path(name).parts or not path.is_relative_to(root)
                or path.suffix != '.h' or name in result):
            raise ValueError('Invalid header dependency: ' + str(name))
        result[name] = sha(path)
    for path in [Path(source), *(root / name for name in result)]:
        code = path.read_text().replace('\\\n', '')
        code = re.sub(r'/\*.*?\*/|//[^\n]*', '', code, flags=re.S)
        if '??' in code or '%:' in code:
            raise ValueError('Unsupported preprocessor spelling')
        for directive in re.findall(r'^\s*#\s*((?:include\w*|import)\b[^\n]*)', code, re.M):
            match = re.fullmatch(r'include\s+"([^"\n]+)"\s*', directive)
            if not match or match[1] not in result:
                raise ValueError('Undeclared include: ' + directive)
    return result


def load_tools():
    receipt = json.loads((ROOT / 'config/matching-installed.json').read_text())
    for name, expected in receipt['files'].items():
        if sha(name) != expected:
            raise ValueError('Matching tool hash mismatch: ' + name)
    return {k: Path(v) for k, v in receipt['roles'].items()}


def text_section(data, base):
    """Require one complete, relocated code section at the exact entry address."""
    if len(data) < 52 or data[:7] != b'\x7fELF\x01\x01\x01':
        raise ValueError('Expected ELF32 little-endian output')
    if struct.unpack_from('<HHI', data, 16) != (2, 42, 1):
        raise ValueError('Expected linked SuperH executable')
    if struct.unpack_from('<I', data, 24)[0] != base:
        raise ValueError('Linked entry does not equal sample address')
    offset = struct.unpack_from('<I', data, 32)[0]
    size, count, names_index = struct.unpack_from('<HHH', data, 46)
    if size != 40 or count == 0 or names_index >= count or offset + count * size > len(data):
        raise ValueError('Invalid ELF section table')
    sections = [struct.unpack_from('<10I', data, offset + i * size) for i in range(count)]
    names = sections[names_index]
    if names[4] + names[5] > len(data):
        raise ValueError('Truncated ELF string table')
    strings = data[names[4]:names[4] + names[5]]
    result = None
    for s in sections:
        if s[0] >= len(strings):
            raise ValueError('Invalid ELF section name')
        name = strings[s[0]:].split(b'\0', 1)[0]
        if s[1] != 8 and s[4] + s[5] > len(data):
            raise ValueError('Truncated ELF section')
        if s[1] in (4, 9) and s[5]:
            raise ValueError('Unexpected remaining relocations')
        if name == b'.text':
            if result is not None or s[3] != base or s[1] != 1 or s[2] & 6 != 6:
                raise ValueError('Invalid linked code section')
            result = data[s[4]:s[4] + s[5]]
        elif s[2] & 2 and s[5]:
            raise ValueError('Unexpected allocated data outside sample code and literal pool')
    if not result:
        raise ValueError('No linked code')
    return result


def compile_unit(source, output, sample, flags=None):
    flags = list(FLAGS if flags is None else flags)
    source, output = Path(source).resolve(), Path(output).resolve()
    if source.suffix != '.c' or output.suffix != '.bin':
        raise ValueError('Matching adapter expects a self-contained .c source and .bin output')
    output.parent.mkdir(parents=True, exist_ok=True)
    output.unlink(missing_ok=True)
    receipt_path = output.with_suffix('.compiler.json')
    receipt_path.unlink(missing_ok=True)
    tools = load_tools()
    headers = dependencies(source, sample)
    source_hash = sha(source)
    scratch = Path(json.loads((ROOT / 'local.json').read_text())['scratch'])
    work_root = scratch / 'compiler-builds'
    work_root.mkdir(exist_ok=True)
    with tempfile.TemporaryDirectory(prefix='cw-', dir=work_root) as temp:
        work = Path(temp)
        shutil.copyfile(source, work / 'unit.c')
        for name in headers:
            destination = work / name
            destination.parent.mkdir(parents=True, exist_ok=True)
            shutil.copyfile(ROOT / name, destination)
        env = dict(os.environ, TEMP=win(work), TMP=win(work), TMPDIR=str(work))
        commands, logs = [], []

        def run(command):
            command = [str(x) for x in command]
            commands.append(command)
            result = subprocess.run(command, cwd=work, env=env, capture_output=True,
                                    text=True, timeout=60)
            logs.append(result.stdout + result.stderr)
            if result.returncode or 'Warning:' in logs[-1] or 'Error:' in logs[-1]:
                raise ValueError('Matching compiler/linker failed:\n' + logs[-1])
            return result.stdout

        # This Dreamcast driver compiles without a -c switch. Its -nolink switch
        # unexpectedly invokes the linker; do not use it.
        run([tools['runner'], tools['compiler'], *flags,
             *(['-I.'] if headers else []), '-o', 'unit.o', 'unit.c'])
        base = int(sample['address'], 0)
        if not 0 <= base <= 0xffffffff or base % 4:
            raise ValueError('Invalid sample address')
        if not re.fullmatch(r'[A-Za-z_][A-Za-z_0-9]*', sample['entry']):
            raise ValueError('Invalid sample entry symbol')
        # Explicit layout also avoids dependence on host-installed ld scripts.
        (work / 'unit.ld').write_text('SECTIONS {\n . = ' + hex(base) + ';\n'
            ' .text : { *(.text) }\n .data : { *(.data) }\n'
            ' .bss : { *(.bss) *(COMMON) }\n}\n')
        symbols = sample.get('symbols', {})
        for name, address in symbols.items():
            if not re.fullmatch(r'[A-Za-z_][A-Za-z_0-9]*', name) or not 0 <= int(address, 0) <= 0xffffffff:
                raise ValueError('Invalid external symbol')
        run([tools['linker'], '-m', 'shlelf', '-T', 'unit.ld', '-e', sample['entry'],
             *['--defsym=' + name + '=' + address for name, address in symbols.items()],
             '-Map=unit.map', 'unit.o', '-o', 'unit.elf'])
        expected_output = text_section((work / 'unit.elf').read_bytes(), base)
        run([tools['objcopy'], '-O', 'binary', '-j', '.text', 'unit.elf', 'unit.bin'])
        if (work / 'unit.bin').read_bytes() != expected_output:
            raise ValueError('Raw output disagrees with complete linked section')
        listing = run([tools['objdump'], '-d', '-m', 'sh4', 'unit.elf'])
        for suffix in ('o', 'elf', 'map'):
            shutil.copyfile(work / ('unit.' + suffix), output.with_suffix('.' + suffix))
        output.with_suffix('.asm').write_text(listing)
        output.with_suffix('.log').write_text('\n'.join(logs))
        if sha(source) != source_hash or dependencies(source, sample) != headers:
            raise ValueError('Source or headers changed during compilation')
        output.write_bytes(expected_output)
        receipt = {'compiler': 'CodeWarrior Dreamcast 2.4 Engineering Build, Mar 21 2000',
                   'flags': flags, 'address': hex(base), 'entry': sample['entry'],
                   'source_sha256': sha(source), 'output_sha256': sha(output),
                   'headers_sha256': headers,
                   'symbols': symbols,
                   'installed_tools_sha256': sha(ROOT / 'config/matching-installed.json'),
                   'size': len(expected_output), 'commands': commands,
                   'comparison_required': True}
        receipt_path.write_text(json.dumps(receipt, indent=2) + '\n')
        return receipt


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--sample', required=True)
    parser.add_argument('--source', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    samples = json.loads((ROOT / 'config/samples.json').read_text())['samples']
    sample = next(s for s in samples if s['id'] == args.sample)
    compile_unit(args.source, args.output, sample)


if __name__ == '__main__':
    main()
