#include "src/include/classes/TObject.h"
/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef char check_dispatch[(unsigned long)&((TObject *)0)->vtable==24?1:-1];
TObject *destroy_context_8c0a47dc(TObject *o,short flags) { if(o) { o->vtable=(void *)0x8c265b34; ((int (*)(void))0x8c0a21a4)(); ((void (*)(void *,int))0x8c03311c)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
