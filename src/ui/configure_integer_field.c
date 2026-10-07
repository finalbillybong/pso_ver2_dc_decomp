#include "src/include/integer_field.h"

extern int format_at(char *, const char *, ...);

void configure_integer_field(IntegerField *field, int *value, int digits) {
    field->value = value;
    if (digits < 0) field->digits = 0;
    else if (digits > 8) field->digits = 8;
    else field->digits = digits;
    format_at(INTEGER_FIELD_FORMAT(field), (const char *)0x8c2f1b98, field->digits + 1);
}
