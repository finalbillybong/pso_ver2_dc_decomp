#include "src/include/classes/TObjEneLappy.h"
/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef char check_dispatch[(unsigned long)&((TObjEneLappy *)0)->dispatch==24?1:-1];
TObjEneLappy *TObjEneLappy_dtor_8c04fee4(TObjEneLappy *o,short flags) { if(o) { o->dispatch=(void *)0x8c262040; ((void (*)(void *))0x8c052124)(o); ((void (*)(void *,int))0x8c0120f4)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
