/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef struct View { char unknown0[24]; void * dispatch; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_prefix[sizeof(View)==28?1:-1];
View *destroy_context_8c127918(View *o,short flags) { if(o) { o->dispatch=(void *)0x8c26c170; ((void (*)(void *))0x8c052124)(o); ((void (*)(void *,int))0x8c11dc84)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
