#include "src/include/classes/TItemWpnYasuShotGun.h"
typedef struct Frame Frame;
typedef struct TItemWpnYasuShotGun_p13c TItemWpnYasuShotGun_p13c;
struct Frame {
    char unknown0[0xc];
};
extern void call_8c075894(TItemWpnYasuShotGun *, void *, int, Frame *);
extern void create_effect_777c(void *, int);
void TItemWpnYasuShotGun_v49_8c24f810(TItemWpnYasuShotGun *o)
{
    Frame frame;
    o->f234 = 2;
    call_8c075894(o, (void *)(o->f13c), (int)(o->f224), (Frame *)((&frame)));
    create_effect_777c((void *)(&frame), 9);
}
