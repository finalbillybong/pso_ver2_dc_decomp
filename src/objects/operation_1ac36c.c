/* Provisional address-based name; preserve observed calls, guards and field accesses. */
#include "src/include/matrix_child.h"
#define base_at ((void (*)(BaseChild *,int))0x8c03311c)
#define free_at ((void (*)(void *,MatrixChild *))0x8c122774)
static inline void destroy_base(MatrixChild *o){
    if(o){
        o->base.dispatch=(void *)0x8c2748d4;
        if(o->base.linked)o->base.linked->flags|=1;
        base_at(&o->base,0);
    }
}
MatrixChild *operation_1ac36c(MatrixChild *o,short release){
    if(o){
        o->base.dispatch=(void *)0x8c2748b4;
        destroy_base(o);
        if(release>0)free_at(*(void **)0x8c4d97e0,o);
    }
    return o;
}
