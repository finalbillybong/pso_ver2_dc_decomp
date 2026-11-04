#include "src/include/classes/TObjMapWarpAncient.h"
typedef struct TObjMapWarpAncient_p13c TObjMapWarpAncient_p13c;
struct TObjMapWarpAncient_p13c {
    char unknown0[0x4];
    int f04;
};
extern void call_8c0889f0(TObjMapWarpAncient *);
void TObjMapWarpAncient_update_8c1578e8(TObjMapWarpAncient *o)
{
    float v3;
    if (o->f8c >= 0) {
        o->f120 += 4.0f;
        v3 = (float)(float)(unsigned int)(o->f13c->f04 + -1);
        if (o->f120 > v3) {
            o->f120 = 0.0f;
        }
        call_8c0889f0(o);
    }
}
