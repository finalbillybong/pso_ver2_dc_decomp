#include "src/include/node_array.h"
#include "src/include/transform_node.h"
#define visit_at ((void (*)(NodeArray *,void *,void *))0x8c0cd820)
void fill_node_array_tree(NodeArray *array,TransformNode *node,void *context){do{if(node->resource && ((NodeArrayResource *)node->resource)->data)visit_at(array,((NodeArrayResource *)node->resource)->data,context);if(node->child)fill_node_array_tree(array,node->child,context);node=node->next;}while(node);}
