#include "src/include/classes/TBoss2Mine.h"
/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef char check_dispatch[(unsigned long)&((TBoss2Mine *)0)->dispatch==24?1:-1];
TBoss2Mine *TBoss2Mine_dtor_8c1658c4(TBoss2Mine *o,short flags) { if(o) { o->dispatch=(void *)0x8c26fcec; ((void (*)(void *))0x8c052124)(o); ((void (*)(void *,int))0x8c059c30)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
