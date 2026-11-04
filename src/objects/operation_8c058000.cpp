#include "src/include/classes/TObjEneBm3FlyNest.h"
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void cache_actor_position_8c058238(void *);
extern "C" void call_8c05a108(TObjEneBm3FlyNest *);
extern "C" void update_context_blend(void *);
extern "C" void TObjEneBm3FlyNest_update_8c058000(TObjEneBm3FlyNest *o)
{
    int t1;
    int t2;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        o->v109();
        return;
    }
    t2 = o->v89();
    if (t2 != 4) {
        o->v91();
    } else {
        if (o->f30a == 0) {
            operation_8c059ea4((void *)o, 1);
        }
    }
    o->v94();
    cache_actor_position_8c058238((void *)o);
    call_8c05a108(o);
    update_context_blend((void *)(((char *)o + 0x45c)));
    o->v106();
}
