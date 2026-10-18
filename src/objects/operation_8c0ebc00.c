typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x24];
    int f24;
};
extern char g_8c41cba0[];
extern int operation_8c01d858(int, int, int, int);
extern int operation_8c01d844(int, int, int, int);
extern void call_8c05fbf8(int, int, int, int);
extern int operation_8c01d8a8(void *, int);
int operation_8c0ebc00(Object *o)
{
    int v2;
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    v1 = (int)(g_8c41cba0 + 0x20);
    v2 = (int)0;
    t1 = operation_8c01d858(v1, 0x10, 6, 1);
    if (t1 == 0) {
        t2 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
        if (t2 == 0) {
            goto L_8c0ebc46;
        }
    }
    call_8c05fbf8(0x50000, 0, 0, 0);
    o->f24 -= 1;
L_8c0ebc46:;
    t3 = operation_8c01d858(v1, 0x20, 6, 1);
    if (t3 == 0) {
        t4 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
        if (t4 == 0) {
            goto L_8c0ebc7c;
        }
    }
    call_8c05fbf8(0x50000, 0, 0, 0);
    o->f24 -= 1;
L_8c0ebc7c:;
    if (o->f24 >= 2) {
        o->f24 = 0;
    }
    if (!(o->f24 >= 0)) {
        o->f24 = 1;
    }
    if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
        t5 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
        if (t5 == 0) {
            goto L_8c0ebcb0;
        }
    }
    v2 = (int)(v2 | 1);
L_8c0ebcb0:;
    if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
        t6 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
        if (t6 == 0) {
            goto L_8c0ebcce;
        }
    }
    v2 = (int)(v2 | 2);
L_8c0ebcce:;
    if (((*(int *)(g_8c41cba0 + 0x28) & 0x400)) == 0) {
        t7 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 0x400);
        if (t7 == 0) {
            goto L_8c0ebcee;
        }
    }
    v2 = (int)(v2 | 4);
L_8c0ebcee:;
    if (((*(int *)(g_8c41cba0 + 0x28) & 0x200)) == 0) {
        t8 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 0x200);
        if (t8 == 0) {
            goto L_8c0ebd0e;
        }
    }
    v2 = (int)(v2 | 8);
L_8c0ebd0e:;
    return (int)(v2);
}
