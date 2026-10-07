#include "src/include/hex_field.h"

#define destroy_at ((void (*)(void *, int))0x8c0433ec)
#define release_at ((void (*)(void *))0x8c011ed8)

HexField *destroy_hex_field(HexField *field, short release) {
    if (field) {
        field->dispatch = (void *)0x8c261c98;
        destroy_at(field, 0);
        if (release > 0) release_at(field);
    }
    return field;
}
