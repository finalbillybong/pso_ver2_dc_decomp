/* Provisional reconstruction; preserve original ID-table and boundary behavior. */
#include "src/include/lookup_object.h"
#define copy_at ((void *(*)(void *,const void *,unsigned int))0x8c12b77c)
#define entry_at(index) (*(LookupObject **)(0x8c467240+((index)<<2)))
unsigned short insert_object_by_id(LookupObject *object){
    unsigned short id=object->id;
    int low,high,count;
    if(id==0xffff)return id;
    count=*(int *)0x8c467870;
    {
        int sentinel=-1;
        high=count+sentinel;
        if(high>sentinel && entry_at(high)->id>id){
            low=0;
            while(low<high){
                int middle=(low+high)/2;
                unsigned int entry_id=entry_at(middle)->id;
                if(id>entry_id)low=middle+1;
                else high=middle;
            }
            if(id==entry_at(low)->id)return id;
            copy_at((void *)(0x8c467240+((low+1)<<2)),(void *)(0x8c467240+(low<<2)),(count-low)<<2);
        }
        else low=count;
    }
    entry_at(low)=object;
    (*(int *)0x8c467870)++;
    if(object->id<0x1000)(*(int *)0x8c467874)++;
    else if(object->id<0x4000)(*(int *)0x8c467878)++;
    else (*(int *)0x8c46787c)++;
    return id;
}
