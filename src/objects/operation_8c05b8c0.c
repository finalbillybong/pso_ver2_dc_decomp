typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern float object_random_fraction(void *);
float operation_8c05b8c0(int a0)
{
    float t1;
    t1 = object_random_fraction((void *)a0);
    return (t1 - 0.5f) * 2.0f;
}
