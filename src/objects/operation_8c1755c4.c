#include "src/include/classes/TItemWpnClaw.h"
typedef struct TItemWpnClaw_p13c TItemWpnClaw_p13c;
extern void call_8c075730(TItemWpnClaw *, void *, int);
extern void call_8c076fc8(TItemWpnClaw *, int);
void TItemWpnClaw_v52_8c1755c4(TItemWpnClaw *o)
{
    call_8c075730(o, (void *)(o->f13c), 0x31);
    call_8c076fc8(o, 1);
    call_8c076fc8(o, 0);
}
