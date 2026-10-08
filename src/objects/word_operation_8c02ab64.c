/* Checked provisional accessed prefix; semantic field name unresolved. */
typedef struct View { unsigned char unknown0[1968]; unsigned int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==1968?1:-1];
typedef char check_prefix[sizeof(View)==1972?1:-1];
unsigned int word_operation_8c02ab64(View *o) { return o->value; }
