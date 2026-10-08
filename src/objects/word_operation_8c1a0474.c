/* Checked provisional accessed prefix; semantic field name unresolved. */
typedef struct View { unsigned char unknown0[280]; unsigned char value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==280?1:-1];
typedef char check_prefix[sizeof(View)==281?1:-1];
void *word_operation_8c1a0474(View *o) { return &o->value; }
