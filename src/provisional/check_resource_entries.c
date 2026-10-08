/* Provisional SDK entry prefix and observed signed status behavior. */
typedef struct ResourceEntryView { int unknown0; int unknown4; void *handle; } ResourceEntryView;
typedef struct ResourceGroupView { ResourceEntryView *entries; unsigned int count; } ResourceGroupView;
typedef char check_entry_handle[(unsigned long)&((ResourceEntryView *)0)->handle==8?1:-1];
typedef char check_entry_size[sizeof(ResourceEntryView)==12?1:-1];
typedef char check_group_count[(unsigned long)&((ResourceGroupView *)0)->count==4?1:-1];
typedef char check_group_size[sizeof(ResourceGroupView)==8?1:-1];
int check_resource_entries(ResourceGroupView *group) {
 unsigned int i;
 int status=1;
 for(i=0;i<group->count;i++) {
  if(((int (*)(void *))0x8c37d6bc)(group->entries[i].handle)<0) {
   status=-1;
   *(unsigned int *)0x8c57572c=i;
  }
 }
 return status;
}
