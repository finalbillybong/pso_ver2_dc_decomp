/* Provisional scalar fields recovered from complete straight-line stores. */
typedef struct View {
 char unknown0[440];
 float value440;
 float value444;
 float value448;
 float value452;
} View;
typedef char check_value440[(unsigned long)&((View *)0)->value440==440?1:-1];
typedef char check_value444[(unsigned long)&((View *)0)->value444==444?1:-1];
typedef char check_value448[(unsigned long)&((View *)0)->value448==448?1:-1];
typedef char check_value452[(unsigned long)&((View *)0)->value452==452?1:-1];
void initialize_float_fields_8c1566bc(View *o) {
 o->value440=0.0f;
 o->value444=0.0f;
 o->value448=0.0f;
 o->value452=0.0f;
}
