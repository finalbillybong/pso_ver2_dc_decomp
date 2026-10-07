#ifndef PSO_FLOAT_FIELD_H
#define PSO_FLOAT_FIELD_H
/* Provisional checked 40-byte prefix; no larger allocation extent is inferred. */
typedef struct FloatField {
    int field_00;
    int cursor;
    void *dispatch;
    char format[12];
    int whole_digits;
    int fractional_digits;
    int width;
    float *value;
} FloatField;

typedef char check_float_field_field_00[
    (unsigned long)&((FloatField *)0)->field_00 == 0 ? 1 : -1];
typedef char check_float_field_cursor[
    (unsigned long)&((FloatField *)0)->cursor == 4 ? 1 : -1];
typedef char check_float_field_dispatch[
    (unsigned long)&((FloatField *)0)->dispatch == 8 ? 1 : -1];
typedef char check_float_field_format[
    (unsigned long)&((FloatField *)0)->format == 12 ? 1 : -1];
typedef char check_float_field_whole_digits[
    (unsigned long)&((FloatField *)0)->whole_digits == 24 ? 1 : -1];
typedef char check_float_field_fractional_digits[
    (unsigned long)&((FloatField *)0)->fractional_digits == 28 ? 1 : -1];
typedef char check_float_field_width[
    (unsigned long)&((FloatField *)0)->width == 32 ? 1 : -1];
typedef char check_float_field_value[
    (unsigned long)&((FloatField *)0)->value == 36 ? 1 : -1];
typedef char check_float_field_prefix[sizeof(FloatField) == 40 ? 1 : -1];
#endif
