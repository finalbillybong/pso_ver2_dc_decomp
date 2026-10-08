/* Compiler intrinsic: single-precision reciprocal square root. */
extern float __fsrra(float);
typedef char check_quaternion_components[sizeof(float)*4==16?1:-1];
void blend_quaternion(float *a,float *b,float *output,float amount) {
 float ax=a[0],ay=a[1],az=a[2],aw=a[3];
 float bx=b[0],by=b[1],bz=b[2],bw=b[3];
 float inverse=1.0f-amount;
 float factor;
 if(ax*bx+ay*by+az*bz+aw*bw>0.0f) {
  ax=ax*inverse+bx*amount;
  ay=ay*inverse+by*amount;
  az=az*inverse+bz*amount;
  aw=aw*inverse+bw*amount;
 } else {
  ax=ax*inverse-bx*amount;
  ay=ay*inverse-by*amount;
  az=az*inverse-bz*amount;
  aw=aw*inverse-bw*amount;
 }
 factor=__fsrra(ax*ax+ay*ay+az*az+aw*aw);
 output[0]=ax*factor;
 output[1]=ay*factor;
 output[2]=az*factor;
 output[3]=aw*factor;
}

#include "src/include/transform_node.h"
#define draw_dispatch (*(TransformDrawDispatch **)0x8c305fd0)
#define node_callback (*(void (**)(TransformNode *))0x8c46f520)
#define prepare_at ((void (*)(void *,float))0x8c0c40f8)
#define push_at ((void (*)(void))0x8c38ae68)
#define apply_at ((void (*)(TransformNode *))0x8c0c4590)
#define pop_at ((void (*)(void))0x8c38ad10)
#define visit_at ((void (*)(TransformNode *))0x8c0c4408)
void draw_blended_transform_tree(TransformNode *node,void *input,void (*draw)(void *),float amount){prepare_at(input,amount);draw_dispatch->draw=draw;visit_at(node);}
