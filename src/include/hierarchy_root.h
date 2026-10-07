#ifndef PSO_HIERARCHY_ROOT_H
#define PSO_HIERARCHY_ROOT_H
/* Provisional root/child view; names and dispatch data remain reference-backed. */
typedef struct RootNode {
 const char *name;
 unsigned short flags,field_06;
 struct RootNode *link_08,*link_0c,*parent,*child;
 void *dispatch;
 unsigned short field_1c,field_1e;
} RootNode;

typedef char check_root_name[((unsigned long)&((RootNode *)0)->name)==0?1:-1];
typedef char check_root_dispatch[((unsigned long)&((RootNode *)0)->dispatch)==24?1:-1];
typedef char check_root_field_1e[((unsigned long)&((RootNode *)0)->field_1e)==30?1:-1];
#endif
