/* Provisional reconstruction; preserve original ID-table and boundary behavior. */
#include "src/include/lookup_object.h"
#define low_at ((LookupObject *(*)(unsigned int))0x8c021ef8)
LookupObject *lookup_object_by_id(unsigned short id){
    int low,high;
    LookupObject *object;
    if(id==0xffff)return 0;
    if(id<12)return low_at(id);
    low=0;
    high=*(int *)0x8c467870-1;
    while(low<high){
        int middle=(low+high)/2;
        LookupObject *entry=*(LookupObject **)(0x8c467240+(middle<<2));
        {
            unsigned int entry_id=entry->id;
            if(id>entry_id)low=middle+1;
            else high=middle;
        }
    }
    object=*(LookupObject **)(0x8c467240+(low<<2));
    if(object && object->id==id)return object;
    return 0;
}
