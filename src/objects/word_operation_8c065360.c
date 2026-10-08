/* Checked provisional accessed prefix; semantic field name unresolved. */
typedef struct View { unsigned char unknown0[1636]; unsigned char value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==1636?1:-1];
typedef char check_prefix[sizeof(View)==1637?1:-1];
void *word_operation_8c065360(View *o) { return &o->value; }
