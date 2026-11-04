#include "src/include/classes/TObjLazerFenceExtra.h"
typedef struct TObjLazerFenceExtra_pdc TObjLazerFenceExtra_pdc;
struct TObjLazerFenceExtra_pdc {
    char unknown0[0xc];
    float f0c;
    float f10;
};
extern "C" char g_8c2fede8[];
extern "C" void njPrintColor_8c38c5b6(int);
extern "C" void debug_print_at_8c38cf80(int, void *, ...);
extern "C" void TObjLazerFenceExtra_v09_8c0815fc(TObjLazerFenceExtra *o)
{
    o->fe8 = o->f88;
    o->fe4 = (int)o->f6c;
    if (!(o->fe4 >= 0)) {
        o->fe4 = 0;
    }
    if (o->fe4 > 3) {
        o->fe4 = 3;
    }
    if (0.0f > o->f70) {
        o->f70 = 0.0f;
    }
    if (0.0f > o->f74) {
        o->f74 = 0.0f;
    }
    o->fdc->f10 = o->f70;
    o->fdc->f0c = o->f74;
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001a, (void *)((g_8c2fede8 + 0xbe)));
    debug_print_at_8c38cf80(0x13001b, (void *)((g_8c2fede8 + 0x104)));
    debug_print_at_8c38cf80(0x13001c, (void *)((g_8c2fede8 + 0x113)));
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c2fede8 + 0xce)), o->fe8);
    debug_print_at_8c38cf80(0x130020, (void *)((g_8c2fede8 + 0xe0)));
    njPrintColor_8c38c5b6(-0xf0f10);
    o->v3();
}
