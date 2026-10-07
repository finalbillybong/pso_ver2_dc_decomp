import io
from PIL import Image, ImageDraw
import sys
from pathlib import Path
import unittest
from unittest.mock import Mock, patch
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from game_keyboard import Keyboard


class KeyboardTests(unittest.TestCase):
    def test_selection_coordinates_respect_configured_keyboard_origin(self):
        controller = Mock(window=123)
        keyboard = Keyboard(':99', controller, (53, 178))
        for column, row in [(0, 0), (12, 0), (4, 1), (7, 4)]:
            bitmap = Image.new('RGB', (308, 140), (20, 30, 50))
            x, y = round(10 + column * 19.2), round(30 + row * 19.2)
            ImageDraw.Draw(bitmap).rectangle((x-8, y-8, x+8, y+8), fill=(255, 110, 0))
            out = io.BytesIO(); bitmap.save(out, format='PNG')
            with patch('game_keyboard.subprocess.check_output', return_value=out.getvalue()) as capture:
                self.assertEqual(keyboard.position(), (column, row))
                self.assertIn('308x140+53+178', capture.call_args.args[0])

    def test_missed_direction_is_retried_from_observed_selection(self):
        keyboard = Keyboard(':99', Mock())
        with patch.object(keyboard, 'position', side_effect=[(0, 0), (0, 0), (1, 0)]), patch.object(keyboard, 'press') as press:
            keyboard.move(1, 0)
        self.assertEqual([call.args[0] for call in press.call_args_list], ['right', 'right'])

    def test_wrong_screen_cannot_count_as_entered_text(self):
        keyboard = Keyboard(':99', Mock())
        bitmap = Image.new('RGB', (308, 140)); out = io.BytesIO(); bitmap.save(out, format='PNG')
        with patch('game_keyboard.subprocess.check_output', return_value=out.getvalue()):
            with self.assertRaisesRegex(ValueError, 'No keyboard selection'):
                keyboard.text('MATCHTEST')
