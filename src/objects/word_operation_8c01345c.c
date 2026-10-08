/* Checked provisional accessed prefix; semantic field name unresolved. */
typedef struct View { unsigned char unknown0[804]; unsigned char value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==804?1:-1];
typedef char check_prefix[sizeof(View)==805?1:-1];
void *word_operation_8c01345c(View *o) { return &o->value; }
