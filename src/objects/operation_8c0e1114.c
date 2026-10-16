typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x90];
    float f90;
};
extern float call_8c12c714(float);
int operation_8c0e1114(Object *o, float f0)
{
    float v1;
    float t1;
    v1 = (float)((f0 - o->f90) * 0.47f);
    t1 = call_8c12c714(v1);
    if (0.011f > t1) {
        o->f90 = f0;
        return 1;
    }
    o->f90 += v1;
    return 0;
}
