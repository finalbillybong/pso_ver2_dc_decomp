#include "src/include/hierarchy_array.h"
#define submit_at ((void (*)(int,void *,int))0x8c38cc32)
void submit_hierarchy_array(HierarchyArrayView *p) {
 int i; register int mask=0x20000;
 for(i=0;i<10;i++) submit_at(i|mask,*(void **)((unsigned char *)p->items+(i<<2)),8);
}
