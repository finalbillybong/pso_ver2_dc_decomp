/* Checked provisional accessed prefix; semantic field name unresolved. */
typedef struct View { unsigned char unknown0[2020]; unsigned char value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==2020?1:-1];
typedef char check_prefix[sizeof(View)==2021?1:-1];
void *word_operation_8c019b0c(View *o) { return &o->value; }
