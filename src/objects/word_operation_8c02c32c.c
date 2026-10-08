/* Checked provisional accessed prefix; semantic field name unresolved. */
typedef struct View { unsigned char unknown0[2072]; unsigned int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==2072?1:-1];
typedef char check_prefix[sizeof(View)==2076?1:-1];
unsigned int word_operation_8c02c32c(View *o) { return o->value; }
