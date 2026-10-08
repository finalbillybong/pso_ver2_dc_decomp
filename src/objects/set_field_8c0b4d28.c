/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[228]; int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==228?1:-1];
typedef char check_prefix[sizeof(View)==232?1:-1];
void set_field_8c0b4d28(View *o) { o->value=1; }
