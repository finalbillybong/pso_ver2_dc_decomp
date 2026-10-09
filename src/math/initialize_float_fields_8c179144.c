/* Provisional scalar fields recovered from complete straight-line stores. */
typedef struct View {
 char unknown0[444];
 float value444;
 float value448;
 float value452;
 float value456;
} View;
typedef char check_value444[(unsigned long)&((View *)0)->value444==444?1:-1];
typedef char check_value448[(unsigned long)&((View *)0)->value448==448?1:-1];
typedef char check_value452[(unsigned long)&((View *)0)->value452==452?1:-1];
typedef char check_value456[(unsigned long)&((View *)0)->value456==456?1:-1];
void initialize_float_fields_8c179144(View *o) {
 o->value444=0.0f;
 o->value448=0.0f;
 o->value452=0.0f;
 o->value456=0.0f;
}
