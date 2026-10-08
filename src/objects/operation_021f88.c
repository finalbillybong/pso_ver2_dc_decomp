/* Provisional reconstruction; preserve original low-ID and field-transition behavior. */
#include "src/include/transition_state.h"
void operation_021f88(TransitionState *object,int mode,short optional){
    object->previous=object->mode;
    object->mode=mode;
    if(optional)object->optional=optional;
    object->mask=1<<mode;
    object->flags|=0x10;
}
