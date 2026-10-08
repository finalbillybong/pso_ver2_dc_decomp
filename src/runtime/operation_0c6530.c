/* Provisional address-based name; preserve the observed call and state sequence. */
#include "src/include/notice_views.h"
#define lookup_at ((NoticeObject *(*)(unsigned short))0x8c012a14)
void operation_0c6530(Notice4 *notice){
    unsigned short id=notice->id;
    int offset=id<<2;
    if(!*(int *)(0x8c46f740+offset)){
        NoticeObject *object;
        *(int *)(0x8c46f740+offset)=1;
        object=lookup_at(id);
        if(object)object->flags|=0x800;
    }
}
