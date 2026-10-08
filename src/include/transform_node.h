#ifndef PSO_TRANSFORM_NODE_H
#define PSO_TRANSFORM_NODE_H
#include "src/include/vector3.h"
/* Provisional transform/tree node prefix and accessed draw-dispatch entry. */
typedef struct TransformNode TransformNode;
struct TransformNode {unsigned int flags;void *resource;Vector3 position;int angles[3];Vector3 scale;TransformNode *child,*next;};
typedef struct TransformDrawDispatch {char unknown00[12];void (*draw)(void *);} TransformDrawDispatch;
typedef char check_TransformNode_flags[(unsigned long)&((TransformNode *)0)->flags == 0 ? 1 : -1];
typedef char check_TransformNode_resource[(unsigned long)&((TransformNode *)0)->resource == 4 ? 1 : -1];
typedef char check_TransformNode_position[(unsigned long)&((TransformNode *)0)->position == 8 ? 1 : -1];
typedef char check_TransformNode_angles[(unsigned long)&((TransformNode *)0)->angles == 20 ? 1 : -1];
typedef char check_TransformNode_scale[(unsigned long)&((TransformNode *)0)->scale == 32 ? 1 : -1];
typedef char check_TransformNode_child[(unsigned long)&((TransformNode *)0)->child == 44 ? 1 : -1];
typedef char check_TransformNode_next[(unsigned long)&((TransformNode *)0)->next == 48 ? 1 : -1];
typedef char check_TransformNode_size[sizeof(TransformNode)==52?1:-1];
typedef char check_TransformDrawDispatch_draw[(unsigned long)&((TransformDrawDispatch *)0)->draw==12?1:-1];
typedef char check_TransformDrawDispatch_size[sizeof(TransformDrawDispatch)==16?1:-1];
#endif
