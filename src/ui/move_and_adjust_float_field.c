#include "src/include/float_field.h"

/* Adjacent routines retain their natural compiler-generated alignment. */
void move_float_field_cursor(FloatField *field, int step) {
    if (step) {
        field->cursor += step;
        if (field->cursor < 0) field->cursor = 0;
        else if (field->cursor >= field->width) field->cursor = field->width - 1;
        if (field->cursor == field->fractional_digits) {
            if (step > 0) field->cursor++;
            else field->cursor--;
        }
    }
}

#define power_at ((float (*)(float, float))0x8c12b8f4)

void adjust_float_field(FloatField *field, int change) {
    if (change) {
        float factor;
        if (field->cursor < field->fractional_digits) {
            factor = power_at(10.0f, (float)(field->cursor - field->fractional_digits));
        } else {
            factor = power_at(10.0f, (float)(field->cursor - field->fractional_digits - 1));
        }
        factor *= (float)change;
        *field->value = factor + *field->value;
    }
}
