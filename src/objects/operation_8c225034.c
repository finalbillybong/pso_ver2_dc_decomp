typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x82];
    char f82;
    char f83;
    char f84;
};
extern char g_8c41cba0[];
extern int operation_8c01d844(int, int, int, int);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c225034(Object *o)
{
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    v1 = (int)(g_8c41cba0 + 0x20);
    t1 = operation_8c01d844(v1, 0xf0, 6, 1);
    if (t1 == 0) {
        t2 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0xf0, 6, 1);
        if (t2 == 0) {
            return;
        }
    }
    call_8c05fbf8(0x50000, 0, 0, 0);
    if ((t3 = operation_8c01d844(v1, 0x80, 6, 1)) != 0 || (t4 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x80, 6, 1)) != 0) {
        o->f82 += 1;
    }
    if ((t5 = operation_8c01d844(v1, 0x40, 6, 1)) != 0 || (t6 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x40, 6, 1)) != 0) {
        o->f82 -= 1;
    }
    if (!(o->f82 >= 0)) {
        o->f82 += 4;
    }
    if (o->f82 >= 4) {
        o->f82 -= 4;
    }
    if ((t7 = operation_8c01d844(v1, 0x10, 6, 1)) != 0 || (t8 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1)) != 0) {
        o->f83 -= 1;
    }
    if ((t9 = operation_8c01d844(v1, 0x20, 6, 1)) != 0 || (t10 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1)) != 0) {
        o->f83 += 1;
    }
    if (!(o->f83 >= 0)) {
        o->f83 += o->f84;
    }
    {
        char n = o->f84;
        char c = o->f83;
        if (c >= n) {
            o->f83 = c - n;
        }
    }
}
