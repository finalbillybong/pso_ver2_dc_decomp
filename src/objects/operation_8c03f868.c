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
int operation_8c03f868(void)
{
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    v1 = (int)0;
    if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
        t1 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
        if (t1 == 0) {
            goto L_8c03f88c;
        }
    }
    v1 = (int)(v1 | 1);
L_8c03f88c:;
    if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
        t2 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
        if (t2 == 0) {
            goto L_8c03f8aa;
        }
    }
    v1 = (int)(v1 | 2);
L_8c03f8aa:;
    if (((*(int *)(g_8c41cba0 + 0x28) & 0x400)) == 0) {
        t3 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 0x400);
        if (t3 == 0) {
            goto L_8c03f8ca;
        }
    }
    v1 = (int)(v1 | 4);
L_8c03f8ca:;
    if (((*(int *)(g_8c41cba0 + 0x28) & 0x200)) == 0) {
        t4 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 0x200);
        if (t4 == 0) {
            goto L_8c03f8ea;
        }
    }
    v1 = (int)(v1 | 8);
L_8c03f8ea:;
    return (int)(v1);
}
