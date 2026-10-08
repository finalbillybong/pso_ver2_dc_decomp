/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[36]; int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==36?1:-1];
typedef char check_prefix[sizeof(View)==40?1:-1];
#define current (*(View **)0x8c504a08)
int query_field_8c209364(void) { int result; if(current) result=current->value; else result=-1; return result; }
