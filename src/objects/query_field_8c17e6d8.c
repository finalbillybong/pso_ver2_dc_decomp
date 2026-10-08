/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[20]; int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==20?1:-1];
typedef char check_prefix[sizeof(View)==24?1:-1];
#define current (*(View **)0x8c4db9e4)
int query_field_8c17e6d8(void) { int result; if(current) result=current->value; else result=0; return result; }
