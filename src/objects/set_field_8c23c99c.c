/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[640]; int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==640?1:-1];
typedef char check_prefix[sizeof(View)==644?1:-1];
void set_field_8c23c99c(View *o) { o->value=1; }
