#include "src/include/classes/TTecPlayerInfluence.h"
/* Checked provisional accessed prefix. */
typedef char check_dispatch[(unsigned long)&((TTecPlayerInfluence *)0)->dispatch==24?1:-1];
typedef char check_resource[(unsigned long)&((TTecPlayerInfluence *)0)->resource==248?1:-1];
TTecPlayerInfluence *TTecPlayerInfluence_dtor_8c0b6c78(TTecPlayerInfluence *o,short flags) { if(o) { o->dispatch=(void *)0x8c266114; if(o->resource)((void (*)(void *))0x8c052124)(o->resource); ((void (*)(void *,int))0x8c0a0104)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
