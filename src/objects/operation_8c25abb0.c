typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct S_vv81 S_vv81;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
struct S_vv81 {
    char unknown0[0x80];
    unsigned short f80;
};
extern char g_8c41cba0[];
extern void operation_8c1cc690(void);
extern int pair_grid_view_ready(void *);
extern int call_8c25ad08(Object *);
extern int operation_8c01d8a8(void *, int);
extern void call_8c119c78(void *);
extern void operation_8c25ad8c(void *);
extern void operation_8c25adc8(void *);
extern void select_mode0_8c1cc49c(void);
void operation_8c25abb0(Object *o)
{
    char *v82;
    S_vv81 *v81;
    int v3;
    int t1;
    int t2;
    int t3;
    int t4;
    operation_8c1cc690();
    if (o->f20 != 0) {
        if (o->f20 == 1) {
            goto L_8c25ac1c;
        }
        if (o->f20 == 2) {
            goto L_8c25ac4e;
        }
        if (o->f20 == 3) {
            goto L_8c25ac58;
        }
        return;
    }
    v82 = (char *)o->f28;
    if (v82 != 0) {
        t1 = pair_grid_view_ready((void *)v82);
        if (t1 != 0) {
            t2 = call_8c25ad08(o);
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
            return;
L_8c25ac1c:;
            v81 = (S_vv81 *)o->f2c;
            if (((v81->f80 & 0xffff & 2)) != 0) {
                operation_8c25ad8c((void *)o);
                o->f20 = 2;
                return;
            }
            if (((v81->f80 & 0xffff & 4)) != 0) {
                operation_8c25ad8c((void *)o);
                o->f20 = 3;
                return;
L_8c25ac4e:;
                operation_8c25adc8((void *)o);
                return;
L_8c25ac58:;
                v3 = (int)o->f24;
                o->f24 = v3 + 1;
                if ((float)v3 > 4.5f) {
                    select_mode0_8c1cc49c();
                }
            }
        }
    }
}
