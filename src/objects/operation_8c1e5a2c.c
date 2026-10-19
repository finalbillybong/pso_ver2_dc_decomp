typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct S_vv101 S_vv101;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    int f30;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_vv101 {
    char unknown0[0x80];
    unsigned short f80;
};
extern char g_8c41cba0[];
extern void operation_8c1cc690(void);
extern int pair_grid_view_ready(void *);
extern int call_8c1e5bf0(Object *);
extern int operation_8c01d8a8(void *, int);
extern void call_8c119c78(void *);
extern void operation_8c1e5c74(void *);
extern int operation_8c03651c(void);
extern void word_operation_8c1ddaf0(unsigned int);
extern void select_mode6_8c1cc528(void);
extern void select_mode9_8c1cc570(void);
extern void select_mode4_8c1cc4f8(void);
void operation_8c1e5a2c(Object *o)
{
    char *v102;
    S_vv101 *v101;
    int v3;
    int v4;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    operation_8c1cc690();
    switch (o->f20) {
    case 0:
        v102 = (char *)o->f28;
        if (v102 != 0) {
            t1 = pair_grid_view_ready((void *)v102);
            if (t1 != 0) {
                t2 = call_8c1e5bf0(o);
                o->f2c = (Arg0_2c *)t2;
                o->f20 = 1;
                return;
            }
            t3 = pair_grid_view_ready((void *)(o->f28));
            if (t3 == 0) {
                if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
                    t4 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
                    if (t4 == 0) {
                        return;
                    }
                }
                call_8c119c78((void *)(o->f28));
            }
        }
        return;
    case 1:
        v101 = (S_vv101 *)o->f2c;
        if (((v101->f80 & 0xffff & 2)) != 0) {
            operation_8c1e5c74((void *)o);
            o->f20 = 2;
            return;
        }
        if (((v101->f80 & 0xffff & 4)) != 0) {
            operation_8c1e5c74((void *)o);
            o->f20 = 3;
            return;
        }
        break;
    case 2:
        v3 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v3);
        if ((float)v3 > 5.5f) {
            switch (o->f30) {
            case 0:
                t5 = operation_8c03651c();
                if (t5 == 0) {
                    word_operation_8c1ddaf0((unsigned int)0);
                    select_mode6_8c1cc528();
                } else {
                    select_mode9_8c1cc570();
                }
                return;
            case 1:
                select_mode4_8c1cc4f8();
                break;
            }
        }
        return;
    case 3:
        v4 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v4);
        if ((float)v4 > 5.5f) {
            select_mode4_8c1cc4f8();
        }
        return;
    }
}
