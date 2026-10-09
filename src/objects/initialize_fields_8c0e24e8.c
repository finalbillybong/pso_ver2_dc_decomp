typedef struct View { char unknown0[28]; float value28; } View;
typedef char check_View_value28[(unsigned long)&((View *)0)->value28==28?1:-1];
typedef char check_View_prefix[sizeof(View)==32?1:-1];
void initialize_fields_8c0e24e8(View *o) {
 o->value28=65535.0f;
}
