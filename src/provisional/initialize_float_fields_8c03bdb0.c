/* Provisional scalar fields recovered from complete straight-line stores. */
typedef struct View {
 char unknown0[28];
 float value28;
 float value32;
 float value36;
 float value40;
} View;
typedef char check_value28[(unsigned long)&((View *)0)->value28==28?1:-1];
typedef char check_value32[(unsigned long)&((View *)0)->value32==32?1:-1];
typedef char check_value36[(unsigned long)&((View *)0)->value36==36?1:-1];
typedef char check_value40[(unsigned long)&((View *)0)->value40==40?1:-1];
void initialize_float_fields_8c03bdb0(View *o) {
 o->value28=1.0f;
 o->value32=1.0f;
 o->value36=1.0f;
 o->value40=1.0f;
}
