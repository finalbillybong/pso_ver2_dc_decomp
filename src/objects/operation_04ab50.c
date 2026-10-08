/* Provisional address-based name; preserve observed guards, ordering and field widths. */
#include "src/include/notice_dispatch.h"
#define enabled ((int *)0x8c2e2ad8)
extern unsigned char query_at(void *);
static inline int is_mode_one(GuardObject *object){
    return object->mode==1;
}
#define dispatch_at ((void (*)(GuardObject *,void *,int))0x8c02be50)
void operation_04ab50(GuardObject *object,void *other,int value){
    if(*enabled && query_at((void *)0x8c41ce5c)==1 && is_mode_one(object)!=0 && value>0 && other)dispatch_at(object,other,value);
}
