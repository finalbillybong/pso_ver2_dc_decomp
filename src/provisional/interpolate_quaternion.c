typedef struct QuaternionTrackKey {unsigned int frame;float x,y,z,w;} QuaternionTrackKey;
typedef char check_QuaternionTrackKey_frame[(unsigned long)&((QuaternionTrackKey *)0)->frame == 0 ? 1 : -1];
typedef char check_QuaternionTrackKey_x[(unsigned long)&((QuaternionTrackKey *)0)->x == 4 ? 1 : -1];
typedef char check_QuaternionTrackKey_y[(unsigned long)&((QuaternionTrackKey *)0)->y == 8 ? 1 : -1];
typedef char check_QuaternionTrackKey_z[(unsigned long)&((QuaternionTrackKey *)0)->z == 12 ? 1 : -1];
typedef char check_QuaternionTrackKey_w[(unsigned long)&((QuaternionTrackKey *)0)->w == 16 ? 1 : -1];
typedef char check_QuaternionTrackKey_size[sizeof(QuaternionTrackKey)==20?1:-1];
extern void find_track_interval(void *,unsigned int,unsigned int,float,void *,void *,float *);
#define sqrt_at ((float (*)(float))0x8c12afc0)
void interpolate_quaternion(void *keys,unsigned int count,float *output,float frame) {
 float fraction;
 QuaternionTrackKey *left,*right;
 float inverse,dot,factor;
 find_track_interval(keys,20,count,frame,&left,&right,&fraction);
 inverse=1.0f-fraction;
 dot=right->x*left->x+right->y*left->y+right->z*left->z+right->w*left->w;
 if(dot<0.0f) fraction*=-1.0f;
 output[0]=left->x*inverse+right->x*fraction;
 output[1]=left->y*inverse+right->y*fraction;
 output[2]=left->z*inverse+right->z*fraction;
 output[3]=left->w*inverse+right->w*fraction;
 factor=1.0f/sqrt_at(output[0]*output[0]+output[1]*output[1]+output[2]*output[2]+output[3]*output[3]);
 output[0]*=factor;output[1]*=factor;output[2]*=factor;output[3]*=factor;
}
