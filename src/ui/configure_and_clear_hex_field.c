#include "src/include/hex_field.h"

/* Adjacent entries share their compiler-generated interfunction alignment. */
void configure_hex_field(HexField *field, int *value, int digits) {
    field->value = value;
    if (digits < 1) field->digits = 1;
    else if (digits > 8) field->digits = 8;
    else field->digits = digits;
    field->cursor = 0;
}

void clear_hex_field(HexField *field) {
    *field->value = 0;
}
