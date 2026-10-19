typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c46fe20_58 S_g8c46fe20_58;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    Arg0_24 *f24;
    unsigned int f28;
    int f2c;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct Arg0_24 {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_g8c46fe20 {
    char unknown0[0x58];
    S_g8c46fe20_58 *f58;
};
struct S_g8c46fe20_58 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c46fe20 *g_8c46fe20;
extern short g_8c46fe24;
extern S_L8c41cba0 g_8c41cba0;
extern int pair_grid_view_ready(void *);
extern void call_8c119c78(void *);
extern int operation_8c156c6c(int);
extern int operation_8c1571f4(void *);
extern void call_8c1dc844(void *);
void operation_8c209564(Object *o)
{
    int v23;
    int t1;
    int t2;
    int t3;
    switch (o->f28) {
    case 0:
    case 1:
        t1 = pair_grid_view_ready((void *)(o->f20));
        if (t1 != 0) {
            o->f28 = 2;
        }
        if ((((&g_8c41cba0)->f28 & 4)) == 0) {
            return;
        }
        call_8c119c78((void *)(o->f20));
        o->f28 = 2;
        return;
    case 2:
        if (o->f2c != 0) {
            o->f28 = 4;
            return;
        }
        t2 = operation_8c156c6c((int)((void *)0x8c335e0c));
        o->f24 = (Arg0_24 *)t2;
        o->f24->f80 = (o->f24->f80 & 0xffff) | 0x10;
        o->f28 = 3;
    case 3:
        if (((o->f24->f80 & 0xffff & 4)) != 0) {
            g_8c46fe24 &= -3;
            if (g_8c46fe20 != 0) {
                if (g_8c46fe20->f58 != 0) {
                    g_8c46fe20->f58->f04 |= 1;
                    g_8c46fe20->f58 = (S_g8c46fe20_58 *)0;
                }
            }
            o->f28 = 5;
            return;
        }
        if (((o->f24->f80 & 0xffff & 2)) == 0) {
            return;
        }
        t3 = operation_8c1571f4((void *)(o->f24));
        if (t3 == 0) {
            call_8c1dc844((void *)((void *)0x8c4e2fa4));
            g_8c46fe24 &= -3;
            if (g_8c46fe20 != 0) {
                if (g_8c46fe20->f58 != 0) {
                    g_8c46fe20->f58->f04 |= 1;
                    g_8c46fe20->f58 = (S_g8c46fe20_58 *)0;
                }
            }
            o->f28 = 5;
        }
        if (t3 != 1) {
            return;
        }
        g_8c46fe24 &= -3;
        if (g_8c46fe20 != 0) {
            if (g_8c46fe20->f58 != 0) {
                g_8c46fe20->f58->f04 |= 1;
                g_8c46fe20->f58 = (S_g8c46fe20_58 *)0;
            }
        }
        o->f28 = 5;
        return;
    case 4:
        v23 = (int)o->f2c;
        o->f2c = v23 + -1;
        if (v23 > 0) {
            if ((((&g_8c41cba0)->f28 & 4)) == 0) {
                return;
            }
        }
        g_8c46fe24 &= -3;
        if (g_8c46fe20 != 0) {
            if (g_8c46fe20->f58 != 0) {
                g_8c46fe20->f58->f04 |= 1;
                g_8c46fe20->f58 = (S_g8c46fe20_58 *)0;
            }
        }
        o->f28 = 5;
        return;
    case 5:
        break;
    }
}
