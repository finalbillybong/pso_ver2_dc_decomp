#include "src/include/classes/TItemWpnBouquet.h"
typedef struct Frame Frame;
typedef struct TItemWpnBouquet_p13c TItemWpnBouquet_p13c;
struct Frame {
    char unknown0[0xc];
};
extern void call_8c075894(TItemWpnBouquet *, void *, int, Frame *);
extern void create_effect_777c(void *, int);
void TItemWpnBouquet_v49_8c255df0(TItemWpnBouquet *o)
{
    Frame frame;
    call_8c075894(o, (void *)(o->f13c), 1, (Frame *)((&frame)));
    create_effect_777c((void *)(&frame), 0x65);
}
