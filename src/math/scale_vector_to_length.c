/* Provisional reconstruction; preserve observed arithmetic and call order. */
#include "src/include/vector3.h"
#define njScalor2_8c37e494 ((float (*)(Vector3 *))0x8c37e494)
#define signed_sqrt_8c37f6c0 ((float (*)(float))0x8c37f6c0)
float scale_vector_to_length(Vector3 *vector,float length){
    float squared=njScalor2_8c37e494(vector);
    if(squared>0.00001f){
        float actual=signed_sqrt_8c37f6c0(squared);
        length/=actual;
        vector->x*=length;
        vector->y*=length;
        vector->z*=length;
        return actual;
    }
    return 0.0f;
}
