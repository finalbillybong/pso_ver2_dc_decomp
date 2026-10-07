#include "src/include/float_field.h"

#define destroy_at ((void (*)(void *, int))0x8c0433ec)
#define release_at ((void (*)(void *))0x8c011ed8)

FloatField *destroy_float_field(FloatField *field, short release) {
    if (field) {
        field->dispatch = (void *)0x8c261cd8;
        destroy_at(field, 0);
        if (release > 0) release_at(field);
    }
    return field;
}
