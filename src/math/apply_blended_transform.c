#include "src/include/vector3.h"
extern int decompose_at(void *,Vector3 *,int *,Vector3 *,float *);
typedef char check_angle_array[sizeof(int)*3==12?1:-1];
typedef char check_quaternion_array[sizeof(float)*4==16?1:-1];
#define translate_at ((void (*)(Vector3 *))0x8c382a40)
#define rotate_at ((void (*)(int *,int))0x8c37dc90)
#define quaternion_at ((void (*)(float *))0x8c38b20c)
#define scale_at ((void (*)(Vector3 *))0x8c37e390)
void apply_blended_transform(void *input){
 Vector3 translation,scale;int angles[3];float quaternion[4];
 int kind=decompose_at(input,&translation,angles,&scale,quaternion);
 translate_at(&translation);
 switch(kind){case 0:rotate_at(angles,0);break;case 1:rotate_at(angles,1);break;default:quaternion_at(quaternion);break;}
 scale_at(&scale);
}
