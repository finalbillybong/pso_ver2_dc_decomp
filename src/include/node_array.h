#ifndef PSO_NODE_ARRAY_H
#define PSO_NODE_ARRAY_H
/* Provisional array and accessed resource prefix; elements remain unresolved. */
typedef struct NodeArray {int index_count;int pair_count;void *pairs;void *indices;} NodeArray;
typedef struct NodeArrayResource {int unknown00;void *data;} NodeArrayResource;
typedef char check_NodeArray_index_count[(unsigned long)&((NodeArray *)0)->index_count==0?1:-1];
typedef char check_NodeArray_pair_count[(unsigned long)&((NodeArray *)0)->pair_count==4?1:-1];
typedef char check_NodeArray_pairs[(unsigned long)&((NodeArray *)0)->pairs==8?1:-1];
typedef char check_NodeArray_indices[(unsigned long)&((NodeArray *)0)->indices==12?1:-1];
typedef char check_NodeArray_size[sizeof(NodeArray)==16?1:-1];
typedef char check_NodeArrayResource_data[(unsigned long)&((NodeArrayResource *)0)->data==4?1:-1];
typedef char check_NodeArrayResource_size[sizeof(NodeArrayResource)==8?1:-1];
#endif
