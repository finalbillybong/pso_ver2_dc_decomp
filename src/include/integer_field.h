#ifndef PSO_INTEGER_FIELD_H
#define PSO_INTEGER_FIELD_H
/* Provisional first 20 bytes only. The format buffer follows this prefix;
 * its capacity and the complete allocation extent are not established. */
typedef struct IntegerField {
    int field_00;
    int cursor;
    void *dispatch;
    int *value;
    int digits;
} IntegerField;

typedef char check_integer_field_field_00[
    (unsigned long)&((IntegerField *)0)->field_00 == 0 ? 1 : -1];
typedef char check_integer_field_cursor[
    (unsigned long)&((IntegerField *)0)->cursor == 4 ? 1 : -1];
typedef char check_integer_field_dispatch[
    (unsigned long)&((IntegerField *)0)->dispatch == 8 ? 1 : -1];
typedef char check_integer_field_value[
    (unsigned long)&((IntegerField *)0)->value == 12 ? 1 : -1];
typedef char check_integer_field_digits[
    (unsigned long)&((IntegerField *)0)->digits == 16 ? 1 : -1];
typedef char check_integer_field_prefix[sizeof(IntegerField) == 20 ? 1 : -1];
#define INTEGER_FIELD_FORMAT(field) ((char *)(field) + 20)
#endif
