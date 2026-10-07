#include "src/include/hierarchy_array.h"
extern const char format_base[];
extern void output_at(const char *,...);
void report_hierarchy_values(HierarchyArrayView *p) {
 { int i;
 for(i=p->first;i<p->count && i<p->capacity;i++) {
  int at=i+p->first;
  void *entry=*(void **)((unsigned char *)p->items+(at<<2));
  if(entry && (int)(*(void **)entry==*(void **)0x8c2e89c8)==0)
   output_at(format_base+113,*(int *)((unsigned char *)p->values+(at<<2)),*(void **)entry);
 }
 }
 { int i; p->total=0;
 for(i=0;i<p->count;i++) p->total+=*(int *)((unsigned char *)p->values+(i<<2));
 }
 output_at(format_base+122,p->total);
 p->count=0;
}
