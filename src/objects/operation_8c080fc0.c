#include "src/include/classes/TObjLazerFenceNorm.h"
extern char g_8c2fede8[];
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
void TObjLazerFenceNorm_v09_8c080fc0(TObjLazerFenceNorm *o)
{
    o->fe8 = o->f88;
    o->fe4 = (int)o->f6c;
    if (!(o->fe4 >= 0)) {
        o->fe4 = 0;
    }
    if (o->fe4 > 3) {
        o->fe4 = 3;
    }
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001a, (void *)((g_8c2fede8 + 0xbe)));
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c2fede8 + 0xce)), o->fe8);
    debug_print_at_8c38cf80(0x130020, (void *)((g_8c2fede8 + 0xe0)));
    njPrintColor_8c38c5b6(-0xf0f10);
}
