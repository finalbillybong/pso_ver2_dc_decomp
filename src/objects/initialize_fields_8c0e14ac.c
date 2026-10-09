typedef struct View { unsigned int value0; unsigned int value4; } View;
typedef char check_View_value0[(unsigned long)&((View *)0)->value0==0?1:-1];
typedef char check_View_value4[(unsigned long)&((View *)0)->value4==4?1:-1];
typedef char check_View_prefix[sizeof(View)==8?1:-1];
View *initialize_fields_8c0e14ac(View *o) {
 o->value4=0x8c267768u;
 o->value0=0x0u;
 return o;
}
