/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[236]; int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==236?1:-1];
typedef char check_prefix[sizeof(View)==240?1:-1];
void set_field_8c0f3df8(View *o) { o->value=0; }
