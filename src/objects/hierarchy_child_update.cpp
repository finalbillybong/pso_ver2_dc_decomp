#include "src/include/hierarchy_virtual.h"
extern "C" void release_hierarchy_children(VirtualHierarchyNode *node) {
 VirtualHierarchyNode *child;
 while((child=node->child)!=0) { if(child) child->release(1); }
}
#define recurse_at ((void (*)(VirtualHierarchyNode *))0x8c0331e4)
extern "C" void update_hierarchy(VirtualHierarchyNode *node) {
 VirtualHierarchyNode *next=node->child,*current;
 register int clear_one=~1;
 register int clear_two=~2;
 while(node->child && next) {
  current=next;
  next=next->link_0c;
  if(current->flags&15) {
   if(current->flags&1) {
    current->flags&=clear_one;
    if(!(current->flags&32)) {
     if(current) current->release(1);
     continue;
    }
   }
   if(current->flags&2) {
    VirtualHierarchyNode *child;
    while((child=current->child)!=0) { if(child) child->release(1); }
    current->operation_0c();
    current->flags&=clear_two;
   }
   if(current->flags&4) continue;
  } else {
   current->operation_0c();
   recurse_at(current);
  }
 }
}
