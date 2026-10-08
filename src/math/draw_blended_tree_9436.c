#include "src/include/transform_node.h"
extern void draw_at(TransformNode *,void *,void (*)(void *),float);
void draw_blended_tree_9436(TransformNode *node,void *input,float amount) {
 draw_at(node,input,(void (*)(void *))0x8c3a9436,amount);
}
