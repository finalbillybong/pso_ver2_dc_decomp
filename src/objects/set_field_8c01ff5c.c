/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[824]; int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==824?1:-1];
typedef char check_prefix[sizeof(View)==828?1:-1];
void set_field_8c01ff5c(View *o) { o->value=0; }
