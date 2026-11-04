#include "src/include/classes/TObjEnvSound.h"
typedef struct Arg0_88 Arg0_88;
typedef struct TObjEnvSound_p98 TObjEnvSound_p98;
extern "C" char g_8c30b000[];
extern "C" void njPrintColor_8c38c5b6(int);
extern "C" void debug_print_at_8c38cf80(int, void *, ...);
extern "C" void TObjEnvSound_v09_8c100cf4(TObjEnvSound *o)
{
    o->f98 = (TObjEnvSound_p98 *)o->f8c;
    if (-0x7f > (int)(o->f98)) {
        o->f98 = (TObjEnvSound_p98 *)-0x7f;
    }
    if ((int)(o->f98) > 0x7f) {
        o->f98 = (TObjEnvSound_p98 *)0x7f;
    }
    o->f94 = o->f74;
    if (!(o->f94 > 0.0f)) {
        o->f94 = 200.0f;
    }
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001c, (void *)((g_8c30b000 + 0xd)), 200.0f);
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c30b000 + 0x28)), (int)(o->f88));
    debug_print_at_8c38cf80(0x13001f, (void *)((g_8c30b000 + 0x33)), (int)(o->f98));
    njPrintColor_8c38c5b6(-0xf0f10);
    o->v3();
}
