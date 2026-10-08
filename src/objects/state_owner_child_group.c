/* Provisional names; preserve observed bounds, field widths and call order. */
#include "src/include/state_owner.h"
#define clear_at ((void (*)(StateOwner *))0x8c239558)
#define release_at ((void (*)(void *))0x8c011ed8)
#define validate_at ((Child *(*)(StateOwner *))0x8c23957c)
int operation_239540(StateOwner *o){
    o->timer--;
    if(o->timer<0){
        o->timer=0;
        return 0;
    }
    return 1;
}
void operation_239558(StateOwner *o){
    if(validate_at(o))o->child->flags|=1;
}
static inline int valid(Child *child){
    return child->tag==*(unsigned int *)0x8c303bf0;
}
Child *operation_23957c(StateOwner *o){
    if(o->child && valid(o->child)==0)o->child=0;
    return o->child;
}
