/* Provisional reconstruction; preserve original low-ID and field-transition behavior. */
#include "src/include/low_id_virtual.h"
static inline LowIdObject *lookup_low(int id){
    if(id==0xffff)return 0;
    if(id>=12)return 0;
    return *(LowIdObject **)(0x8c41ce2c+(id<<2));
}
#define insert_at ((unsigned short (*)(LowIdObject *))0x8c053e1c)
extern "C" int replace_low_id_object(LowIdObject *object){
    LowIdObject *old=lookup_low(object->id);
    if(old)delete old;
    *(LowIdObject **)(0x8c41ce2c+(object->id<<2))=object;
    return insert_at(object)==0xffff;
}
