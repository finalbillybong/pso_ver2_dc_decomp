#include "src/include/transform_node.h"
#include "src/include/transform_state.h"
#define current (*(TransformState **)0x8c46f440)
#define finish_at ((void (*)(void))0x8c0c3974)
int decompose_transform_state(TransformNode *node,Vector3 *translation,int *angles,Vector3 *scale,float *quaternion){register int kind;
 if(!(node->flags&64)){
  if(!((int (*)(Vector3 *))current->first)(translation)){translation->x=node->position.x;translation->y=node->position.y;translation->z=node->position.z;}
  if(current->second){
   if(((int (*)(int *))current->second)(angles))kind=(node->flags&32)!=0;
   else{angles[0]=node->angles[0];angles[1]=node->angles[1];angles[2]=node->angles[2];kind=(node->flags&32)!=0;}
  }else{
   if(((int (*)(float *))current->alternate)(quaternion))kind=2;
   else{angles[0]=node->angles[0];angles[1]=node->angles[1];angles[2]=node->angles[2];kind=(node->flags&32)!=0;}
  }
  if(!((int (*)(Vector3 *))current->third)(scale)){scale->x=node->scale.x;scale->y=node->scale.y;scale->z=node->scale.z;}
  finish_at();
 }else{translation->x=node->position.x;translation->y=node->position.y;translation->z=node->position.z;scale->x=node->scale.x;scale->y=node->scale.y;scale->z=node->scale.z;angles[0]=node->angles[0];angles[1]=node->angles[1];angles[2]=node->angles[2];kind=(node->flags&32)!=0;}
 return kind;
}
