#include "src/include/track_keys.h"
extern void find_track_interval(void *,unsigned int,unsigned int,float,void *,void *,float *);
void interpolate_track_vector(void *keys,unsigned int count,float *output,float frame) {
 float fraction;
 FloatTrackKey *left,*right;
 find_track_interval(keys,16,count,frame,&left,&right,&fraction);
 output[0]=( (right->x-left->x))*fraction+left->x;
 output[1]=( (right->y-left->y))*fraction+left->y;
 output[2]=( (right->z-left->z))*fraction+left->z;
}
