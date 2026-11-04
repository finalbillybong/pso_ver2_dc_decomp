#include "src/include/classes/TObjCityDoor_Warp.h"
typedef struct TObjCityDoor_Warp_pf0 TObjCityDoor_Warp_pf0;
struct TObjCityDoor_Warp_pf0 {
    float f00;
    char unknown4[0x4];
    float f08;
};
extern "C" int play_se_8c05fbf8(int, void *, int, int);
extern "C" void emit_control_60320(int, int, int);
extern "C" void TObjCityDoor_Warp_v18_8c1c1eb8(TObjCityDoor_Warp *o)
{
    int t1;
    int t2;
    if (!(24.0f > o->fec) && !(o->fec > 25.0f)) {
        t1 = play_se_8c05fbf8(0x40004, (void *)(((char *)o + 0x3c)), 0, 0);
        emit_control_60320(t1, -0x500, 0);
    }
    t2 = o->v15(o->ff0->f08);
    if (t2 == 0) {
        o->fe4 = 3;
        o->v20();
        return;
    }
    o->fec += o->ff0->f00;
    if (!(o->fe8 > o->fec)) {
        o->fec = o->fe8;
        o->fe4 = 2;
    }
}
