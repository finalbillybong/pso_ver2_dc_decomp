/* Checked provisional accessed prefix; semantic field name unresolved. */
typedef struct View { unsigned char unknown0[1008]; unsigned char value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==1008?1:-1];
typedef char check_prefix[sizeof(View)==1009?1:-1];
void *word_operation_8c0594a4(View *o) { return &o->value; }
