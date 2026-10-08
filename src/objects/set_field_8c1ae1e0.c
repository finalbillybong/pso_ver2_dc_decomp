/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[928]; int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==928?1:-1];
typedef char check_prefix[sizeof(View)==932?1:-1];
void set_field_8c1ae1e0(View *o) { o->value=1; }
