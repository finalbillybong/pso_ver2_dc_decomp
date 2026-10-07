#include "src/include/hierarchy.h"
#define heap_0 (*(void **)0x8c4d97e0)
#define heap_1 (*(void **)0x8c4d97e4)
#define release_heap_at ((void (*)(void *,short))0x8c1226d0)
#define destroy_at ((void *(*)(HierarchyNode *,short))0x8c03311c)
#define free_at ((void (*)(void *,void *))0x8c122774)
HierarchyNode *destroy_hierarchy_root(HierarchyNode *node,short release) {
 if(node) {
  HierarchyNode *child;
  node->dispatch=(NodeDispatch *)0x8c261564;
  while((child=node->child)!=0) {
   if(child) child->dispatch->release(child,1);
  }
  release_heap_at(heap_1,1);
  release_heap_at(heap_0,1);
  destroy_at(node,0);
  if(release>0) free_at(heap_0,node);
 }
 return node;
}
