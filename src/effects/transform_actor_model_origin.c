#include "src/include/vector3.h"
extern Vector3 actor_model_origin;
extern void push_actor_matrix(void *);
void transform_actor_model_origin(void *unused,int index,Vector3 *output){Vector3 point;point=actor_model_origin;push_actor_matrix(*(char **)0x8c41cb64+((unsigned int)index<<6));((void (*)(int,Vector3 *,Vector3 *))0x8c3be280)(0,&point,output);((void (*)(void))0x8c38ad10)();}
