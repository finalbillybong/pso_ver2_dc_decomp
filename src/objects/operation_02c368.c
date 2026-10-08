/* Provisional address-based name; preserve observed field accesses and forwarded inputs. */
#include "src/include/state_query_views.h"
#define query_at ((float (*)(ModeObject *,void *,float))0x8c04745c)
static inline int is_mode_two(ModeObject *object){
    return object->mode==2;
}
float operation_02c368(ModeObject *object,void *other,float value){
    if(is_mode_two(object)!=0)return 0.0f;
    return query_at(object,other,value);
}
