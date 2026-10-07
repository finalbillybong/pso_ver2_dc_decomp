#include "src/include/field_base.h"

FieldBase *construct_field_base(FieldBase *field) {
    field->dispatch = (void *)0x8c261cf8;
    field->field_00 = 0;
    field->cursor = 0;
    return field;
}
