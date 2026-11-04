#include "src/include/classes/TOMonumentAncient02.h"
typedef struct TOMonumentAncient02_p84 TOMonumentAncient02_p84;
typedef struct Arg1 Arg1;
typedef struct S_vv16 S_vv16;
struct Arg1 {
    short f00;
    short f02;
};
struct S_vv16 {
    char unknown0[0x4];
    short f04;
};
extern int g_8c46ed0c;
extern void operation_8c177748(int);
extern int operation_8c17796c(int);
void TOMonumentAncient02_v05_8c0f1ed8(TOMonumentAncient02 *o, Arg1 *a1)
{
    S_vv16 *v16;
    int idx;
    short *q;
    int t1;
    int t2;
    int t3;
    int t4;
    o->fe4 = a1->f00;
    switch (o->fe4) {
    case 2:
        operation_8c177748((int)(o->f108));
        o->f100 = 1;
        break;
    default:
        t1 = operation_8c17796c((int)(o->f108));
        if (t1 != 0) {
            o->fe4 = 2;
            o->f100 = 1;
        }
        break;
    }
    t2 = operation_8c17796c(0x2c);
    if (t2 != 0) {
        t3 = operation_8c17796c(0x2d);
        if (t3 != 0) {
            t4 = operation_8c17796c(0x2e);
            if (t4 != 0) {
                operation_8c177748(0x2f);
            }
        }
    }
    v16 = (S_vv16 *)o->f84;
    if (v16 != 0 && (idx = v16->f04) >= 0 && !(idx > 0xb9f)) {
        q = (short *)((char *)g_8c46ed0c + (idx << 2));
        q[0] = a1->f00;
        q[1] = a1->f02;
    }
}
