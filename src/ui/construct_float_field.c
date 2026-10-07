#include "src/include/float_field.h"

#define initialize_at ((void *(*)(void *))0x8c0433d8)

FloatField *construct_float_field(FloatField *field) {
    initialize_at(field);
    field->dispatch = (void *)0x8c261cd8;
    field->value = 0;
    field->whole_digits = 0;
    field->fractional_digits = 0;
    field->width = 0;
    field->cursor = 0;
    return field;
}
