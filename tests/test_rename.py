from pathlib import Path
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'tools'))
import rename


class RenameTests(unittest.TestCase):
    def test_canonical_keeps_one_address_suffix(self):
        self.assertEqual(rename.canonical({'address': '0x8c01bbec', 'name': 'game_main'}), 'game_main_8c01bbec')
        self.assertEqual(rename.canonical({'address': '0x8c26a014', 'name': 'TObjX_dtor_26a014'}),
                         'TObjX_dtor_8c26a014')
        self.assertEqual(rename.canonical({'address': '0x8c26a014', 'name': 'f_8c26a014'}), 'f_8c26a014')

    def test_rewrite_touches_identifiers_only(self):
        text = ('#include "src/include/old.h"\n'
                'extern void old(int); /* old */\n'
                '// old\n'
                'void f(void) { old(1); g("old", \'o\'); old_more(); xold(); }\n')
        out = rename.rewrite(text, {'old': 'new_8c000000'})
        self.assertIn('#include "src/include/old.h"', out)
        self.assertIn('extern void new_8c000000(int); /* old */', out)
        self.assertIn('// old\n', out)
        self.assertIn('new_8c000000(1); g("old", \'o\'); old_more(); xold();', out)

    def test_rewrite_handles_escapes_in_literals(self):
        text = 'char *s = "a\\"old\\"b"; old();'
        self.assertEqual(rename.rewrite(text, {'old': 'n'}), 'char *s = "a\\"old\\"b"; n();')

    def test_macro_alias_detection(self):
        text = ('#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)\n'
                '#define other ((int)0x8c122700)\n'
                '#define skip ((void (*)(void))0x8c999990)\n')
        self.assertEqual(rename.macro_aliases(text, {'0x8c122700'}), {'allocate_at': '0x8c122700'})


if __name__ == '__main__':
    unittest.main()
