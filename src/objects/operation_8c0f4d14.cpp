#include "src/include/classes/TObjEneDf2Bringer.h"
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c0f4e74(void *);
extern "C" void call_8c05a108(TObjEneDf2Bringer *);
extern "C" void update_context_blend(void *);
extern "C" void TObjEneDf2Bringer_update_8c0f4d14(TObjEneDf2Bringer *o)
{
    int t1;
    int t2;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        o->v110();
        return;
    }
    t2 = o->v89();
    if (t2 != 4) {
        o->v91();
        *(int *)((char *)o + 0x470) += 0xc;
        o->f470 = (unsigned char)o->f470;
        if (2 >= o->f45c) {
            o->f450 = 1;
        } else {
            if (4 >= o->f45c) {
                o->f450 = 5;
            } else {
                if (5 >= o->f45c) {
                    o->f450 = 6;
                }
            }
        }
    }
    operation_8c0f4e74((void *)o);
    call_8c05a108(o);
    update_context_blend((void *)(((char *)o + 0x3fc)));
    o->v106();
}
