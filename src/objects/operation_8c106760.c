typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern char g_8c41cba0[];
extern int operation_8c01d8a8(void *, int);
int operation_8c106760(void)
{
    int v1;
    int t1;
    if (((*(int *)(g_8c41cba0 + 0x28) & 4)) != 0) {
        return 1;
    }
    t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
    v1 = (int)(t1 != 0);
    return (int)(v1);
}
