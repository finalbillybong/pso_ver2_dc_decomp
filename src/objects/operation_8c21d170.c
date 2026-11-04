#include "src/include/classes/TQuestListOnline.h"
extern int g_8c336690;
extern TQuestListOnline *g_8c505960;
extern char g_8c278610[];
extern void TShopWindowBase_ctor_8c1066e4(void *, void *);
extern void memset_8c12b880(void *, int, int);
void TQuestListOnline_ctor_8c21d170(TQuestListOnline *o, int a1)
{
    TQuestListOnline **home = &o;
    (void)home;
    TShopWindowBase_ctor_8c1066e4((void *)(&o->f04), (void *)a1);
    o->f30 = (void *)g_8c278610;
    o->f1c = (g_8c278610 + 0x8);
    o->f04 = (int)(g_8c336690);
    o->f22 = 0x78;
    o->f44 = 0;
    o->f48 = 0;
    o->f4c = 0;
    o->f50 = 0;
    o->f54 = 0;
    o->f34 = 0;
    o->f38 = 0;
    o->f40 = 0;
    o->f74 = 0;
    memset_8c12b880((void *)(((char *)o + 0x58)), 0, 0x1c);
    o->f28 = 0;
    g_8c505960 = o;
}
