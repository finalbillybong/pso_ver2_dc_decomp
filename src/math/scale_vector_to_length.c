/* Provisional reconstruction; preserve observed arithmetic and call order. */
#include "src/include/vector3.h"
#define squared_at ((float (*)(Vector3 *))0x8c37e494)
#define square_root_at ((float (*)(float))0x8c37f6c0)
float scale_vector_to_length(Vector3 *vector,float length){
    float squared=squared_at(vector);
    if(squared>0.00001f){
        float actual=square_root_at(squared);
        length/=actual;
        vector->x*=length;
        vector->y*=length;
        vector->z*=length;
        return actual;
    }
    return 0.0f;
}
