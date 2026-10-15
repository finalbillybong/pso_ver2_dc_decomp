typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
extern float squared_distance_xz(void *, void *);
int operation_8c1c17fc(int a0, int a1, float f0)
{
    int v2;
    int v1;
    float t1;
    v2 = (int)0;
    v1 = (int)0x37c;
    while (*(int *)0x8c467874 > v2) {
        if (*(int *)((char *)0x8c467240 + (v2 << 2)) != 0 && *(int *)((char *)((char *)*(S_g8c467240 **)((char *)0x8c467240 + (v2 << 2)) + 0x0) + (v1)) == 0) {
            t1 = squared_distance_xz((void *)a1, (void *)(*(int *)((char *)0x8c467240 + (v2 << 2)) + 0x3c));
            if (f0 > t1) {
                return 1;
            }
        }
        v2 = (int)(v2 + 1);
    }
    return 0;
}
