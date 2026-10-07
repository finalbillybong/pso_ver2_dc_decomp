#include "src/include/hex_field.h"

void move_hex_field_cursor(HexField *field, int step) {
    if (step) {
        field->cursor += step;
        if (field->cursor < 0) field->cursor = 0;
        else if (field->cursor >= field->digits) field->cursor = field->digits - 1;
    }
}
