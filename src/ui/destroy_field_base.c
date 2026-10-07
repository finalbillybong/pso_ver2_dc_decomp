#include "src/include/field_base.h"

#define release_at ((void (*)(void *))0x8c011ed8)

FieldBase *destroy_field_base(FieldBase *field, short release) {
    if (field) {
        field->dispatch = (void *)0x8c261cf8;
        if (release > 0) release_at(field);
    }
    return field;
}
