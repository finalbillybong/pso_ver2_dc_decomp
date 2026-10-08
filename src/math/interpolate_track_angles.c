#include "src/include/track_keys.h"
extern void find_track_interval(void *,unsigned int,unsigned int,float,void *,void *,float *);
void interpolate_track_angles(void *keys,unsigned int count,int *output,float frame) {
 float fraction;
 AngleTrackKey *left,*right;
 find_track_interval(keys,16,count,frame,&left,&right,&fraction);
 {int base=left->x; short delta=(short)(right->x-base); output[0]=(int)(base+delta*fraction);}
 {int base=left->y; short delta=(short)(right->y-base); output[1]=(int)(base+delta*fraction);}
 {int base=left->z; short delta=(short)(right->z-base); output[2]=(int)(base+delta*fraction);}
}
