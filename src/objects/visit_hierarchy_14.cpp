#include "src/include/hierarchy_virtual.h"
#define recurse_at ((void (*)(VirtualHierarchyNode *))0x8c0332d8)
extern "C" void visit_hierarchy_14(VirtualHierarchyNode *node) {
 VirtualHierarchyNode *first=node->child;
 while(first) {
  VirtualHierarchyNode *second;
  first->operation_14();
  second=first->child;
  while(second) {
   VirtualHierarchyNode *third;
   second->operation_14();
   third=second->child;
   while(third) {
    third->operation_14();
    recurse_at(third);
    third=third->link_0c;
   }
   second=second->link_0c;
  }
  first=first->link_0c;
 }
}
