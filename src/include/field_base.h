#ifndef PSO_FIELD_BASE_H
#define PSO_FIELD_BASE_H
/* Known common 12-byte field-editor base prefix. */
typedef struct FieldBase {
    int field_00;
    int cursor;
    void *dispatch;
} FieldBase;

typedef char check_field_base_field_00[
    (unsigned long)&((FieldBase *)0)->field_00 == 0 ? 1 : -1];
typedef char check_field_base_cursor[
    (unsigned long)&((FieldBase *)0)->cursor == 4 ? 1 : -1];
typedef char check_field_base_dispatch[
    (unsigned long)&((FieldBase *)0)->dispatch == 8 ? 1 : -1];
typedef char check_field_base_prefix[sizeof(FieldBase) == 12 ? 1 : -1];
#endif
