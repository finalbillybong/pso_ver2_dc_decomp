#include "src/include/classes/TFontSmallHelp.h"
typedef struct S_c8c021ef8 S_c8c021ef8;
struct S_c8c021ef8 {
    char unknown0[0xc78];
    int fc78;
};
extern void TObject_ctor_8c0330e4(TFontSmallHelp *, int);
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c1ab8e8(TFontSmallHelp *, int);
extern void call_8c1ab894(TFontSmallHelp *, int);
TFontSmallHelp *TFontSmallHelp_ctor_8c1ab508(TFontSmallHelp *o, int a1, int a2, int a3, int a4, int a5)
{
    TFontSmallHelp **home = &o;
    S_c8c021ef8 *t1;
    (void)home;
    TObject_ctor_8c0330e4(o, a1);
    o->vtable = (void *)0x8c274838;
    o->tag = *(int *)0x8c324f68;
    o->size = 0x58;
    t1 = lookup_low_id(a2);
    if (t1 == 0) {
        o->f04 |= 0x10;
        o->f04 |= 1;
        return o;
    }
    o->f54 = a2;
    o->f20 = t1->fc78;
    call_8c1ab8e8(o, a3);
    o->f4c = 0;
    o->f50 = a4;
    call_8c1ab894(o, a5);
    return o;
}
