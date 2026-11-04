#include "src/include/classes/TObjWarpBoss03.h"
extern int g_8c336b10;
extern void call_8c088f14(TObjWarpBoss03 *, int, int);
TObjWarpBoss03 *TObjWarpBoss03_ctor_8c220664(TObjWarpBoss03 *o, int a1, int a2)
{
    call_8c088f14(o, a1, a2);
    o->dispatch = (void *)0x8c278860;
    o->tag = (int)(g_8c336b10);
    o->size = 0xf4;
    o->fe4 = 20.0f;
    return o;
}
