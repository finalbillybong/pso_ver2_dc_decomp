#include "src/include/hierarchy_array.h"
#define destroy_array_at ((void (*)(void *))0x8c18de08)
#define destroy_base_at ((void *(*)(void *,short))0x8c03311c)
#define free_at ((void (*)(void *,void *))0x8c122774)
#define heap (*(void **)0x8c4d97e0)
HierarchyArrayView *destroy_hierarchy_array(HierarchyArrayView *p,short dispose) {
 if(p) {
  p->dispatch=(void *)0x8c261548;
  destroy_array_at(p->items);
  destroy_base_at(p,0);
  if(dispose>0) free_at(heap,p);
 }
 return p;
}
