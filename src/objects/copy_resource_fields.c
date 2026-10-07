#include "src/include/resource_list.h"
#define buffer (*(ResourceEntryView **)0x8c44f8e0)
#define clear_at ((void *(*)(void *,int,int))0x8c12b880)
#define prepare_at ((void (*)(ResourceListView *,void *,void *,int))0x8c38668e)
#define apply_at ((int (*)(void *,ResourceListView *))0x8c1187e4)
int copy_resource_fields(void *resource,ResourceListView *destination) {
 ResourceListView temporary;
 if(!resource || !destination) return 0;
 clear_at(buffer,0,12);
 prepare_at(&temporary,buffer,(void *)0x8c44bf60,0x200);
 if(apply_at(resource,&temporary)==-1) return 0;
 {
 ResourceEntryView *entries;
 unsigned char *field8;
 int stride;
 unsigned char *field4;
 int i;
 int count;
 entries=destination->entries;
 field8=(unsigned char *)entries+8;
 field4=(unsigned char *)entries+4;
 count=destination->count;
 for(i=0,stride=12;i<count;i++) {
  int offset=i*stride;
  { unsigned char *base=(unsigned char *)buffer+8; *(int *)(field8+offset)=*(int *)(base+offset); }
  { unsigned char *base=(unsigned char *)buffer+4; *(int *)(field4+offset)=*(int *)(base+offset); }
 }
 }
 return 1;
}
