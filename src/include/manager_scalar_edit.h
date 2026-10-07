#ifndef PSO_MANAGER_SCALAR_EDIT_H
#define PSO_MANAGER_SCALAR_EDIT_H

/* Provisional metadata views inferred from the scalar editor accesses and
 * adjacent reference table strides. Field meanings follow observed arithmetic. */
typedef struct IntegerEdit {
    int width, minimum, maximum, digit, x, y;
    char format[16];
} IntegerEdit;
typedef struct FloatEdit {
    int width, precision;
    float minimum, maximum;
    int digit, x, y;
    char format[16];
} FloatEdit;
typedef char check_IntegerEdit_size[sizeof(IntegerEdit) == 40 ? 1 : -1];
typedef char check_IntegerEdit_width[
    (unsigned long)&((IntegerEdit *)0)->width == 0 ? 1 : -1];
typedef char check_IntegerEdit_minimum[
    (unsigned long)&((IntegerEdit *)0)->minimum == 4 ? 1 : -1];
typedef char check_IntegerEdit_maximum[
    (unsigned long)&((IntegerEdit *)0)->maximum == 8 ? 1 : -1];
typedef char check_IntegerEdit_digit[
    (unsigned long)&((IntegerEdit *)0)->digit == 12 ? 1 : -1];
typedef char check_IntegerEdit_x[
    (unsigned long)&((IntegerEdit *)0)->x == 16 ? 1 : -1];
typedef char check_IntegerEdit_y[
    (unsigned long)&((IntegerEdit *)0)->y == 20 ? 1 : -1];
typedef char check_IntegerEdit_format[
    (unsigned long)&((IntegerEdit *)0)->format == 24 ? 1 : -1];
typedef char check_FloatEdit_size[sizeof(FloatEdit) == 44 ? 1 : -1];
typedef char check_FloatEdit_width[
    (unsigned long)&((FloatEdit *)0)->width == 0 ? 1 : -1];
typedef char check_FloatEdit_precision[
    (unsigned long)&((FloatEdit *)0)->precision == 4 ? 1 : -1];
typedef char check_FloatEdit_minimum[
    (unsigned long)&((FloatEdit *)0)->minimum == 8 ? 1 : -1];
typedef char check_FloatEdit_maximum[
    (unsigned long)&((FloatEdit *)0)->maximum == 12 ? 1 : -1];
typedef char check_FloatEdit_digit[
    (unsigned long)&((FloatEdit *)0)->digit == 16 ? 1 : -1];
typedef char check_FloatEdit_x[
    (unsigned long)&((FloatEdit *)0)->x == 20 ? 1 : -1];
typedef char check_FloatEdit_y[
    (unsigned long)&((FloatEdit *)0)->y == 24 ? 1 : -1];
typedef char check_FloatEdit_format[
    (unsigned long)&((FloatEdit *)0)->format == 28 ? 1 : -1];

#endif
