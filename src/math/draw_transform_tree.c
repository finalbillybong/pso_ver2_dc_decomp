#include "src/include/transform_node.h"
#define draw_dispatch (*(TransformDrawDispatch **)0x8c305fd0)
#define node_callback (*(void (**)(TransformNode *))0x8c46f520)
#define prepare_at ((void (*)(void *,float))0x8c0c44c8)
#define push_at ((void (*)(void))0x8c38ae68)
#define apply_at ((void (*)(TransformNode *))0x8c0c4590)
#define pop_at ((void (*)(void))0x8c38ad10)
#define visit_at ((void (*)(TransformNode *))0x8c0c4790)
void draw_transform_tree(TransformNode *node,void *input,void (*draw)(void *),float amount){prepare_at(input,amount);draw_dispatch->draw=draw;visit_at(node);}
