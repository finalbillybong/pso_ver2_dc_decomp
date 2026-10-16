typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
struct Object {
    char unknown0[0x68];
    float f68;
    float f6c;
    float f70;
    int f74;
};
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
};
extern char g_8c41cba0[];
extern int operation_8c01d88c(void *, int);
extern void operation_8c102eec(float);
extern void operation_8c102f40(float);
extern void operation_8c103020(float);
void operation_8c1d7fa0(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    if (o->f74 == 0) {
        return;
    }
    if (((*(int *)(g_8c41cba0 + 0x20) & 0x10)) == 0) {
        t1 = operation_8c01d88c((void *)((g_8c41cba0 + 0x110)), 0x10);
        if (t1 == 0) {
            goto L_8c1d7fda;
        }
    }
    o->f6c += 6.0f;
L_8c1d7fda:;
    if (((*(int *)(g_8c41cba0 + 0x20) & 0x20)) == 0) {
        t2 = operation_8c01d88c((void *)((g_8c41cba0 + 0x110)), 0x20);
        if (t2 == 0) {
            goto L_8c1d8000;
        }
    }
    o->f6c -= 6.0f;
L_8c1d8000:;
    if (((*(int *)(g_8c41cba0 + 0x20) & 0x40)) == 0) {
        t3 = operation_8c01d88c((void *)((g_8c41cba0 + 0x110)), 0x40);
        if (t3 == 0) {
            goto L_8c1d8026;
        }
    }
    o->f68 += 6.0f;
L_8c1d8026:;
    if (((*(int *)(g_8c41cba0 + 0x20) & 0x80)) == 0) {
        t4 = operation_8c01d88c((void *)((g_8c41cba0 + 0x110)), 0x80);
        if (t4 == 0) {
            goto L_8c1d804e;
        }
    }
    o->f68 -= 6.0f;
L_8c1d804e:;
    if (((*(int *)(g_8c41cba0 + 0x20) & 0x20000)) != 0) {
        o->f70 -= 6.0f;
    }
    if (((*(int *)(g_8c41cba0 + 0x20) & 0x10000)) != 0) {
        o->f70 += 6.0f;
    }
    operation_8c102eec(o->f68);
    operation_8c102f40(o->f6c);
    operation_8c103020(o->f70);
    o->f68 *= 0.8f;
    o->f6c *= 0.8f;
    o->f70 *= 0.8f;
}
