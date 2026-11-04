#include "src/include/classes/TItemWpnThunderCane.h"
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct TItemWpnThunderCane_p13c TItemWpnThunderCane_p13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
typedef struct TItemWpnThunderCane_p214 TItemWpnThunderCane_p214;
typedef struct S_vv5 S_vv5;
typedef struct S_x78672 S_x78672;
struct Arg0_13c_s754 {
    char unknown0[0x30];
    int f30;
};
struct S_vv5 {
    char f00;
};
struct S_x78672 {
    char unknown0[0x4];
    char f04;
};
extern "C" int call_8c1aaabc(int);
extern "C" void operation_8c075894(void *, void *, int, int);
extern "C" void TTecGiZonde_create_8c0b29c8(void *, void *, void *, void *);
extern "C" void operation_8c077224(void *);
extern "C" void operation_8c076580(void *);
extern "C" void TItemWpnThunderCane_v49_8c24096c(TItemWpnThunderCane *o)
{
    int v4;
    int v6;
    S_vv5 *v5;
    char *list;
    SBlock4 *e;
    int t1;
    int v1;
    int t2;
    t1 = call_8c1aaabc(((int)o->f13c + 0x754));
    if (!((short)t1 != 2)) {
        char *list;
        int v6;
        operation_8c075894((void *)o, (void *)(o->f13c), 0, (int)(((char *)o + 0x234)));
        list = (char *)&((Arg0_13c_s754 *)((char *)o->f13c + 0x754))->f30;
        if (list == 0) {
            return;
        }
        v1 = *(int *)list;
        if (v1 < 0 || v1 > 0xa) {
            v1 = 0;
        }
        v5 = (S_vv5 *)((char *)o + 0x244);
        o->f240 = v1;
        v6 = 0;
        for (; !(v6 == 0xa); ) {
            v1 = v6 << 2;
            e = (SBlock4 *)(list + (v1) + 4);
            if (e != 0) {
                *(SBlock4 *)&v5->f00 = *e;
                v5 = (S_vv5 *)((char *)v5 + 8);
            }
            v6++;
        }
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        if (o->f240 != 0) {
            TTecGiZonde_create_8c0b29c8((void *)(o->f13c), (void *)(((char *)o + 0x234)), (void *)(((char *)o + 0x240)), (void *)(o->f214));
        }
        operation_8c077224((void *)o);
        return;
    }
    operation_8c076580((void *)o);
}
