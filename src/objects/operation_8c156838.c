typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct Arg0_98 Arg0_98;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x18];
    unsigned short f80;
    char unknown82[0x12];
    Arg0_94 *f94;
    Arg0_98 *f98;
};
extern char g_8c41cba0[];
extern void call_8c156f08(void);
extern int operation_8c01d844(int, int, int, int);
extern void call_8c1573f4(Object *);
extern void call_8c157460(Object *);
extern int operation_8c01d858(int, int, int, int);
extern int operation_8c01d8a8(void *, int);
extern void operation_8c1574cc(void *);
extern void operation_8c157554(void *);
extern void call_8c199b74(void *);
extern void operation_8c199bc4(void *);
extern void call_8c0db30c(Object *);
extern void call_8c157210(Object *);
extern void update_grid_view_parameters(void *);
extern void call_8c157384(Object *);
extern void position_menu_label(void *);
extern void call_8c157290(Object *);
extern void update_view_nodes(void *, void *);
void operation_8c156838(Object *o)
{
    int v3;
    int v9;
    int v14;
    int v20;
    int v29;
    int v35;
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
    call_8c156f08();
    if (((o->f34 & 2)) == 0) {
        o->f64 = 0x1000000;
    }
    if (((o->f80 & 0xffff & 0x40)) != 0) {
    } else {
        if (((o->f80 & 0xffff & 2)) != 0) {
        } else {
            if (!(o->f64 > 2)) {
            } else {
                if (((o->f80 & 0xffff & 0x10)) != 0) {
                    int v2 = (int)(g_8c41cba0 + 0x20);
                    t1 = operation_8c01d844(v2, 0x10, 6, 1);
                    if (t1 == 0) {
                        if (((o->f80 & 0xffff & 0x200)) != 0) {
                            v3 = (int)0;
                        } else {
                            t5 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
                            v3 = (int)t5;
                        }
                        if (v3 == 0) {
                            goto L_8c1568ce;
                        }
                    }
                    call_8c1573f4(o);
L_8c1568ce:;
                    t2 = operation_8c01d844(v2, 0x20, 6, 1);
                    if (t2 == 0) {
                        if (((o->f80 & 0xffff & 0x200)) != 0) {
                            v9 = (int)0;
                        } else {
                            t6 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
                            v9 = (int)t6;
                        }
                        if (v9 == 0) {
                            goto L_8c156990;
                        }
                    }
                    call_8c157460(o);
                } else {
                    int v13 = (int)(g_8c41cba0 + 0x20);
                    t3 = operation_8c01d858(v13, 0x10, 6, 1);
                    if (t3 == 0) {
                        if (((o->f80 & 0xffff & 0x200)) != 0) {
                            v14 = (int)0;
                        } else {
                            t7 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
                            v14 = (int)t7;
                        }
                        if (v14 == 0) {
                            goto L_8c156952;
                        }
                    }
                    call_8c1573f4(o);
L_8c156952:;
                    t4 = operation_8c01d858(v13, 0x20, 6, 1);
                    if (t4 == 0) {
                        if (((o->f80 & 0xffff & 0x200)) != 0) {
                            v20 = (int)0;
                        } else {
                            t8 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
                            v20 = (int)t8;
                        }
                        if (v20 == 0) {
                            goto L_8c156990;
                        }
                    }
                    call_8c157460(o);
                }
L_8c156990:;
                if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
                    if (((o->f80 & 0xffff & 0x200)) != 0) {
                        v29 = (int)0;
                    } else {
                        t9 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
                        v29 = (int)t9;
                    }
                    if (v29 == 0) {
                        goto L_8c1569c2;
                    }
                }
                operation_8c1574cc((void *)o);
L_8c1569c2:;
                if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
                    if (((o->f80 & 0xffff & 0x200)) != 0) {
                        v35 = (int)0;
                    } else {
                        t10 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
                        v35 = (int)t10;
                    }
                    if (v35 == 0) {
                        goto L_8c1569f4;
                    }
                }
                operation_8c157554((void *)o);
            }
        }
    }
L_8c1569f4:;
    if (!(7.5f > (float)o->f64)) {
        if (o->f98 != 0) {
            call_8c199b74((void *)(o->f98));
        }
        if (o->f94 != 0) {
            operation_8c199bc4((void *)(o->f94));
        }
    }
    call_8c0db30c(o);
    call_8c157210(o);
    update_grid_view_parameters((void *)o);
    call_8c157384(o);
    position_menu_label((void *)o);
    call_8c157290(o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
