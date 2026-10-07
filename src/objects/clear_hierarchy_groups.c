#include "src/include/hierarchy.h"
void clear_hierarchy_groups(void) { HierarchyNode *parent,*child;
 parent=*(HierarchyNode **)0x8c44be84;
 while((child=parent->child)!=0) { if(child) child->dispatch->release(child,1); }
 parent=*(HierarchyNode **)0x8c44be88;
 while((child=parent->child)!=0) { if(child) child->dispatch->release(child,1); }
 parent=*(HierarchyNode **)0x8c44be8c;
 while((child=parent->child)!=0) { if(child) child->dispatch->release(child,1); }
 parent=*(HierarchyNode **)0x8c44be90;
 while((child=parent->child)!=0) { if(child) child->dispatch->release(child,1); }
 parent=*(HierarchyNode **)0x8c44be94;
 while((child=parent->child)!=0) { if(child) child->dispatch->release(child,1); }
 parent=*(HierarchyNode **)0x8c44be98;
 while((child=parent->child)!=0) { if(child) child->dispatch->release(child,1); }
 parent=*(HierarchyNode **)0x8c44be9c;
 while((child=parent->child)!=0) { if(child) child->dispatch->release(child,1); }
 parent=*(HierarchyNode **)0x8c44bea0;
 while((child=parent->child)!=0) { if(child) child->dispatch->release(child,1); }
 parent=*(HierarchyNode **)0x8c44bea4;
 while((child=parent->child)!=0) { if(child) child->dispatch->release(child,1); }
}
