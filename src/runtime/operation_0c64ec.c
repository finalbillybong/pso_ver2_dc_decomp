/* Provisional address-based name; preserve the observed call and state sequence. */
/* Provisional address-based name;
only the checked dispatch prefix is accessed. */
#include "src/include/notice_views.h"
#define destroy_at ((void (*)(NoticeBase *,int))0x8c03311c)
#define release_at ((void (*)(void *,void *))0x8c122774)
NoticeBase *operation_0c64ec(NoticeBase *object,short release){
    if(object){
        object->dispatch=(void *)0x8c266800;
        destroy_at(object,0);
        if(release>0)release_at(*(void **)0x8c4d97e0,object);
    }
    return object;
}
