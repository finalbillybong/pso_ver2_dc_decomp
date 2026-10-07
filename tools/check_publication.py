#!/usr/bin/env python3
"""Reject private or generated files in the Git index; never echo matched values."""
from pathlib import Path, PurePosixPath
import re
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
CONFIG = {'analysis.json', 'compiler-packages.json', 'decoded.json',
          'local.example.json', 'matching-packages.json', 'progress-proof.json',
          'project.json', 'reconstruction-targets.json', 'reference.json',
          'samples.json', 'toolchain.example.json'}
TOP = {'.gitignore', '.gitattributes', 'README.md', 'CONTRIBUTING.md', 'NOTICE.md',
       'configure.py', 'pso.py', 'progress.json', 'requirements-dev.txt'}
# Match credential assignments rather than discussions of credentials. Values and
# matching lines are deliberately never included in diagnostics.
SENSITIVE = re.compile(
    r'''(?ix)(?:["']?\b(?:serial(?:[_\s-]?(?:number|no))?|access[_\s-]?key|password|api[_-]?key|auth[_-]?token)["']?)\s*[:=]\s*["']?[a-z0-9+/=_-]{6,}''')
TOKEN = re.compile(r'\b(?:gh[pousr]_[A-Za-z0-9]{20,}|github_pat_[A-Za-z0-9_]{30,}|AKIA[A-Z0-9]{16})\b')


def allowed(name):
    p = PurePosixPath(name)
    if name in TOP or name == 'orig/README.md':
        return True
    if len(p.parts) == 2 and p.parts[0] == 'config':
        return p.name in CONFIG
    if len(p.parts) == 2 and p.parts[0] == 'docs':
        return p.suffix == '.md' or p.name == 'progress.svg'
    if p.parts[0] == 'src':
        return p.suffix in {'.c', '.cpp', '.h'}
    if len(p.parts) == 2 and p.parts[0] == 'tools':
        return p.suffix in {'.py', '.java', '.cc'}
    if len(p.parts) == 2 and p.parts[0] == 'tests':
        return p.suffix == '.py'
    return name in {'.github/workflows/checks.yml', '.github/pull_request_template.md'}


def issues(name, blob, mode='100644'):
    errors = []
    if not allowed(name):
        errors.append('path is outside the public source allowlist')
    if mode not in {'100644', '100755'}:
        errors.append('symlink or non-file entry')
    try:
        text = blob.decode('utf-8')
    except UnicodeError:
        return errors + ['non-text content']
    if '\0' in text:
        errors.append('binary content')
    if SENSITIVE.search(text) or TOKEN.search(text) or re.search(r'-----BEGIN (?:RSA |OPENSSH |EC )?PRIVATE KEY-----', text):
        errors.append('possible credential (value withheld)')
    if re.search(r'/(?:home|Users)/[^/\s]+/', text):
        errors.append('machine-specific home path')
    return errors


def main():
    entries = subprocess.check_output(['git', 'ls-files', '--stage', '-z'], cwd=ROOT).split(b'\0')
    errors, count = [], 0
    for entry in entries:
        if not entry:
            continue
        meta, raw_name = entry.split(b'\t', 1)
        mode, oid, stage = meta.decode().split()
        name = raw_name.decode()
        if stage != '0':
            errors.append(name + ': unresolved index entry')
            continue
        blob = subprocess.check_output(['git', 'cat-file', 'blob', oid], cwd=ROOT)
        errors.extend(name + ': ' + reason for reason in issues(name, blob, mode))
        count += 1
    if not count:
        errors.append('No indexed files; stage the explicit publication snapshot first')
    if errors:
        print('\n'.join(errors), file=sys.stderr)
        return 1
    print(f'Publication check passed: {count} indexed text files; no private paths, binaries or detected credential assignments.')
    return 0


if __name__ == '__main__':
    sys.exit(main())
