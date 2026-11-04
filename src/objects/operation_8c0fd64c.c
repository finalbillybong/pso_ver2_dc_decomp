#include "src/include/classes/TOMine.h"
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct S_g8c46ed0c S_g8c46ed0c;
typedef struct TOMine_p84 TOMine_p84;
typedef struct S_vv2 S_vv2;
struct TOMine_p84 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    char f00;
    char unknown1[0x3];
};
struct S_vv2 {
    char f00;
};
extern S_g8c46ed0c *g_8c46ed0c;
extern void call_8c05406c(TOMine *, Frame *);
void operation_8c0fd64c(TOMine *o)
{
    Frame frame;
    int v6;
    S_vv2 *v2;
    if ((unsigned int)o->f20 >= (unsigned int)0x4000 && o->f84 != 0) {
        if (o->f84 == 0) {
            v6 = (int)0;
        } else {
            if (o->f84->f04 < 0 || o->f84->f04 > 0xb9f) {
                v6 = (int)0;
            } else {
                *(SBlock4 *)&(&frame)->f00 = *(SBlock4 *)((char *)g_8c46ed0c + (o->f84->f04 << 2));
                v6 = (int)1;
            }
        }
        if (v6 != 0) {
            o->f30a = 3;
            *(short *)&(&frame)->f00 = o->f30a;
            call_8c05406c(o, (Frame *)((&frame)));
        }
    }
}
