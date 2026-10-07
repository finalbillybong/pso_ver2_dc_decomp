#include "src/include/hierarchy.h"
void reparent_hierarchy_node(HierarchyNode *node,HierarchyNode *destination) {
 HierarchyNode *parent=node->parent;
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
 node->parent=destination;
 if(!destination) {node->link_08=node;node->link_0c=0;}
 else {
  HierarchyNode *head=destination->child;
  if(head) {
   node->link_08=head->link_08;node->link_0c=0;
   head->link_08->link_0c=node;head->link_08=node;
  } else {node->link_08=node;destination->child=node;node->link_0c=0;}
 }
}
