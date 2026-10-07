#include "src/include/hex_field.h"

void adjust_hex_field(HexField *field, int change) {
    if (change) {
        int *value = field->value;
        change *= 1 << (field->cursor << 2);
        *value = change + *value;
    }
}
