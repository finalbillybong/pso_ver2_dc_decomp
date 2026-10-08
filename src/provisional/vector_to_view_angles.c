#include "src/include/vector3.h"
#define atan_at ((float (*)(float,float))0x8c130334)
#define sqrt_at ((float (*)(float))0x8c37f6c0)
void vector_to_view_angles(Vector3 *vector,int *vertical,int *horizontal){*horizontal=(int)(atan_at(-vector->x,-vector->z)*65536.0f/6.283184051513672f);*vertical=(int)(atan_at(vector->y,sqrt_at(vector->x*vector->x+vector->z*vector->z))*65536.0f/6.283184051513672f);}
