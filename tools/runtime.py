#!/usr/bin/env python3
"""Isolated Flycast scenarios; screenshots require separate observation review."""
import argparse
import ctypes as C
import ctypes.util
import json
import os
from pathlib import Path
import signal
import shutil
import subprocess
import tempfile
import time

from matching import sha, ROOT

CONFIG = '''[config]
UseReios = yes
AutoLoadState = no
Dreamcast.Region = 2
Dreamcast.Broadcast = 0
rend = 0
[input]
device1 = 0
device1.1 = 1
device1.2 = 10
device2 = 10
device3 = 10
device4 = 10
maple_sdl_keyboard = 0
[window]
width = 640
height = 480
fullscreen = no
'''
MAPPING = '''[emulator]
version = 2
mapping_name = MATCHTEST keyboard
btn_menu = 43
[dreamcast]
btn_a = 27
btn_b = 6
btn_x = 22
btn_y = 7
btn_start = 40
btn_dpad1_up = 82
btn_dpad1_down = 81
btn_dpad1_left = 80
btn_dpad1_right = 79
[compat]
btn_analog_up = 12
btn_analog_down = 14
btn_analog_left = 13
btn_analog_right = 15
btn_trigger_left = 9
btn_trigger_right = 25
'''
KEYS = {'start': 'Return', 'confirm': 'x', 'cancel': 'c', 'up': 'Up',
        'down': 'Down', 'left': 'Left', 'right': 'Right', 'analog_up': 'i',
        'analog_down': 'k', 'analog_left': 'j', 'analog_right': 'l',
        'x': 's', 'y': 'd', 'l': 'f', 'r': 'v'}


class Input:
    def __init__(self, display):
        self.x = C.CDLL(ctypes.util.find_library('X11'))
        self.xt = C.CDLL(ctypes.util.find_library('Xtst'))
        self.x.XOpenDisplay.argtypes = [C.c_char_p]
        self.x.XOpenDisplay.restype = C.c_void_p
        self.d = self.x.XOpenDisplay(display.encode())
        if not self.d:
            raise ValueError('Cannot connect to private display')
        for name, args, result in [
            ('XDefaultRootWindow', [C.c_void_p], C.c_ulong),
            ('XQueryTree', [C.c_void_p, C.c_ulong, C.POINTER(C.c_ulong), C.POINTER(C.c_ulong), C.POINTER(C.POINTER(C.c_ulong)), C.POINTER(C.c_uint)], C.c_int),
            ('XFetchName', [C.c_void_p, C.c_ulong, C.POINTER(C.c_char_p)], C.c_int),
            ('XFree', [C.c_void_p], C.c_int),
            ('XSetInputFocus', [C.c_void_p, C.c_ulong, C.c_int, C.c_ulong], C.c_int),
            ('XStringToKeysym', [C.c_char_p], C.c_ulong),
            ('XKeysymToKeycode', [C.c_void_p, C.c_ulong], C.c_uint),
            ('XFlush', [C.c_void_p], C.c_int),
            ('XCloseDisplay', [C.c_void_p], C.c_int)]:
            f = getattr(self.x, name); f.argtypes = args; f.restype = result
        self.xt.XTestFakeKeyEvent.argtypes = [C.c_void_p, C.c_uint, C.c_int, C.c_ulong]
        self.window = None

    def focus(self):
        def find(window):
            name = C.c_char_p()
            self.x.XFetchName(self.d, window, C.byref(name))
            title = name.value or b''
            if name: self.x.XFree(name)
            if b'Flycast' in title or b'flycast' in title: return window
            root, parent, count = C.c_ulong(), C.c_ulong(), C.c_uint()
            children = C.POINTER(C.c_ulong)()
            self.x.XQueryTree(self.d, window, C.byref(root), C.byref(parent), C.byref(children), C.byref(count))
            ids = list(children[:count.value])
            if children: self.x.XFree(children)
            for child in ids:
                found = find(child)
                if found: return found
            # SDL uses _NET_WM_NAME rather than legacy WM_NAME on this build.
            # Only the owned emulator runs on this private X server.
            if ids: return ids[-1]
        self.window = find(self.x.XDefaultRootWindow(self.d))
        if not self.window: raise ValueError('Flycast window not found')
        self.x.XSetInputFocus(self.d, self.window, 2, 0)
        self.x.XFlush(self.d)

    def press(self, key, duration):
        self.focus()
        code = self.x.XKeysymToKeycode(self.d, self.x.XStringToKeysym(KEYS[key].encode()))
        self.xt.XTestFakeKeyEvent(self.d, code, 1, 0); self.x.XFlush(self.d)
        try: time.sleep(duration)
        finally:
            self.xt.XTestFakeKeyEvent(self.d, code, 0, 0); self.x.XFlush(self.d)

    def close(self):
        self.x.XCloseDisplay(self.d)

    def request_quit(self):
        """Deliver SDL's normal window-close event so flash saves are flushed."""
        class ClientMessage(C.Structure):
            _fields_ = [('type', C.c_int), ('serial', C.c_ulong),
                        ('send_event', C.c_int), ('display', C.c_void_p),
                        ('window', C.c_ulong), ('message_type', C.c_ulong),
                        ('format', C.c_int), ('data', C.c_long * 5)]
        class Event(C.Union):
            _fields_ = [('client', ClientMessage), ('padding', C.c_long * 24)]
        self.x.XInternAtom.argtypes = [C.c_void_p, C.c_char_p, C.c_int]
        self.x.XInternAtom.restype = C.c_ulong
        self.x.XSendEvent.argtypes = [C.c_void_p, C.c_ulong, C.c_int, C.c_long, C.POINTER(Event)]
        self.focus()
        event = Event()
        event.client.type = 33
        event.client.display = self.d
        event.client.window = self.window
        event.client.message_type = self.x.XInternAtom(self.d, b'WM_PROTOCOLS', 0)
        event.client.format = 32
        event.client.data[0] = self.x.XInternAtom(self.d, b'WM_DELETE_WINDOW', 0)
        self.x.XSendEvent(self.d, self.window, 0, 0, C.byref(event))
        self.x.XFlush(self.d)


