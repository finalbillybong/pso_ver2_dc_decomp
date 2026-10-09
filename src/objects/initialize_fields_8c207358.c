typedef struct View { unsigned short value0; unsigned short value2; unsigned short value4; unsigned short value6; unsigned short value8; unsigned short value10; unsigned char value12; unsigned char value13; unsigned char value14; } View;
typedef char check_View_value0[(unsigned long)&((View *)0)->value0==0?1:-1];
typedef char check_View_value2[(unsigned long)&((View *)0)->value2==2?1:-1];
typedef char check_View_value4[(unsigned long)&((View *)0)->value4==4?1:-1];
typedef char check_View_value6[(unsigned long)&((View *)0)->value6==6?1:-1];
typedef char check_View_value8[(unsigned long)&((View *)0)->value8==8?1:-1];
typedef char check_View_value10[(unsigned long)&((View *)0)->value10==10?1:-1];
typedef char check_View_value12[(unsigned long)&((View *)0)->value12==12?1:-1];
typedef char check_View_value13[(unsigned long)&((View *)0)->value13==13?1:-1];
typedef char check_View_value14[(unsigned long)&((View *)0)->value14==14?1:-1];
typedef char check_View_prefix[sizeof(View)==16?1:-1];
void initialize_fields_8c207358(View *o) {
 o->value4=0x1f4u;
 o->value10=0x0u;
 o->value8=0x0u;
 o->value6=0x0u;
 o->value13=0x0u;
 o->value12=0x0u;
 o->value0=0x0u;
 o->value2=0x28u;
 o->value14=0xeu;
}
