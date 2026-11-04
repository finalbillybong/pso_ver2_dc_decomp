from pathlib import Path
import sys
import tempfile
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
import class_types as ct


C_UNIT = '''typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x54];
    float f70;
    char unknown74[0x94];
    int f108;
};
void TFoo_v17_8c000000(Object *o)
{
    if (o->f108 == 1) {
        o->f70 += 1.0f;
    }
}
'''

CPP_UNIT = '''class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual int v2(float, float);
};
typedef struct ObjectData {
    char unknown0[0x70];
    float f70;
} ObjectData;
extern "C" void TFoo_render_8c000004(Object *o)
{
    if (o->v2(((ObjectData *)o)->f70, 1.0f) != 0) {
        ((ObjectData *)o)->f70 = 0.0f;
    }
}
'''


def evidence(text, function, cls, language='c', uid='u'):
    info = ct.parse_unit(text, function, cplusplus=language == 'c++')
    with tempfile.TemporaryDirectory() as temp:
        path = Path(temp) / 'unit.c'
        path.write_text(text)
        unit = {'id': uid, 'source': path.name, 'functions': [{'name': function}],
                **({'language': 'c++'} if language == 'c++' else {})}
        ev, info = ct.unit_evidence(unit, Path(temp))
    ev['class'], ev['method'] = cls, 'v'
    return ev, info


class LayoutTests(unittest.TestCase):
    def test_c_view_offsets_and_gaps(self):
        ev, _ = evidence(C_UNIT, 'TFoo_v17_8c000000', 'TFoo')
        self.assertEqual(ev['this'], 'Object')
        self.assertEqual([(f['offset'], f['type'], f['name']) for f in ev['fields']],
                         [(0x18, 'void*', 'dispatch'), (0x70, 'float', 'f70'), (0x108, 'int', 'f108')])

    def test_cpp_vptr_follows_the_object_header(self):
        ev, _ = evidence(CPP_UNIT, 'TFoo_render_8c000004', 'TFoo', 'c++')
        self.assertEqual(ev['views'], ['Object', 'ObjectData'])
        self.assertIn((0x18, 'vptr'), [(f['offset'], f['kind']) for f in ev['fields']])
        used = [(v['index'], v['ret'], v['params']) for v in ev['virtuals'] if v['used']]
        self.assertEqual(used, [(2, 'int', 'float, float')])

    def test_language_branches(self):
        code = '#ifdef __cplusplus\nclass A {\n#else\nstruct A {\n#endif\n int x; };\n'
        self.assertIn('class A', ct.select_language(code, True))
        self.assertNotIn('struct A', ct.select_language(code, True))
        self.assertIn('struct A', ct.select_language(code, False))


