/* Provisional scalar fields recovered from complete straight-line stores. */
typedef struct View {
 char unknown0[792];
 float value792;
 float value796;
 float value800;
} View;
typedef char check_value800[(unsigned long)&((View *)0)->value800==800?1:-1];
typedef char check_value796[(unsigned long)&((View *)0)->value796==796?1:-1];
typedef char check_value792[(unsigned long)&((View *)0)->value792==792?1:-1];
void initialize_float_fields_8c1eec38(View *o) {
 o->value800=0.0f;
 o->value796=0.0f;
 o->value792=0.0f;
}
