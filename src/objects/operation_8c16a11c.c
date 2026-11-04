#include "src/include/classes/TPlyItem.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TPlyItem *);
TPlyItem *TPlyItem_dtor_8c16a11c(TPlyItem *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c2701a4;
        if (((char *)o + 0x24) != 0) {
            o->f48 = (void *)0x8c2701c0;
            if (((char *)o + 0x24) != 0) {
                o->f48 = (void *)0x8c266048;
                if (((char *)o + 0x24) != 0) {
                    o->f48 = (void *)0x8c266054;
                }
            }
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
