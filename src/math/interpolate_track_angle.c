#include "src/include/track_keys.h"
extern void find_track_interval(void *,unsigned int,unsigned int,float,void *,void *,float *);
void interpolate_track_angle(void *keys,unsigned int count,int *output,float frame) {
 float fraction;
 AngleScalarKey *left,*right;
 find_track_interval(keys,8,count,frame,&left,&right,&fraction);
 {int base=left->x; short delta=(short)(right->x-base); output[0]=(int)(base+delta*fraction);}
}