class MergeTests(unittest.TestCase):
    classes = {'TFoo': dict(name='TFoo', parent=None, size=0x110, slots=3),
               'TFooSub': dict(name='TFooSub', parent='TFoo', size=0x120, slots=3)}

    def test_merge_and_conflicts(self):
        a, _ = evidence(C_UNIT, 'TFoo_v17_8c000000', 'TFoo', uid='a')
        b, _ = evidence(CPP_UNIT, 'TFoo_render_8c000004', 'TFoo', 'c++', uid='b')
        c, _ = evidence(C_UNIT.replace('int f108', 'unsigned int f108'), 'TFoo_v17_8c000000', 'TFooSub', uid='c')
        lay = ct.resolve(self.classes, [a, b, c], 'TFooSub')
        fields = {f['offset']: f for f in lay['fields']}
        self.assertEqual(fields[0x18]['kind'], 'vptr')
        self.assertEqual(fields[0x18]['name'], 'dispatch')     # the C units' name for the C branch
        self.assertEqual(fields[0x70]['type'], 'float')
        kinds = {(x['offset'], x['kind']) for x in lay['conflicts']}
        self.assertIn((0x108, 'signedness'), kinds)
        # Base evidence applies to the subclass; subclass evidence never to the base.
        base = ct.resolve(self.classes, [a, b, c], 'TFoo')
        self.assertEqual([x for x in base['conflicts'] if x['offset'] == 0x108], [])

    def test_header_round_trip_and_conversion(self):
        a, info = evidence(C_UNIT, 'TFoo_v17_8c000000', 'TFoo', uid='a')
        b, _ = evidence(CPP_UNIT, 'TFoo_render_8c000004', 'TFoo', 'c++', uid='b')
        lay = ct.resolve(self.classes, [a, b], 'TFoo')
        header = ct.emit_header(self.classes, lay)
        self.assertIn('typedef char check_TFoo_size[sizeof(TFoo) == 0x110 ? 1 : -1];', header)
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            (root / ct.HEADER_DIR).mkdir(parents=True)
            (root / ct.HEADER_DIR / 'TFoo.h').write_text(header)
            for cplusplus in (False, True):
                parsed = ct.parse_unit('#include "%s/TFoo.h"\n' % ct.HEADER_DIR, '', root, cplusplus)
                agg = parsed['by_name']['TFoo']
                self.assertIsNone(agg.error)
                self.assertEqual(agg.size, 0x110)
                got = {m['name']: m['offset'] for m in agg.members if not m['gap']}
                self.assertEqual((got['f70'], got['f108']), (0x70, 0x108))
                if cplusplus:
                    self.assertEqual(agg.vptr, 0x18)
                    self.assertEqual(agg.virtuals[2][1:], ('int', 'v2', 'float, float'))
            (root / 'unit.c').write_text(C_UNIT)
            unit = {'id': 'a', 'source': 'unit.c', 'functions': [{'name': 'TFoo_v17_8c000000'}]}
            res, why = ct.convert_unit(unit, a, info, lay, root)
        self.assertEqual(why, '')
        self.assertTrue(res['text'].startswith('#include "src/include/classes/TFoo.h"\n'))
        self.assertIn('void TFoo_v17_8c000000(TFoo *o)', res['text'])
        self.assertNotIn('struct Object', res['text'])
        self.assertNotIn('Vector3', res['text'])               # unused local copy dropped
        self.assertEqual(res['headers'], ['src/include/classes/TFoo.h'])

    def test_incompatible_view_stays_local(self):
        a, _ = evidence(C_UNIT, 'TFoo_v17_8c000000', 'TFoo', uid='a')
        b, _ = evidence(CPP_UNIT, 'TFoo_render_8c000004', 'TFoo', 'c++', uid='b')
        odd_text = C_UNIT.replace('float f70', 'int f70')
        odd, info = evidence(odd_text, 'TFoo_v17_8c000000', 'TFoo', uid='odd')
        lay = ct.resolve(self.classes, [a, b, odd], 'TFoo')
        ok, why, _ = ct.compatible(odd, lay)
        self.assertFalse(ok)
        self.assertIn('0x70', why)


class RenameTests(unittest.TestCase):
    classes = MergeTests.classes

    def test_member_rename_to_header_name(self):
        a, _ = evidence(C_UNIT, 'TFoo_v17_8c000000', 'TFoo', uid='a')
        b, _ = evidence(CPP_UNIT, 'TFoo_render_8c000004', 'TFoo', 'c++', uid='b')
        named = C_UNIT.replace('f108', 'state').replace('void *dispatch', 'void *vtable')
        c, _ = evidence(named, 'TFoo_v17_8c000000', 'TFoo', uid='c')
        d, _ = evidence(named, 'TFoo_v17_8c000000', 'TFoo', uid='d')
        lay = ct.resolve(self.classes, [a, b, c, d], 'TFoo')
        self.assertEqual({f['offset']: f['name'] for f in lay['fields']}[0x108], 'state')   # descriptive and more common
        self.assertEqual(ct.compatible(a, lay)[0], False)
        renames = {}
        self.assertTrue(ct.compatible(a, lay, renames)[0])
        self.assertEqual(renames['f108'], 'state')
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            (root / 'unit.c').write_text(C_UNIT)
            unit = {'id': 'a', 'source': 'unit.c', 'functions': [{'name': 'TFoo_v17_8c000000'}]}
            _, info = ct.unit_evidence(unit, root)
            res, why = ct.convert_unit(unit, a, info, lay, root)
        self.assertEqual(why, '')
        self.assertIn('if (o->state == 1)', res['text'])
        self.assertNotIn('f108', res['text'])

    def test_rename_refused_when_another_struct_has_the_name(self):
        a, _ = evidence(C_UNIT, 'TFoo_v17_8c000000', 'TFoo', uid='a')
        named = C_UNIT.replace('f108', 'state')
        c, _ = evidence(named, 'TFoo_v17_8c000000', 'TFoo', uid='c')
        lay = ct.resolve(self.classes, [a, c, c], 'TFoo')
        other = C_UNIT.replace('void TFoo_v17', 'struct Other { int f108; };\nvoid TFoo_v17')
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            (root / 'unit.c').write_text(other)
            unit = {'id': 'x', 'source': 'unit.c', 'functions': [{'name': 'TFoo_v17_8c000000'}]}
            ev, info = ct.unit_evidence(unit, root)
            ev['class'] = 'TFoo'
            res, why = ct.convert_unit(unit, ev, info, lay, root)
        self.assertIsNone(res)
        self.assertIn('clashes', why)


class RepositoryTests(unittest.TestCase):
    def test_committed_class_headers_are_consistent(self):
        self.assertEqual(ct.check(), [])


if __name__ == '__main__':
    unittest.main()
