/* Provisional accessed prefix; not a complete original class. */
typedef struct View { char unknown0[32]; int value; } View;
typedef char check_field[(unsigned long)&((View *)0)->value==32?1:-1];
typedef char check_prefix[sizeof(View)==36?1:-1];
#define current (*(View **)0x8c5133a0)
int query_field_8c2596c0(void) { int result; if(current) result=current->value; else result=10; return result; }
