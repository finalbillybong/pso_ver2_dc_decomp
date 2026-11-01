#include "src/include/hierarchy_array.h"
#define operator_delete_8c18de08 ((void (*)(void *))0x8c18de08)
#define TObject_dtor_8c03311c ((void *(*)(void *,short))0x8c03311c)
#define free_at ((void (*)(void *,void *))0x8c122774)
#define heap (*(void **)0x8c4d97e0)
HierarchyArrayView *destroy_hierarchy_values(HierarchyArrayView *p,short dispose) {
 if(p) {
  p->dispatch=(void *)0x8c26152c;
  operator_delete_8c18de08(p->values);
  if(p) {
   p->dispatch=(void *)0x8c261548;
   operator_delete_8c18de08(p->items);
   TObject_dtor_8c03311c(p,0);
  }
  if(dispose>0) free_at(heap,p);
 }
 return p;
}
