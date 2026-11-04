#include "src/include/classes/TObjEneBalClaw.h"
extern void TObjEnemyCustom_ctor_8c0c2354(TObjEneBalClaw *);
extern void initialize_state_8c0fbf7c(void *);
TObjEneBalClaw *TObjEneBalClaw_ctor_8c11dbd0(TObjEneBalClaw *o)
{
    TObjEneBalClaw **self = &o;
    (void)self;
    TObjEnemyCustom_ctor_8c0c2354(o);
    o->dispatch = (void *)0x8c26a220;
    initialize_state_8c0fbf7c(o->state);
    o->tag = *(int *)0x8c3114ec;
    o->size = 0x3e0;
    o->mode_flags |= 8;
    o->flags |= 0x40000;
    o->counter = 0;
    o->speed = 0.0f;
    {
        unsigned int *bits = &o->status;
        *bits &= ~0x10000;
    }
    o->status |= 0x20000;
    return o;
}
