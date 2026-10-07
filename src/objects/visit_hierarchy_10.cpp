#include "src/include/hierarchy_virtual.h"
#define recurse_at ((void (*)(VirtualHierarchyNode *))0x8c0332a4)
extern "C" void visit_hierarchy_10(VirtualHierarchyNode *node) {
 VirtualHierarchyNode *child=node->child;
 while(child) {
  if(!(child->flags&0x10)) {
   child->operation_10();
   recurse_at(child);
  }
  child=child->link_0c;
 }
}
