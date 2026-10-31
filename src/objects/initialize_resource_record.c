#include "src/include/resource_record.h"
#define memset_8c12b880 ((void *(*)(void *,int,int))0x8c12b880)
void initialize_resource_record(ResourceRecordView *p) {
 memset_8c12b880(p,0,60);
 p->field_00=-1;
 p->field_02=*(int *)0x8c44be04;
 p->field_04=0xffff;
}
