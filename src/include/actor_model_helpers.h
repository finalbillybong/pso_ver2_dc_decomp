#ifndef PSO_ACTOR_MODEL_HELPERS_H
#define PSO_ACTOR_MODEL_HELPERS_H
#include "src/include/vector3.h"
/* Provisional accessed prefixes; node and matrix names describe observed use. */
typedef struct ActorModelNode {unsigned int flags;void *model;char unknown8[36];struct ActorModelNode *child,*sibling;} ActorModelNode;
typedef struct ActorMatrixView {char unknown0[60];Vector3 position;char unknown72[28];int angle;char unknown104[144];float frame;} ActorMatrixView;
typedef char check_ActorModelNode_flags[(unsigned long)&((ActorModelNode *)0)->flags==0?1:-1];
typedef char check_ActorModelNode_model[(unsigned long)&((ActorModelNode *)0)->model==4?1:-1];
typedef char check_ActorModelNode_child[(unsigned long)&((ActorModelNode *)0)->child==44?1:-1];
typedef char check_ActorModelNode_sibling[(unsigned long)&((ActorModelNode *)0)->sibling==48?1:-1];
typedef char check_ActorModelNode_size[sizeof(ActorModelNode)==52?1:-1];
typedef char check_ActorMatrixView_position[(unsigned long)&((ActorMatrixView *)0)->position==60?1:-1];
typedef char check_ActorMatrixView_angle[(unsigned long)&((ActorMatrixView *)0)->angle==100?1:-1];
typedef char check_ActorMatrixView_frame[(unsigned long)&((ActorMatrixView *)0)->frame==248?1:-1];
typedef char check_ActorMatrixView_size[sizeof(ActorMatrixView)==252?1:-1];
#endif
