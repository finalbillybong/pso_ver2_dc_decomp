/* Provisional address-based name; preserve the observed call and state sequence. */
#include "src/include/notice_views.h"
#define lookup_at ((NoticeObject *(*)(unsigned short))0x8c012a14)
#define notify_at ((void (*)(Notice4 *))0x8c036840)
void operation_0c656c(void){
    int i;
    register unsigned int mask=0x800;
    Notice4 notice;
    for(i=0;
    i<128;
    i++){
        NoticeObject *object=lookup_at(i);
        int offset;
        if(!object)break;
        offset=i<<2;
        if(!*(int *)(0x8c46f740+offset) && (object->flags&mask)){
            *(int *)(0x8c46f740+offset)=1;
            notice.kind=9;
            notice.length=1;
            notice.id=i;
            notify_at(&notice);
        }
    }
}
