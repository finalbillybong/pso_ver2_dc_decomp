/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef struct View { char unknown0[24]; void * dispatch; char unknown28[296]; void * resource; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_resource[(unsigned long)&((View *)0)->resource==324?1:-1];
typedef char check_prefix[sizeof(View)==328?1:-1];
View *destroy_context_8c0b9ce8(View *o,short flags) { if(o) { o->dispatch=(void *)0x8c266200; if(o->resource) { ((void (*)(void *))0x8c052124)(o->resource); o->resource=0; } ((void (*)(void *,int))0x8c0a0104)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
