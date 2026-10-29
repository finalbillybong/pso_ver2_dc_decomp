typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_2c Arg0_2c;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x20];
    char f20;
    char unknown21[0x1];
    unsigned short f22;
    Arg0_24 *f24;
    char unknown28[0x4];
    Arg0_2c *f2c;
};
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    int f28;
};
struct S_vv3 {
    char unknown0[0x20];
    short f20;
};
struct Arg0_2c {
    char unknown0[0x68];
    int f68;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c46fe20 *g_8c46fe20;
extern S_L8c41cba0 g_8c41cba0;
extern int lookup_low_id(int);
extern int operation_8c2097a8(int);
extern void operation_8c1dd128(void *);
extern void operation_8c1dccb4(void *);
extern void operation_8c026450(void);
extern void operation_8c1e22ec(void *);
extern void operation_8c0264ac(void);
extern int operation_8c1e2330(void *);
void operation_8c1dcdf0(Object *o)
{
    int v2;
    int v1;
    S_vv3 *v3;
    int t1;
    int t2;
    int t3;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        return;
    }
    v1 = o->f22;
    if (((v1 & 2)) != 0) {
        if ((((&g_8c41cba0)->f28 & 0x200)) == 0) {
            return;
        }
        t2 = operation_8c2097a8(2);
        if (t2 != 0) {
            v2 = (int)0x20000;
        } else {
            v2 = (int)0x10000;
        }
        if ((((&g_8c41cba0)->f20 & v2)) != 0) {
            return;
        }
        o->f22 &= -3;
        operation_8c1dd128((void *)o);
        operation_8c1dccb4((void *)o);
        if (((o->f22 & 0x40)) == 0) {
            return;
        }
        v3 = (S_vv3 *)g_8c46fe20;
        if (v3 != 0) {
            v3->f20 |= 0x20;
        }
        operation_8c026450();
        return;
    }
    if (((o->f2c->f68 & 0x100)) != 0) {
        if (((v1 & 0x240)) == 0) {
            goto L_8c1dcf16;
        }
        if ((((&g_8c41cba0)->f28 & 0x200)) == 0) {
            goto L_8c1dcf16;
        }
    }
    if (((v1 & 0x240)) != 0 && (((&g_8c41cba0)->f28 & 0x200)) != 0) {
        operation_8c1e22ec((void *)(o->f24));
    }
    operation_8c1dd128((void *)o);
    o->f22 |= 2;
    operation_8c1dccb4((void *)o);
    if (((o->f22 & 0x40)) != 0) {
        operation_8c0264ac();
        if (g_8c46fe20 != 0) {
            g_8c46fe20->f20 &= -0x21;
        }
    }
    return;
L_8c1dcf16:;
    if ((((&g_8c41cba0)->f28 & 0x400)) != 0) {
        t3 = operation_8c1e2330((void *)(o->f24));
        if (t3 == 0) {
            operation_8c1dd128((void *)o);
            o->f20 += 1;
            if (o->f20 >= 3) {
                o->f20 -= 3;
            }
            operation_8c1dccb4((void *)o);
        }
    }
}
