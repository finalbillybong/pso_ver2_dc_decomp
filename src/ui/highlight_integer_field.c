#include "src/include/integer_field.h"

#define set_color_at ((void (*)(unsigned int))0x8c38c5b6)
#define plain_at ((void (*)(unsigned int, const char *))0x8c38c73a)
extern int format_at(char *, const char *, ...);

void highlight_integer_field(IntegerField *field, int x, int y,
                             unsigned int color, unsigned int selected) {
    char text[10], character[2];
    int i, column;
    format_at(text, INTEGER_FIELD_FORMAT(field), *field->value);
    column = field->digits - field->cursor;
    character[1] = 0;
    set_color_at(color);
    for (i = 0; i < column; i++) {
        character[0] = text[i];
        plain_at((x++ << 16) | y, character);
    }
    set_color_at(selected);
    character[0] = text[column];
    plain_at((x++ << 16) | y, character);
    set_color_at(color);
    for (column++; column < field->digits + 1; column++) {
        character[0] = text[column];
        plain_at((x++ << 16) | y, character);
    }
}
