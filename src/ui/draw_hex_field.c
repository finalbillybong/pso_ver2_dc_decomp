#include "src/include/hex_field.h"

#define njPrintColor_8c38c5b6 ((void (*)(unsigned int))0x8c38c5b6)
#define draw_hex_at ((void (*)(unsigned int, int, int))0x8c38cc32)

void draw_hex_field(HexField *field, int x, int y, unsigned int color) {
    njPrintColor_8c38c5b6(color);
    draw_hex_at((x << 16) | y, *field->value, field->digits);
}
