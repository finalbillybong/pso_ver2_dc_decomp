/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[568]; int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==568?1:-1];
typedef char check_prefix[sizeof(View)==572?1:-1];
void set_field_8c252964(View *o) { o->value=1; }
