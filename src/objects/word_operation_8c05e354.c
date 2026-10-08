/* Checked provisional accessed prefix; semantic field name unresolved. */
typedef struct View { unsigned char unknown0[992]; unsigned int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==992?1:-1];
typedef char check_prefix[sizeof(View)==996?1:-1];
void word_operation_8c05e354(View *o) { o->value|=0x2; }
