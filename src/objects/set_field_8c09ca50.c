/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[2684]; int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==2684?1:-1];
typedef char check_prefix[sizeof(View)==2688?1:-1];
void set_field_8c09ca50(View *o) { o->value=0; }
