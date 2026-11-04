#include "src/include/classes/TObjLazerFence4.h"
extern char g_8c3112d4[];
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
void TObjLazerFence4_v09_8c11db38(TObjLazerFence4 *o)
{
    o->ff2 = o->f88;
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001a, (void *)((g_8c3112d4 + 0xbb)));
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c3112d4 + 0xcb)), o->ff2 & 0xffff);
    debug_print_at_8c38cf80(0x130020, (void *)((g_8c3112d4 + 0xdd)));
    njPrintColor_8c38c5b6(-0xf0f10);
}
