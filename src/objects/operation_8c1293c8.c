typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern float squared_distance_xyz(void *, void *);
int operation_8c1293c8(int a0, int a1)
{
    int v1;
    float t1;
    t1 = squared_distance_xyz((void *)(a1 + 0x3c), (void *)(a0 + 0x3c));
    v1 = (int)(400.0f > t1);
    return (int)(v1);
}
