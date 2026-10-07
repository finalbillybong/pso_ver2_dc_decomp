#include "src/include/float_field.h"

void clear_float_field(FloatField *field) {
    *field->value = 0.0f;
}
