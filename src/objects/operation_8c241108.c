#include "src/include/classes/TItemWpnBag.h"
typedef struct Frame Frame;
typedef struct TItemWpnBag_p13c TItemWpnBag_p13c;
struct Frame {
    char unknown0[0xc];
};
extern int call_8c1aaabc(int);
extern void call_8c075894(TItemWpnBag *, void *, int, Frame *);
extern void create_effect_777c(void *, int);
void TItemWpnBag_v49_8c241108(TItemWpnBag *o)
{
    Frame frame;
    int t1;
    t1 = call_8c1aaabc((int)((int)o->f13c + 0x754));
    if ((short)t1 == 2) {
        call_8c075894(o, (void *)(o->f13c), 2, (Frame *)((&frame)));
        create_effect_777c((void *)(&frame), 0x1be);
    }
}
