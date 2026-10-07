#include "src/include/hierarchy.h"
#define free_at ((void (*)(void *,void *))0x8c122774)
HierarchyNode *destroy_hierarchy_node(HierarchyNode *node,short release) {
 if(node) {
  node->dispatch=(NodeDispatch *)0x8c261580;
  if(!(node->flags&0x20)) {
   HierarchyNode *child,*parent;
   node->flags|=0x20;
   while((child=node->child)!=0) {
    if(child) child->dispatch->release(child,1);
   }
   parent=node->parent;
   if(parent) {
    if(node->link_08==node) parent->child=0;
    else if(parent->child==node) {
     parent->child=node->link_0c;
     node->link_08->link_0c=0;
     if(node->link_0c) node->link_0c->link_08=node->link_08;
    } else {
     node->link_08->link_0c=node->link_0c;
     if(node->link_0c) node->link_0c->link_08=node->link_08;
     else node->parent->child->link_08=node->link_08;
    }
   }
  }
  if(release>0) free_at(*(void **)0x8c4d97e0,node);
 }
 return node;
}
