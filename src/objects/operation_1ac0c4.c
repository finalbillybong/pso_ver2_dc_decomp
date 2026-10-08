/* Provisional address-based name; preserve guards, slot reloads and call order. */
#include "src/include/derived_effect_child.h"
#define position_at ((void (*)(void *,Vector3 *))0x8c0a7608)
#define active_at ((int (*)(void *))0x8c03347c)
void operation_1ac0c4(DerivedEffectChild *o){
    int i;
    for (i = 0; i != 2; i++){
        int offset=i<<2;
        if((*(void **)((char *)o->effects+offset))){
            position_at((*(void **)((char *)o->effects+offset)),&o->position);
            if(!active_at((*(void **)((char *)o->effects+offset))))(*(void **)((char *)o->effects+offset))=0;
        }
    }
}
