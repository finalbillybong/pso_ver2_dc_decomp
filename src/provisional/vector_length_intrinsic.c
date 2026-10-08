extern float __fipr(void *,void *);
extern float __sqrtf(float);
float vector_length_intrinsic(float *vector){float v[4];v[0]=vector[0];v[1]=vector[1];v[2]=vector[2];v[3]=0.0f;return __sqrtf(__fipr(v,v));}
