#include "src/include/classes/TWindowSubCustomSelect.h"
/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef char check_dispatch[(unsigned long)&((TWindowSubCustomSelect *)0)->dispatch==24?1:-1];
typedef char check_second[(unsigned long)&((TWindowSubCustomSelect *)0)->second==136?1:-1];
typedef char check_first[(unsigned long)&((TWindowSubCustomSelect *)0)->first==140?1:-1];
TWindowSubCustomSelect *TWindowSubCustomSelect_dtor_8c198f08(TWindowSubCustomSelect *o,short flags) { if(o) { o->dispatch=(void *)0x8c272974; ((void (*)(void *,int))0x8c199ba0)(o->first,1); ((void (*)(void *,int))0x8c199b40)(o->second,1); ((void (*)(void *,int))0x8c11924c)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
