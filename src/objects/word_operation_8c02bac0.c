/* Checked provisional accessed prefix; semantic field name unresolved. */
typedef struct View { unsigned char unknown0[848]; unsigned int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==848?1:-1];
typedef char check_prefix[sizeof(View)==852?1:-1];
void word_operation_8c02bac0(View *o) { o->value|=0x10000000; }
