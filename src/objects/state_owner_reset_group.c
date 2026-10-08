/* Provisional names; preserve observed bounds, field widths and call order. */
#include "src/include/state_owner.h"
#define clear_at ((void (*)(StateOwner *))0x8c239558)
#define release_at ((void (*)(void *))0x8c011ed8)
StateOwner *operation_2394a8(StateOwner *o,short release){
    if(o){
        clear_at(o);
        if(release>0)release_at(o);
    }
    return o;
}
void operation_2394dc(StateOwner *o){
    o->timer=0;
    clear_at(o);
}
void operation_2394ec(StateOwner *o){
    o->timer=0;
    clear_at(o);
    o->states[0].value=0.0f;
    o->states[0].total=0.0f;
    o->states[1].value=0.0f;
    o->states[1].total=0.0f;
    o->states[2].value=0.0f;
    o->states[2].total=0.0f;
    o->states[3].value=0.0f;
    o->states[3].total=0.0f;
    o->states[4].value=0.0f;
    o->states[4].total=0.0f;
}
