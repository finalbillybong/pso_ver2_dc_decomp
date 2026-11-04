#include "src/include/classes/TObjContainerBase.h"
/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef char check_dispatch[(unsigned long)&((TObjContainerBase *)0)->dispatch==24?1:-1];
typedef char check_member[(unsigned long)&((TObjContainerBase *)0)->member==860?1:-1];
TObjContainerBase *TObjContainerBase_dtor_8c084258(TObjContainerBase *o,short flags) { if(o) { o->dispatch=(void *)0x8c264d1c; ((void (*)(void *,int))0x8c1f1460)(&o->member,-1); ((void (*)(void *,int))0x8c0436e0)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
