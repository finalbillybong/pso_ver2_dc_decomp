typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_3c Arg0_30_3c;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x35];
    char f69;
    char f6a;
    char f6b;
};
struct Arg0_30 {
    char unknown0[0x3c];
    Arg0_30_3c *f3c;
};
struct S_vv1 {
    char unknown0[0x2c];
    int f2c;
};
struct Arg0_30_3c {
    char unknown0[0x2c];
    int f2c;
};
extern char g_8c41cba0[];
extern int operation_8c2097a8(int);
extern int operation_8c01d844(int, int, int, int);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c197640(Object *o)
{
    S_vv1 *v1;
    int v6;
    int v5;
    int v9;
    char v10;
    int v11;
    char v16;
    char v23;
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
    int t11;
    int t12;
    v1 = (S_vv1 *)o->f30->f3c;
    if (o->f6b > 0) {
        o->f6b -= 1;
        v1->f2c = -1;
    } else {
        v1->f2c = -0x99999a;
    }
    t1 = operation_8c2097a8(2);
    if (t1 != 0) {
        v5 = (int)0x20000;
    } else {
        v5 = (int)0x10000;
    }
    v6 = (int)(g_8c41cba0 + 0x20);
    t2 = operation_8c01d844(v6, (int)(v5 | 0xf0), 6, 1);
    if (t2 == 0) {
        t3 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0xf0, 6, 1);
        if (t3 == 0) {
            return;
        }
    }
    call_8c05fbf8(0x50000, 0, 0, 0);
    t4 = operation_8c2097a8(2);
    if (t4 != 0) {
        v9 = (int)0x20000;
    } else {
        v9 = (int)0x10000;
    }
    if (((*(int *)(g_8c41cba0 + 0x28) & v9)) != 0) {
        v10 = (char)o->f6a;
        o->f6a = 1 - v10;
        v11 = (int)3;
        o->f6b = v11;
    }
    t5 = operation_8c01d844(v6, 0x10, 6, 1);
    if (t5 == 0) {
        t6 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
        if (t6 == 0) {
            goto L_8c197716;
        }
    }
    v16 = (char)o->f6a;
    o->f6a = 1 - v16;
L_8c197716:;
    t7 = operation_8c01d844(v6, 0x20, 6, 1);
    if (t7 == 0) {
        t8 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
        if (t8 == 0) {
            goto L_8c197748;
        }
    }
    v23 = (char)o->f6a;
    o->f6a = 1 - v23;
L_8c197748:;
    t9 = operation_8c01d844(v6, 0x80, 6, 1);
    if (t9 == 0) {
        t10 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x80, 6, 1);
        if (t10 == 0) {
            goto L_8c197778;
        }
    }
    o->f69 += 1;
L_8c197778:;
    t11 = operation_8c01d844(v6, 0x40, 6, 1);
    if (t11 == 0) {
        t12 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x40, 6, 1);
        if (t12 == 0) {
            goto L_8c1977a8;
        }
    }
    o->f69 -= 1;
L_8c1977a8:;
    if (!(o->f69 >= 0)) {
        o->f69 += 3;
    }
    if (o->f69 >= 3) {
        o->f69 -= 3;
    }
}
