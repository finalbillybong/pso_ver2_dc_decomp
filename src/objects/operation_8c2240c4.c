typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
};
struct Object {
    char unknown0[0x71];
    char f71;
    short f72;
    short f74;
    char unknown76[0x6];
    int f7c;
};
extern char g_8c41cba0[];
extern int operation_8c01d88c(void *, int);
extern void operation_8c1a6480(void *);
void operation_8c2240c4(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    if (((*(int *)(g_8c41cba0 + 0x20) & 0xf0)) == 0) {
        t1 = operation_8c01d88c((void *)((g_8c41cba0 + 0x110)), 0xf0);
        if (t1 == 0) {
            return;
        }
    }
    if (((*(int *)(g_8c41cba0 + 0x20) & 0x80)) == 0) {
        t2 = operation_8c01d88c((void *)((g_8c41cba0 + 0x110)), 0x80);
        if (t2 == 0) {
            goto L_8c22410e;
        }
    }
    o->f72 += 1;
L_8c22410e:;
    if (((*(int *)(g_8c41cba0 + 0x20) & 0x40)) == 0) {
        t3 = operation_8c01d88c((void *)((g_8c41cba0 + 0x110)), 0x40);
        if (t3 == 0) {
            goto L_8c224132;
        }
    }
    o->f72 += -1;
L_8c224132:;
    if (((*(int *)(g_8c41cba0 + 0x20) & 0x10)) == 0) {
        t4 = operation_8c01d88c((void *)((g_8c41cba0 + 0x110)), 0x10);
        if (t4 == 0) {
            goto L_8c224156;
        }
    }
    o->f74 += -1;
L_8c224156:;
    if (((*(int *)(g_8c41cba0 + 0x20) & 0x20)) == 0) {
        t5 = operation_8c01d88c((void *)((g_8c41cba0 + 0x110)), 0x20);
        if (t5 == 0) {
            goto L_8c22417a;
        }
    }
    o->f74 += 1;
L_8c22417a:;
    if (o->f71 != 0) {
        if (o->f71 == 1) {
            goto L_8c2241e4;
        }
        if (o->f71 != 2) {
            if (o->f71 == 3) {
                goto L_8c2241e4;
            }
            return;
        }
    }
    if (!(o->f72 >= 0)) {
        o->f72 = 0;
    }
    if (o->f72 >= 0x40) {
        o->f72 = 0x3f;
    }
    if (!(o->f74 >= 0)) {
        o->f74 = 0;
    }
    if (o->f74 >= 0x40) {
        o->f74 = 0x3f;
        return;
L_8c2241e4:;
        if (!(o->f72 >= 0)) {
            o->f72 = 0;
        }
        if (o->f72 >= 2) {
            o->f72 = 1;
        }
        if (!(o->f74 >= 0)) {
            o->f74 = 0;
        }
        if (o->f74 >= 2) {
            o->f74 = 1;
        }
        o->f7c = o->f72 + (o->f74 << 1);
        operation_8c1a6480((void *)o);
    }
}
