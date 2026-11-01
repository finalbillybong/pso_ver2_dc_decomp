#include "src/include/float_field.h"

#define njPrintColor_8c38c5b6 ((void (*)(unsigned int))0x8c38c5b6)
extern void debug_print_at_8c38cf80(unsigned int, const char *, ...);

void draw_float_field(FloatField *field, int x, int y, unsigned int color) {
    njPrintColor_8c38c5b6(color);
    debug_print_at_8c38cf80((x << 16) | y, field->format, *field->value);
}
