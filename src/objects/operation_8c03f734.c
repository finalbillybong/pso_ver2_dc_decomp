typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30];
    int f30;
};
extern char g_8c41cba0[];
extern int operation_8c01d858(int, int, int, int);
extern int operation_8c01d844(int, int, int, int);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c03f734(Object *o)
{
    int v1;
    char v4;
    char v13;
    char v25;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    v1 = (int)(g_8c41cba0 + 0x20);
    t1 = operation_8c01d858(v1, 0x10, 6, 1);
    if (t1 == 0) {
        t2 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
        if (t2 == 0) {
            goto L_8c03f78a;
        }
    }
    call_8c05fbf8(0x50000, 0, 0, 0);
    *(char *)0x8c466dc2 -= 1;
    v4 = (char)*(char *)0x8c466dc2;
    if ((char)v4 == 1 && o->f30 == 0) {
        *(char *)0x8c466dc2 = v4 + -1;
    }
L_8c03f78a:;
    t3 = operation_8c01d858(v1, 0x20, 6, 1);
    if (t3 == 0) {
        t4 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
        if (t4 == 0) {
            goto L_8c03f7d4;
        }
    }
    call_8c05fbf8(0x50000, 0, 0, 0);
    *(char *)0x8c466dc2 += 1;
    v13 = (char)*(char *)0x8c466dc2;
    if ((char)v13 == 1 && o->f30 == 0) {
        *(char *)0x8c466dc2 = v13 + 1;
    }
L_8c03f7d4:;
    t5 = operation_8c01d858(v1, 0xf0, 6, 1);
    if (t5 == 0) {
        t6 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0xf0, 6, 1);
        if (t6 == 0) {
            goto L_8c03f7fe;
        }
    }
    *(int *)0x8c466df4 = 0;
L_8c03f7fe:;
    v25 = (char)*(char *)0x8c466dc2;
    if ((char)v25 == 1 && o->f30 == 0) {
        *(char *)0x8c466dc2 = v25 + -1;
    }
}
