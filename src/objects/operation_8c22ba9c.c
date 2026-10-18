typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x69];
    char f69;
};
extern char g_8c41cba0[];
extern int operation_8c01d858(int, int, int, int);
extern int operation_8c01d844(int, int, int, int);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c22ba9c(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    v1 = (int)(g_8c41cba0 + 0x20);
    t1 = operation_8c01d858(v1, 0x30, 6, 1);
    if (t1 == 0) {
        t2 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x30, 6, 1);
        if (t2 == 0) {
            return;
        }
    }
    call_8c05fbf8(0x50000, 0, 0, 0);
    t3 = operation_8c01d858(v1, 0x10, 6, 1);
    if (t3 == 0) {
        t4 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
        if (t4 == 0) {
            goto L_8c22bb08;
        }
    }
    o->f69 -= 1;
L_8c22bb08:;
    t5 = operation_8c01d858(v1, 0x20, 6, 1);
    if (t5 == 0) {
        t6 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
        if (t6 == 0) {
            goto L_8c22bb38;
        }
    }
    o->f69 += 1;
L_8c22bb38:;
    if (!(o->f69 >= 0)) {
        o->f69 = 0;
    }
    if (o->f69 > 1) {
        o->f69 = 1;
    }
}
