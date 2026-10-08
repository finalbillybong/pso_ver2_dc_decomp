#ifndef PSO_BOUNDED_FIELDS_H
#define PSO_BOUNDED_FIELDS_H
/* Provisional 32-byte prefix. The Settings name does not establish gameplay
 * semantics; bounds and signedness are taken from the observed accessors. */
typedef struct Settings {
    unsigned char fields[16];
    unsigned char field10; signed char field11;
    char unknown12; signed char field13;
    short field14, field16, field18;
    char unknown1a[2]; int field1c;
} Settings;
typedef char check_Settings_fields[(unsigned long)&((Settings *)0)->fields == 0 ? 1 : -1];
typedef char check_Settings_field10[(unsigned long)&((Settings *)0)->field10 == 16 ? 1 : -1];
typedef char check_Settings_field11[(unsigned long)&((Settings *)0)->field11 == 17 ? 1 : -1];
typedef char check_Settings_field13[(unsigned long)&((Settings *)0)->field13 == 19 ? 1 : -1];
typedef char check_Settings_field14[(unsigned long)&((Settings *)0)->field14 == 20 ? 1 : -1];
typedef char check_Settings_field16[(unsigned long)&((Settings *)0)->field16 == 22 ? 1 : -1];
typedef char check_Settings_field18[(unsigned long)&((Settings *)0)->field18 == 24 ? 1 : -1];
typedef char check_Settings_field1c[(unsigned long)&((Settings *)0)->field1c == 28 ? 1 : -1];
typedef char check_Settings_prefix[sizeof(Settings) == 32 ? 1 : -1];
#endif
