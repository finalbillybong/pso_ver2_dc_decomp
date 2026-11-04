#include "src/include/classes/TObjEneLappy.h"
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct TObjEneLappy_p334 TObjEneLappy_p334;
typedef struct TObjEneLappy_pdc TObjEneLappy_pdc;
struct TObjEneLappy_p334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct TObjEneLappy_pdc {
    char unknown0[0x18];
    int f18;
};
extern void call_8c0441d8(TObjEneLappy *, Vector3);
void TObjEneLappy_v67_8c0508f0(TObjEneLappy *o)
{
    if (((o->f390 & 0x42)) == 0 && ((o->f34 & 0xa00)) == 0) {
        if (o->f30a != 1) {
            switch (o->f394) {
            case 0:
                o->ff0 = 3;
                break;
            case 1:
                o->ff0 = 2;
            }
            o->f396 = 0;
            o->f39c = 0;
            o->f394 = 0;
            o->f30a = 1;
            o->f34 &= -0x240001;
            if (o->f334 != 0) {
                call_8c0441d8(o, *(Vector3 *)&o->f334->f324);
            }
        }
        o->fdc->f18 |= 1;
    }
}
