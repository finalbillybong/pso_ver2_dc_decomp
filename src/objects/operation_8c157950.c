#include "src/include/classes/TObjMapWarpAncient.h"
extern char g_8c316250[];
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
extern void call_8c088b28(TObjMapWarpAncient *);
void TObjMapWarpAncient_v09_8c157950(TObjMapWarpAncient *o)
{
    if (!(o->f8c >= 0)) {
        njPrintColor_8c38c5b6(-0xff0100);
        debug_print_at_8c38cf80(0x13001f, (void *)((g_8c316250 + 0x123)));
        njPrintColor_8c38c5b6(-0xf0f10);
        return;
    }
    call_8c088b28(o);
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001f, (void *)((g_8c316250 + 0x141)));
    njPrintColor_8c38c5b6(-0xf0f10);
}
