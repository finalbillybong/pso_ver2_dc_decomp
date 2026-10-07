#ifndef PSO_HIERARCHY_H
#define PSO_HIERARCHY_H
/* Provisional node/link and dispatch views; no complete object extent asserted. */
typedef struct HierarchyNode HierarchyNode;
typedef struct NodeDispatch { unsigned char unknown_00[8]; void *(*release)(HierarchyNode *,short); } NodeDispatch;
struct HierarchyNode {
 unsigned char unknown_00[4]; unsigned short flags; unsigned char unknown_06[2];
 HierarchyNode *link_08,*link_0c,*parent,*child;
 NodeDispatch *dispatch;
};
typedef char check_hierarchy_flags[((unsigned long)&((HierarchyNode *)0)->flags)==4?1:-1];
typedef char check_hierarchy_link_08[((unsigned long)&((HierarchyNode *)0)->link_08)==8?1:-1];
typedef char check_hierarchy_link_0c[((unsigned long)&((HierarchyNode *)0)->link_0c)==12?1:-1];
typedef char check_hierarchy_parent[((unsigned long)&((HierarchyNode *)0)->parent)==16?1:-1];
typedef char check_hierarchy_child[((unsigned long)&((HierarchyNode *)0)->child)==20?1:-1];
typedef char check_hierarchy_dispatch[((unsigned long)&((HierarchyNode *)0)->dispatch)==24?1:-1];
typedef char check_node_dispatch_release[((unsigned long)&((NodeDispatch *)0)->release)==8?1:-1];
#endif
