#include "src/include/classes/TObjCity_Season_FireWorkCtrl.h"
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
struct Frame {
    float f00;
    float f04;
    float f08;
    Block16 f0c;
};
extern Block16 g_8c32a318;
extern "C" char g_8c32a328[];
extern "C" void operation_8c0c5480(void *, void *, Frame *);
extern "C" void njPrintColor_8c38c5b6(int);
extern "C" void debug_print_at_8c38cf80(int, void *, ...);
extern "C" void TObjCity_Season_FireWorkCtrl_v09_8c1d96bc(TObjCity_Season_FireWorkCtrl *o)
{
    Frame frame;
    int t1;
    void *pm5;
    t1 = o->v11(250.0f, 10.0f);
    if (!(t1 == 0)) {
        Block16 *pm2;
        int pm3;
        TObjCity_Season_FireWorkCtrl *pm4;
        pm2 = &g_8c32a318;
        pm3 = (unsigned char)(0);
        *(&(&frame)->f0c) = *(pm2);
        pm4 = (TObjCity_Season_FireWorkCtrl *)o;
        (pm4)->f68 = pm3;
        o->f60 = 0;
        (&frame)->f00 = o->f6c;
        (&frame)->f04 = 3.0f;
        (&frame)->f08 = o->f74;
        operation_8c0c5480((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x60)), (Frame *)((&frame)));
    }
    t1 = -0xff0100;
    njPrintColor_8c38c5b6(t1);
    pm5 = (void *)((g_8c32a328 + 0x191));
    debug_print_at_8c38cf80(0x13001a, pm5);
    debug_print_at_8c38cf80(0x13001b, (void *)((g_8c32a328 + 0x19f)));
    debug_print_at_8c38cf80(0x13001c, (void *)((g_8c32a328 + 0x1ae)));
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c32a328 + 0x1bc)));
    njPrintColor_8c38c5b6(-0xf0f10);
}
