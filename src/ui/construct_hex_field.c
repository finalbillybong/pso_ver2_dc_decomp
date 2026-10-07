#include "src/include/hex_field.h"

#define initialize_at ((void *(*)(void *))0x8c0433d8)

HexField *construct_hex_field(HexField *field) {
    initialize_at(field);
    field->dispatch = (void *)0x8c261c98;
    field->value = 0;
    field->digits = 8;
    field->cursor = 0;
    return field;
}
