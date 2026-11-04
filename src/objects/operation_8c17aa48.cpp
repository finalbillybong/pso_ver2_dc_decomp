#include "src/include/classes/TItemWpnPsychowand.h"
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct TItemWpnPsychowand_p13c TItemWpnPsychowand_p13c;
struct TItemWpnPsychowand_p13c {
    char unknown0[0x310];
    int f310;
};
extern S_g8c44be9c *g_8c44be9c;
extern "C" void operation_8c1c5890(int, int, int);
extern "C" int call_8c1aaabc(void *);
extern "C" void call_8c17ab18(TItemWpnPsychowand *);
extern "C" void operation_8c076580(void *);
extern "C" void TItemWpnPsychowand_v49_8c17aa48(TItemWpnPsychowand *o)
{
    int v1;
    int t1;
    int t2;
    v1 = (int)(((o->f13c->f310 & 0x20)) != 0);
    if (v1 != 0) {
        operation_8c1c5890((int)g_8c44be9c, (int)o, 4);
    }
    t1 = call_8c1aaabc((void *)(((char *)o->f13c + 0x754)));
    if ((short)t1 == 2) {
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        call_8c17ab18(o);
        return;
    }
    operation_8c076580((void *)o);
}
