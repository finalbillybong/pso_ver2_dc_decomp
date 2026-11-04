#include "src/include/classes/TItemWpnYasumuraShiki2.h"
typedef struct Frame Frame;
typedef struct TItemWpnYasumuraShiki2_p13c TItemWpnYasumuraShiki2_p13c;
struct Frame {
    char unknown0[0xc];
};
extern void call_8c075894(TItemWpnYasumuraShiki2 *, void *, int, Frame *);
extern void create_effect_777c(void *, int);
void TItemWpnYasumuraShiki2_v49_8c24f4f4(TItemWpnYasumuraShiki2 *o)
{
    Frame frame;
    o->f244 = 2;
    call_8c075894(o, (void *)(o->f13c), (int)(o->f224), (Frame *)((&frame)));
    create_effect_777c((void *)(&frame), 9);
}
