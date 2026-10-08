#ifndef PSO_RESOURCE_OUTPUTS_H
#define PSO_RESOURCE_OUTPUTS_H
/* Provisional observed prefixes. Indexed records use byte offsets into retained
 * resource storage; no table length or extra bounds checks are inferred. */
typedef struct ResourceOutputTable { char unknown00[40]; void *mesh, *matrix; } ResourceOutputTable;
typedef struct ResourceOutputExtra { int unknown00; void *value; } ResourceOutputExtra;
typedef struct ResourceOutputOwner { char unknown00[1068]; ResourceOutputTable *table; ResourceOutputExtra *extra; } ResourceOutputOwner;
typedef struct ResourceQueryNode { char unknown00[12]; struct ResourceQueryNode *next; char unknown10[16]; unsigned int id; } ResourceQueryNode;
typedef struct ResourceQueryList { char unknown00[20]; ResourceQueryNode *first; } ResourceQueryList;
typedef char check_ResourceOutputTable_mesh[(unsigned long)&((ResourceOutputTable *)0)->mesh == 40 ? 1 : -1];
typedef char check_ResourceOutputTable_matrix[(unsigned long)&((ResourceOutputTable *)0)->matrix == 44 ? 1 : -1];
typedef char check_ResourceOutputTable_prefix[sizeof(ResourceOutputTable) == 48 ? 1 : -1];
typedef char check_ResourceOutputExtra_value[(unsigned long)&((ResourceOutputExtra *)0)->value == 4 ? 1 : -1];
typedef char check_ResourceOutputExtra_prefix[sizeof(ResourceOutputExtra) == 8 ? 1 : -1];
typedef char check_ResourceOutputOwner_table[(unsigned long)&((ResourceOutputOwner *)0)->table == 1068 ? 1 : -1];
typedef char check_ResourceOutputOwner_extra[(unsigned long)&((ResourceOutputOwner *)0)->extra == 1072 ? 1 : -1];
typedef char check_ResourceOutputOwner_prefix[sizeof(ResourceOutputOwner) == 1076 ? 1 : -1];
typedef char check_ResourceQueryNode_next[(unsigned long)&((ResourceQueryNode *)0)->next == 12 ? 1 : -1];
typedef char check_ResourceQueryNode_id[(unsigned long)&((ResourceQueryNode *)0)->id == 32 ? 1 : -1];
typedef char check_ResourceQueryNode_prefix[sizeof(ResourceQueryNode) == 36 ? 1 : -1];
typedef char check_ResourceQueryList_first[(unsigned long)&((ResourceQueryList *)0)->first == 20 ? 1 : -1];
typedef char check_ResourceQueryList_prefix[sizeof(ResourceQueryList) == 24 ? 1 : -1];
#endif
