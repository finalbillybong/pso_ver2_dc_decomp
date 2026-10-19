typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
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
struct Arg0_2c {
    char unknown0[0x80];
    unsigned short f80;
};
extern char g_8c41cba0[];
extern void operation_8c1cc690(void);
extern int operation_8c19b054(void);
extern int call_8c372d38(int, void *);
extern void operation_8c1f195c(void *);
extern int pair_grid_view_ready(void *);
extern int call_8c1f18d8(Object *);
extern int operation_8c01d8a8(void *, int);
extern void call_8c119c78(void *);
extern void operation_8c1f19a0(void *);
extern void select_mode19_8c1cc648(void);
extern void select_mode0_8c1cc49c(void);
void operation_8c1f1700(Object *o)
{
    int v3;
    int v4;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    operation_8c1cc690();
    t1 = operation_8c19b054();
    t2 = call_8c372d38((int)((char)t1), (void *)((void *)0x8c319870));
    if (t2 != 0) {
        operation_8c1f195c((void *)o);
        return;
    }
    switch (o->f20) {
    case 0:
        t3 = pair_grid_view_ready((void *)(o->f28));
        if (t3 != 0) {
            o->f20 = 1;
            t4 = call_8c1f18d8(o);
            o->f2c = (Arg0_2c *)t4;
            return;
        }
        t5 = pair_grid_view_ready((void *)(o->f28));
        if (t5 != 0) {
            return;
        }
        if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
            t6 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
            if (t6 == 0) {
                return;
            }
        }
        call_8c119c78((void *)(o->f28));
        return;
    case 1:
        if (((o->f2c->f80 & 0xffff & 4)) != 0) {
            o->f20 = 3;
            operation_8c1f19a0((void *)o);
            return;
        }
        if (((o->f2c->f80 & 0xffff & 2)) == 0) {
            return;
        }
        o->f20 = 2;
        operation_8c1f19a0((void *)o);
        return;
    case 2:
        v3 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v3);
        if (!((float)v3 > 5.5f)) {
            return;
        }
        if (o->f30 != 0) {
            if (o->f30 == 1) {
                goto L_8c1f17e4;
            }
            return;
        }
        select_mode19_8c1cc648();
        return;
L_8c1f17e4:;
        select_mode0_8c1cc49c();
        return;
    case 3:
        v4 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v4);
        if ((float)v4 > 5.5f) {
            select_mode0_8c1cc49c();
        }
    }
}
