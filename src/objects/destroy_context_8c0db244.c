/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef struct View { char unknown0[24]; void * dispatch; char unknown28[16]; char member; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_member[(unsigned long)&((View *)0)->member==44?1:-1];
typedef char check_prefix[sizeof(View)==48?1:-1];
View *destroy_context_8c0db244(View *o,short flags) { if(o) { o->dispatch=(void *)0x8c26770c; ((void (*)(void *))0x8c0e1bbc)(&o->member); ((void (*)(void *))0x8c0e25cc)(o); ((void (*)(void *,int))0x8c03311c)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
