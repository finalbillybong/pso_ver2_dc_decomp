#include "src/include/float_field.h"

extern int format_at(char *, const char *, ...);

void configure_float_field(FloatField *field, float *value, int whole, int fractional) {
    field->value = value;
    if (whole < 1) field->whole_digits = 1;
    else if (whole > 8) field->whole_digits = 8;
    else field->whole_digits = whole;
    if (fractional < 1) field->fractional_digits = 1;
    else if (fractional > 7) field->fractional_digits = 7;
    else field->fractional_digits = fractional;
    field->width = field->whole_digits + field->fractional_digits + 1;
    format_at(field->format, (const char *)0x8c2f1ba0, field->width, field->fractional_digits);
    field->cursor = field->fractional_digits + 1;
}
