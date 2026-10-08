/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[4]; int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==4?1:-1];
typedef char check_prefix[sizeof(View)==8?1:-1];
#define current (*(View **)0x8c4db9e4)
int query_field_8c17e6c0(void) { int result; if(current) result=current->value; else result=0; return result; }
