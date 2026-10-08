/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef struct View { char unknown0[24]; void * dispatch; char unknown28[356]; unsigned int field; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_field[(unsigned long)&((View *)0)->field==384?1:-1];
typedef char check_prefix[sizeof(View)==388?1:-1];
View *destroy_context_8c13e8ac(View *o,short flags) { if(o) { o->dispatch=(void *)0x8c26db84; o->field=0; ((void (*)(void *,int))0x8c01c500)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
