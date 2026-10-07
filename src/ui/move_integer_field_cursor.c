#include "src/include/integer_field.h"

void move_integer_field_cursor(IntegerField *field, int step) {
    field->cursor += step;
    if (field->cursor < 0) field->cursor = 0;
    else if (field->cursor >= field->digits) field->cursor = field->digits - 1;
}
