#include "src/include/classes/TWindowSubSymbolChatPartsSet.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowSubSymbolChatPartsSet_p90 TWindowSubSymbolChatPartsSet_p90;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c199b40(int, int);
extern void TWindowChatSymbol_dtor_8c1a632c(void *, short);
extern void call_8c122774(void *, TWindowSubSymbolChatPartsSet *);
TWindowSubSymbolChatPartsSet *TWindowSubSymbolChatPartsSet_dtor_8c223ec4(TWindowSubSymbolChatPartsSet *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c278acc;
        operation_8c199b40((int)(o->f90), 1);
        TWindowChatSymbol_dtor_8c1a632c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
