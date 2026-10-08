/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef struct View { char unknown0[24]; void * dispatch; char unknown28[832]; char member; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_member[(unsigned long)&((View *)0)->member==860?1:-1];
typedef char check_prefix[sizeof(View)==864?1:-1];
View *destroy_context_8c084258(View *o,short flags) { if(o) { o->dispatch=(void *)0x8c264d1c; ((void (*)(void *,int))0x8c1f1460)(&o->member,-1); ((void (*)(void *,int))0x8c0436e0)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
