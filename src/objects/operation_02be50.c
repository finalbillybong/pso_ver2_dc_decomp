/* Provisional names; preserve observed argument widths and operation ordering. */
#include "src/include/dispatch_state.h"
extern unsigned char query_at(void *);
extern void update_at(void *,Object *,int);
#define send_at ((void (*)(Notice *,int))0x8c036914)
static inline int is_active(Object *o){
    return o->id==*(int *)0x8c418248;
}
static inline int is_mode_two(Object *o){
    return o->mode==2;
}
static inline int is_enabled(void){
    int result=0;
    if(*(int *)0x8c2e2ad8 && (signed char)query_at((void *)0x8c41ce5c)==1)result=1;
    return result;
}
void operation_02be50(Object *object,Object *other,int value){
    if(is_enabled()!=0){
        if(!(other->flags&0x10000000)){
            if(is_active(object)!=0)update_at(&object->state,other,value);
        }
        else if(is_active(object)!=0){
            if(object && is_mode_two(object)!=0)return;
            update_at(&object->state,other,value);
            {
                Notice n;
                unsigned short source_id;
                n.kind=0x1a;
                n.size=1;
                n.target=65535;
                n.value=0;
                n.kind=0x8f;
                n.size=2;
                source_id=other->id;
                n.source=source_id;
                n.target=object->id;
                n.value=value;
                send_at(&n,source_id);
            }
        }
    }
}
