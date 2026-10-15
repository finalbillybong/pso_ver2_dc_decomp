typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern float object_random_fraction(void *);
float operation_8c05b8e8(int a0, float f0, float f1)
{
    float t1;
    t1 = object_random_fraction((void *)a0);
    return (f1 - f0) * t1 + f0;
}
