/* Provisional names; preserve observed argument widths and operation ordering. */
#include "src/include/dispatch_state.h"
void operation_23959c(State *state,Flags *object,int amount){
    float value=(float)amount;
    float factor;
    state->total+=value;
    factor=state->normal;
    if(object->flags&0x10000000)factor=state->alternate;
    state->value=value*factor+state->value;
}
