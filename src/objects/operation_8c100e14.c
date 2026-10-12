typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern float squared_distance_xyz(void *, void *);
int operation_8c100e14(int a0, float f0)
{
    int v1;
    float t1;
    t1 = squared_distance_xyz((void *)(*(int *)0x8c46ee80 + 0x90), (void *)(a0 + 0x3c));
    v1 = (int)(f0 > t1);
    return v1;
}
