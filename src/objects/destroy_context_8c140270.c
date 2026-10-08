/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef struct View { char unknown0[24]; void * dispatch; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_prefix[sizeof(View)==28?1:-1];
View *destroy_context_8c140270(View *o,short flags) { if(o) { o->dispatch=(void *)0x8c26dbec; ((void (*)(void *))0x8c14081c)(o); ((void (*)(void *,int))0x8c03311c)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
