#include "src/include/classes/TWindowDD_WS_Word.h"
/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef char check_dispatch[(unsigned long)&((TWindowDD_WS_Word *)0)->dispatch==24?1:-1];
typedef char check_resource[(unsigned long)&((TWindowDD_WS_Word *)0)->resource==136?1:-1];
TWindowDD_WS_Word *TWindowDD_WS_Word_dtor_8c215cdc(TWindowDD_WS_Word *o,short flags) { if(o) { o->dispatch=(void *)0x8c278298; if(o->resource) { ((void (*)(void *))0x8c18de08)(o->resource); o->resource=0; } ((void (*)(void *,int))0x8c0db244)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
