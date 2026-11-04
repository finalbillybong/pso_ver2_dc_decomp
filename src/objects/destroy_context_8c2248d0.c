#include "src/include/classes/TWindowSubSymbolChatParts.h"
/* Provisional accessed prefix; member extent is not the whole runtime object. */
typedef char check_dispatch[(unsigned long)&((TWindowSubSymbolChatParts *)0)->dispatch==24?1:-1];
typedef char check_second[(unsigned long)&((TWindowSubSymbolChatParts *)0)->second==152?1:-1];
typedef char check_first[(unsigned long)&((TWindowSubSymbolChatParts *)0)->first==156?1:-1];
TWindowSubSymbolChatParts *TWindowSubSymbolChatParts_dtor_8c2248d0(TWindowSubSymbolChatParts *o,short flags) { if(o) { o->dispatch=(void *)0x8c278aec; ((void (*)(void *,int))0x8c199ba0)(o->first,1); ((void (*)(void *,int))0x8c199b40)(o->second,1); ((void (*)(void *,int))0x8c11924c)(o,0); if(flags>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,o); } return o; }
