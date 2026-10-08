typedef char check_angle_components[sizeof(int)*3==12?1:-1];
typedef char check_quaternion_components[sizeof(float)*4==16?1:-1];
extern void __fsca(long,void *,void *);
void euler_to_quaternion_1(int *angles,float *output) {
 float cx,cy,cz,sx,sy,sz;
 __fsca(angles[0]>>1,&sx,&cx);
 __fsca(angles[1]>>1,&sy,&cy);
 __fsca(angles[2]>>1,&sz,&cz);
 output[0]=cx*cy*cz+sx*sy*sz;
 output[1]=cx*sy*sz+sx*cy*cz;
 output[2]=-cy*sz*sx+sy*cz*cx;
 output[3]=-cz*sx*sy+sz*cx*cy;
}
