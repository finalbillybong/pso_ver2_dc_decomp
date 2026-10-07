#include "src/include/integer_field.h"

#define initialize_at ((void *(*)(void *))0x8c0433d8)

IntegerField *construct_integer_field(IntegerField *field) {
    initialize_at(field);
    field->dispatch = (void *)0x8c261cb8;
    field->value = 0;
    field->digits = 8;
    return field;
}
