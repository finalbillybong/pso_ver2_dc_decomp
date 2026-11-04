#include "src/include/classes/TItemWpnOnClaw.h"
typedef struct TItemWpnOnClaw_p13c TItemWpnOnClaw_p13c;
extern void call_8c075730(TItemWpnOnClaw *, void *, int);
extern void call_8c076fc8(TItemWpnOnClaw *, int);
void TItemWpnOnClaw_v52_8c250e70(TItemWpnOnClaw *o)
{
    call_8c075730(o, (void *)(o->f13c), 0x31);
    call_8c076fc8(o, 1);
    call_8c076fc8(o, 0);
}
