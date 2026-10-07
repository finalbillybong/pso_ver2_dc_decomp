#include "src/include/integer_field.h"

#define set_color_at ((void (*)(unsigned int))0x8c38c5b6)
extern void draw_at(unsigned int, const char *, ...);

void draw_integer_field(IntegerField *field, int x, int y, unsigned int color) {
    set_color_at(color);
    draw_at((x << 16) | y, INTEGER_FIELD_FORMAT(field), *field->value);
}
