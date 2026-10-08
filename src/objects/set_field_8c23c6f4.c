/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[564]; int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==564?1:-1];
typedef char check_prefix[sizeof(View)==568?1:-1];
void set_field_8c23c6f4(View *o) { o->value=0; }
