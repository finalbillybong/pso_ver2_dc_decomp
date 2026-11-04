#include "src/include/classes/TObject.h"
/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef char check_dispatch[(unsigned long)&((TObject *)0)->vtable==24?1:-1];
TObject *destroy_context_8c03f2e8(TObject *o,short flags) { if(o) { o->vtable=(void *)0x8c261bb8; ((void (*)(void))0x8c1004cc)(); ((void (*)(void *,int))0x8c03311c)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
