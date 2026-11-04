#include "src/include/classes/TObjEneRe7Berura.h"
extern "C" int operation_8c03d338(void);
extern "C" void set_actor_raised_position_8c0d1c4c(void *);
extern "C" void call_8c05a108(TObjEneRe7Berura *);
extern "C" void update_context_blend(void *);
extern "C" void TObjEneRe7Berura_update_8c0d1afc(TObjEneRe7Berura *o)
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
        *(int *)((char *)o + 0x3ec) += o->f3e8;
        o->f3ec = (unsigned char)o->f3ec;
    }
    set_actor_raised_position_8c0d1c4c((void *)o);
    call_8c05a108(o);
    update_context_blend((void *)(((char *)o + 0x464)));
    o->v106();
}
