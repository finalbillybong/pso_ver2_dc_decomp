#include "src/include/vector3.h"
typedef char check_angle_array[sizeof(int)*3==12?1:-1];
typedef char check_quaternion_array[sizeof(float)*4==16?1:-1];
#define select_at ((void (*)(unsigned int))0x8c0c3a40)
extern int decompose_at(void *,Vector3 *,int *,Vector3 *,float *);
#define euler0_at ((void (*)(int *,float *))0x8c0c3704)
#define euler1_at ((void (*)(int *,float *))0x8c0c3814)
#define blend_at ((void (*)(float *,float *,float *,float))0x8c0c4324)
int decompose_blended_transform(void *node,Vector3 *translation,int *unused,Vector3 *scale,float *quaternion) {
 Vector3 t0,s0;int a0[3];float q0[4];
 Vector3 t1,s1;int a1[3];float q1[4];
 int kind1,kind0;
 float inverse,amount;
 amount=*(float *)0x8c46f4e0;
 inverse=1.0f-amount;
 select_at(1);
 kind1=decompose_at(node,&t1,a1,&s1,q1);
 select_at(0);
 kind0=decompose_at(node,&t0,a0,&s0,q0);
 if(kind0!=2) {if(kind0==0)euler0_at(a0,q0);else euler1_at(a0,q0);}
 if(kind1!=2) {if(kind1==0)euler0_at(a1,q1);else euler1_at(a1,q1);}
 translation->x=t0.x*inverse+t1.x*amount;
 translation->y=t0.y*inverse+t1.y*amount;
 translation->z=t0.z*inverse+t1.z*amount;
 scale->x=s0.x*inverse+s1.x*amount;
 scale->y=s0.y*inverse+s1.y*amount;
 scale->z=s0.z*inverse+s1.z*amount;
 blend_at(q0,q1,quaternion,amount);
 return 2;
}
