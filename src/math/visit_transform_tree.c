#include "src/include/transform_node.h"
#define draw_dispatch (*(TransformDrawDispatch **)0x8c305fd0)
#define node_callback (*(void (**)(TransformNode *))0x8c46f520)
#define prepare_at ((void (*)(void *,float))0x8c0c44c8)
#define njPushMatrixEx_8c38ae68 ((void (*)(void))0x8c38ae68)
#define apply_at ((void (*)(TransformNode *))0x8c0c4590)
#define njPopMatrixEx_8c38ad10 ((void (*)(void))0x8c38ad10)
void visit_transform_tree(TransformNode *node){do{njPushMatrixEx_8c38ae68();apply_at(node);if(node_callback)node_callback(node);if(node->resource && !(node->flags&8))draw_dispatch->draw(node->resource);if(node->child)visit_transform_tree(node->child);njPopMatrixEx_8c38ad10();node=node->next;}while(node);}
