#include "src/include/hierarchy.h"
HierarchyNode *initialize_hierarchy_node(HierarchyNode *node,HierarchyNode *parent) {
 node->dispatch=(NodeDispatch *)0x8c261580;
 node->flags=0;
 node->parent=parent;
 node->child=0;
 if(!parent) { node->link_08=node; node->link_0c=0; }
 else {
  HierarchyNode *head=parent->child;
  if(head) {
   node->link_08=head->link_08;
   node->link_0c=0;
   head->link_08->link_0c=node;
   head->link_08=node;
  } else { node->link_08=node; parent->child=node; node->link_0c=0; }
 }
 return node;
}
