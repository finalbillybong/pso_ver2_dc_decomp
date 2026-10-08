#include "src/include/model_node.h"
extern int node_index, wanted_index;
extern ModelNode *selected_node;
extern void visit_model_selection(ModelNode *);
ModelNode *select_model_node(ModelNode *node,int index){if(!node)return 0;wanted_index=index;selected_node=0;node_index=0;visit_model_selection(node);return selected_node;}
