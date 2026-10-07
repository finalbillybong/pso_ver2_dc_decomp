#ifndef PSO_HIERARCHY_VIRTUAL_H
#define PSO_HIERARCHY_VIRTUAL_H
/* Provisional C++ view. The fixed compiler places its dispatch pointer at24.
 * The asserted view extent does not claim the complete runtime object size. */
class VirtualHierarchyNode;
class VirtualNodeData { public:
 unsigned char unknown_00[4]; unsigned short flags; unsigned char unknown_06[2];
 VirtualHierarchyNode *link_08,*link_0c,*parent,*child;
};
class VirtualHierarchyNode:public VirtualNodeData { public:
 virtual void *release(short);
 virtual void operation_0c();
 virtual void operation_10();
 virtual void operation_14();
};
typedef char check_node_flags[((unsigned long)&((VirtualHierarchyNode *)0)->flags)==4?1:-1];
typedef char check_node_parent[((unsigned long)&((VirtualHierarchyNode *)0)->parent)==16?1:-1];
typedef char check_node_child[((unsigned long)&((VirtualHierarchyNode *)0)->child)==20?1:-1];
typedef char check_virtual_data_extent[sizeof(VirtualNodeData)==24?1:-1];
typedef char check_virtual_view_extent[sizeof(VirtualHierarchyNode)==28?1:-1];
typedef char check_virtual_next[((unsigned long)&((VirtualHierarchyNode *)0)->link_0c)==12?1:-1];
#endif
