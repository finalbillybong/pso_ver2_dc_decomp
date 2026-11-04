#include "src/include/classes/TItemWpnChainSaw.h"
typedef struct Frame Frame;
typedef struct TItemWpnChainSaw_p13c TItemWpnChainSaw_p13c;
struct Frame {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
};
extern void call_8c075894(TItemWpnChainSaw *, void *, int, Frame *);
extern void create_effect_777c(void *, int);
void TItemWpnChainSaw_v49_8c17be70(TItemWpnChainSaw *o)
{
    Frame frame;
    call_8c075894(o, (void *)(o->f13c), 2, (Frame *)((&frame)));
    (&frame)->f04 -= 15.0f;
    create_effect_777c((void *)(&frame), 0x1d2);
}
