/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[188]; int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==188?1:-1];
typedef char check_prefix[sizeof(View)==192?1:-1];
void set_field_8c1e22c8(View *o) { o->value=18; }
