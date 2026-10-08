/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[932]; int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==932?1:-1];
typedef char check_prefix[sizeof(View)==936?1:-1];
void set_field_8c05af54(View *o) { o->value=0; }