def stop_owned(processes):
    for process in reversed(processes):
        if process.poll() is None:
            os.killpg(process.pid, signal.SIGTERM)
            try: process.wait(timeout=5)
            except subprocess.TimeoutExpired:
                os.killpg(process.pid, signal.SIGKILL); process.wait(timeout=5)


def validate(receipt):
    if receipt['status'] != 'captured': raise ValueError('Runtime run did not finish')
    if not receipt.get('cleanup_complete'): raise ValueError('Runtime cleanup incomplete')
    for path, expected in receipt['inputs'].items():
        if sha(path) != expected: raise ValueError('Stale runtime evidence: ' + path)
    for path, expected in receipt['artifacts'].items():
        if sha(path) != expected: raise ValueError('Changed runtime artifact: ' + path)
    recorded = json.loads(Path(receipt['executed_scenario']).read_text())
    if recorded['steps'] != receipt['actions']: raise ValueError('Changed recorded actions')


def run(target, scenario_path, interactive=False, settings_path=None):
    cfg = json.loads((ROOT / 'local.json').read_text())
    scratch = Path(cfg['scratch'])
    settings_path = Path(settings_path or ROOT / 'config/runtime.json').resolve()
    settings = json.loads(settings_path.read_text())
    scenario = json.loads(scenario_path.read_text())
    run_dir = Path(tempfile.mkdtemp(prefix=target + '-', dir=scratch / 'runtime'))
    for name in ('config/flycast/mappings', 'data/flycast', 'cache', 'home'):
        (run_dir / name).mkdir(parents=True)
    (run_dir / 'config/flycast/emu.cfg').write_text(CONFIG)
    (run_dir / 'config/flycast/mappings/SDL_Keyboard.cfg').write_text(MAPPING)
    initial_vmu = {}
    for name, seed in settings['seeds'].items():
        if Path(name).name != name: raise ValueError('Invalid seed filename')
        if sha(seed['path']) != seed['sha256']: raise ValueError('Changed initial save seed')
        shutil.copyfile(seed['path'], run_dir / 'data/flycast' / name)
        initial_vmu[name] = seed['sha256']
    disc = Path(settings[target])
    inputs = [Path(settings['emulator']), Path(settings['xvfb']), disc, scenario_path,
              settings_path, Path(__file__),
              run_dir / 'config/flycast/mappings/SDL_Keyboard.cfg']
    inputs += [Path(seed['path']) for seed in settings['seeds'].values()]
    inputs += [ROOT / 'tools/matching.py']
    inputs += [ROOT / 'tools/game_keyboard.py']
    for line in disc.read_text().splitlines()[1:]:
        inputs.append(disc.parent / line.split()[4])
    inputs.append(scratch / ('orig/DP_ADDRESS.dec.bin' if target == 'baseline' else 'project-build/DP_ADDRESS.rebuilt.bin'))
    if target == 'rebuilt':
        import project
        project.report()
        inputs += [scratch / 'project-build/build.json', scratch / 'test-disc/receipt.json']
        disc_receipt = json.loads((scratch / 'test-disc/receipt.json').read_text())
        if disc_receipt['project_build_sha256'] != sha(scratch / 'project-build/build.json'):
            raise ValueError('Stale rebuilt disc')
        if disc_receipt['iso_sha256'] != sha(disc.parent / 'track03.iso'):
            raise ValueError('Changed rebuilt disc')
        manifest = json.loads((ROOT / 'config/project.json').read_text())
        inputs += [ROOT / 'config/project.json', ROOT / 'config/toolchain.json', ROOT / 'tools/project.py']
        inputs += [ROOT / u['source'] for u in manifest['units']]
        inputs += list({ROOT / h for u in manifest['units'] for h in u.get('headers', [])})
    # Preserve exact pre-launch configuration; Flycast rewrites emu.cfg at exit.
    (run_dir / 'initial.cfg').write_text(CONFIG)
    inputs.append(run_dir / 'initial.cfg')
    receipt = {'target': target, 'status': 'running', 'inputs': {str(p): sha(p) for p in inputs},
               'initial_vmu_sha256': initial_vmu,
               'gameplay_verified': False, 'artifacts': {}, 'actions': []}
    processes, logs, controller, emulator = [], [], None, None
    def spawn(command, name, **kw):
        log = (run_dir / name).open('w'); logs.append(log)
        p = subprocess.Popen(command, stdout=log, stderr=subprocess.STDOUT, start_new_session=True, **kw)
        processes.append(p); return p
    def action(step):
        step = dict(step)
        if 'wait' in step: time.sleep(step['wait'])
        if 'text' in step:
            from game_keyboard import Keyboard
            keyboard = Keyboard(display, controller, origin=step.get('keyboard_origin', (30, 300)))
            keyboard.text(step['text'])
            if step.get('submit', True): keyboard.submit()
            step['generated_inputs'] = keyboard.inputs
            time.sleep(step.get('after', 2))
        if 'key' in step:
            controller.press(step['key'], step.get('hold', .15))
            time.sleep(step.get('after', .5))
        if 'checkpoint' in step:
            controller.focus()
            name = step['checkpoint']
            if not name.replace('-', '').replace('_', '').isalnum(): raise ValueError('Invalid checkpoint')
            subprocess.run(['import', '-display', display, '-window', str(controller.window), str(run_dir / (name + '.png'))], check=True, timeout=15)
        receipt['actions'].append(step)
        print(json.dumps(step), flush=True)
    def interrupted(signum, frame): raise InterruptedError('Runtime interrupted by signal ' + str(signum))
    handlers = {s: signal.signal(s, interrupted) for s in (signal.SIGINT, signal.SIGTERM)}
    try:
        readfd, writefd = os.pipe()
        try:
            spawn([settings['xvfb'], '-displayfd', str(writefd), '-screen', '0', '800x600x24', '-nolisten', 'tcp'], 'xvfb.log', pass_fds=(writefd,))
            os.close(writefd); writefd = None
            import select
            if not select.select([readfd], [], [], 10)[0]: raise TimeoutError('Private display startup')
            display = ':' + os.read(readfd, 20).decode().strip()
        finally:
            os.close(readfd)
            if writefd is not None: os.close(writefd)
        env = dict(os.environ, DISPLAY=display, SDL_VIDEODRIVER='x11', LIBGL_ALWAYS_SOFTWARE='1',
                   HOME=str(run_dir / 'home'), XDG_CONFIG_HOME=str(run_dir / 'config'),
                   XDG_DATA_HOME=str(run_dir / 'data'), XDG_CACHE_HOME=str(run_dir / 'cache'))
        env.pop('WAYLAND_DISPLAY', None)
        emulator = spawn([settings['emulator'], str(disc)], 'flycast.log', env=env)
        controller = Input(display)
        print('RUN_DIRECTORY=' + str(run_dir), flush=True)
        def timeout(signum, frame): raise TimeoutError('Scenario timeout')
        previous = signal.signal(signal.SIGALRM, timeout)
        signal.alarm(scenario.get('timeout', 600))
        try:
            for step in scenario['steps']:
                if emulator.poll() is not None: raise ValueError('Emulator exited')
                action(step)
            if interactive:
                import sys
                for line in sys.stdin:
                    step = json.loads(line)
                    if step.get('stop'): break
                    action(step)
            receipt['status'] = 'captured'
        finally:
            signal.alarm(0); signal.signal(signal.SIGALRM, previous)
    except BaseException as error:
        receipt['status'] = 'failed'; receipt['error'] = str(error)
        raise
    finally:
        if controller:
            try:
                if emulator is not None and emulator.poll() is None:
                    controller.request_quit()
                    emulator.wait(timeout=10)
                receipt['graceful_emulator_shutdown'] = True
            except (OSError, ValueError, subprocess.TimeoutExpired):
                receipt['graceful_emulator_shutdown'] = False
            finally:
                controller.close()
        stop_owned(processes)
        for s, handler in handlers.items(): signal.signal(s, handler)
        for log in logs: log.close()
        receipt['cleanup_complete'] = all(p.poll() is not None for p in processes)
        executed = run_dir / 'executed-scenario.json'
        executed.write_text(json.dumps({'steps': receipt['actions']}, indent=2) + '\n')
        receipt['executed_scenario'] = str(executed)
        receipt['artifacts'][str(executed)] = sha(executed)
        for p in run_dir.rglob('*'):
            if p.is_file() and (p.suffix in ('.png', '.log', '.bin') or 'vmu' in p.name.lower()):
                receipt['artifacts'][str(p)] = sha(p)
        (run_dir / 'receipt.json').write_text(json.dumps(receipt, indent=2) + '\n')
    return run_dir


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('target', choices=['baseline', 'rebuilt', 'validate'])
    parser.add_argument('--scenario', type=Path, default=ROOT / 'config/scenarios/controls.json')
    parser.add_argument('--interactive', action='store_true')
    parser.add_argument('--settings', type=Path, help='Alternate pinned disc/save profile')
    parser.add_argument('--receipt', type=Path)
    args = parser.parse_args()
    if args.target == 'validate': validate(json.loads(args.receipt.read_text()))
    else:
        scratch = Path(json.loads((ROOT / 'local.json').read_text())['scratch'])
        (scratch / 'runtime').mkdir(exist_ok=True)
        print(run(args.target, args.scenario.resolve(), args.interactive, args.settings))
