#include "src/include/integer_field.h"

#define power_at ((float (*)(float, float))0x8c12b8f4)

void adjust_integer_field(IntegerField *field, int change) {
    int factor = (int)power_at(10.0f, (float)field->cursor);
    factor *= change;
    *field->value = factor + *field->value;
}
