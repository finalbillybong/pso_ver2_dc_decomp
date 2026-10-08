#include "src/include/transform_node.h"
#define draw_dispatch (*(TransformDrawDispatch **)0x8c305fd0)
#define node_callback (*(void (**)(TransformNode *))0x8c46f520)
#define prepare_at ((void (*)(void *,float))0x8c0c44c8)
#define push_at ((void (*)(void))0x8c38ae68)
#define apply_at ((void (*)(TransformNode *))0x8c0c4590)
#define pop_at ((void (*)(void))0x8c38ad10)
void visit_transform_tree(TransformNode *node){do{push_at();apply_at(node);if(node_callback)node_callback(node);if(node->resource && !(node->flags&8))draw_dispatch->draw(node->resource);if(node->child)visit_transform_tree(node->child);pop_at();node=node->next;}while(node);}
