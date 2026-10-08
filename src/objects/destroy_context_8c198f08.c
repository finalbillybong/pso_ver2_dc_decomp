/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef struct View { char unknown0[24]; void * dispatch; char unknown28[108]; void * second; void * first; } View;
typedef char check_dispatch[(unsigned long)&((View *)0)->dispatch==24?1:-1];
typedef char check_second[(unsigned long)&((View *)0)->second==136?1:-1];
typedef char check_first[(unsigned long)&((View *)0)->first==140?1:-1];
typedef char check_prefix[sizeof(View)==144?1:-1];
View *destroy_context_8c198f08(View *o,short flags) { if(o) { o->dispatch=(void *)0x8c272974; ((void (*)(void *,int))0x8c199ba0)(o->first,1); ((void (*)(void *,int))0x8c199b40)(o->second,1); ((void (*)(void *,int))0x8c11924c)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
