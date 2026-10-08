#include "src/include/actor_model_helpers.h"
extern void push_actor_matrix(void *);
void apply_actor_matrix_frame(ActorMatrixView *actor){push_actor_matrix((void *)0x8c400500);((void (*)(Vector3 *))0x8c382a40)(&actor->position);((void (*)(int,int))0x8c37df90)(0,actor->angle);((void (*)(ActorMatrixView *,float))0x8c01cfc0)(actor,actor->frame);((void (*)(void))0x8c38ad10)();}
