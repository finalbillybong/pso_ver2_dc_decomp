#include "src/include/classes/TWindowSubSymbolChatHelp.h"
extern void initialize_base_8c0db1d0(void *, int);
TWindowSubSymbolChatHelp *TWindowSubSymbolChatHelp_ctor_8c21f778(TWindowSubSymbolChatHelp *o, int a1, int a2)
{
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c3369c4));
    o->dispatch = (void *)0x8c278820;
    o->tag = (int)(*(int *)0x8c3369c0);
    o->size = 0x7c;
    o->f68 = 0;
    o->f6c = a1;
    o->f70 = a2;
    o->f74 = 0;
    o->f78 = 0;
    return o;
}
