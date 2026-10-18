typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern float object_random_fraction(void *);
int operation_8c05b90c(int a0)
{
    float t1;
    t1 = object_random_fraction((void *)a0);
    return (int)(t1 * 65535.0f);
}
