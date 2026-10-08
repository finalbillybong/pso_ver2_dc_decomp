#include "src/include/model_node.h"
extern int node_index, wanted_index;
extern ModelNode *selected_node;
void visit_model_selection(ModelNode *node){if(node_index==wanted_index)selected_node=node;++node_index;if(!selected_node){if(node->child)visit_model_selection(node->child);if(node->next)visit_model_selection(node->next);}}
