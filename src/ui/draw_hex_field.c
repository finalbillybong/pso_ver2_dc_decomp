#include "src/include/hex_field.h"

#define set_color_at ((void (*)(unsigned int))0x8c38c5b6)
#define draw_hex_at ((void (*)(unsigned int, int, int))0x8c38cc32)

void draw_hex_field(HexField *field, int x, int y, unsigned int color) {
    set_color_at(color);
    draw_hex_at((x << 16) | y, *field->value, field->digits);
}
