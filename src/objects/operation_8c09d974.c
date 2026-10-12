typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern float squared_distance_xyz(void *, void *);
int operation_8c09d974(int a0, int a1, float f0)
{
    int v1;
    float t1;
    if (*(int *)0x8c46ee80 != 0) {
        t1 = squared_distance_xyz((void *)a1, (void *)(*(int *)0x8c46ee80 + 0x90));
        v1 = (int)(f0 > t1);
        return v1;
    }
    return 0;
}
