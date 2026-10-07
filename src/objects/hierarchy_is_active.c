#include "src/include/hierarchy.h"
int hierarchy_is_active(HierarchyNode *node) {
 while(node) {
  if(node->flags&1) return 0;
  node=node->parent;
 }
 return 1;
}
