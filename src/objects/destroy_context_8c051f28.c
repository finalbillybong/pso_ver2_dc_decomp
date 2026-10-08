/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef struct View { char unknown0[24]; void * dispatch; char unknown28[192]; unsigned int field_b; unsigned int field_a; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_field_b[(unsigned long)&((View *)0)->field_b==220?1:-1];
typedef char check_field_a[(unsigned long)&((View *)0)->field_a==224?1:-1];
typedef char check_prefix[sizeof(View)==228?1:-1];
View *destroy_context_8c051f28(View *o,short flags) { if(o) { o->dispatch=(void *)0x8c2621c8; o->field_a=0; o->field_b=0; ((void (*)(void *,int))0x8c01d2b0)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
