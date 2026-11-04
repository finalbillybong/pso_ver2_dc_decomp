#include "src/include/classes/TItemWpnHand.h"
typedef struct TItemWpnHand_p13c TItemWpnHand_p13c;
extern void call_8c075730(TItemWpnHand *, void *, int);
void TItemWpnHand_v52_8c179ed4(TItemWpnHand *o)
{
    if (o->f138 == 3) {
        *(int *)0x8c4db980 = 0;
        call_8c075730(o, (void *)(o->f13c), (int)(o->f142));
        *(int *)0x8c4db980 = 1;
        call_8c075730(o, (void *)(o->f13c), 0x23);
    }
}
