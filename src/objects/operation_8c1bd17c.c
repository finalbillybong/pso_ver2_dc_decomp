typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    unsigned short f68;
    char unknown6a[0xe];
    Arg0_78 *f78;
};
extern char g_8c41cba0[];
extern int operation_8c01d844(int, int, int, int);
extern void call_8c1bdafc(Object *);
extern void call_8c1bdc24(Object *);
extern void call_8c1bda48(Object *);
extern void operation_8c1bdaa4(void *);
extern int operation_8c01d858(int, int, int, int);
extern int operation_8c01d8a8(void *, int);
extern void operation_8c1bdd4c(void *);
extern void call_8c1bddbc(Object *);
extern void call_8c199b74(void *);
extern void call_8c0db30c(Object *);
extern void interpolate_view_parameters(void *);
extern void update_view_nodes(void *, void *);
void operation_8c1bd17c(Object *o)
{
    int v4;
    int v9;
    int v14;
    int v19;
    int v28;
    int v29;
    int v34;
    int v39;
    int v44;
    int v50;
    int v55;
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
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    if (((o->f34 & 2)) == 0) {
        o->f64 = 0x1000000;
    }
    if (((o->f68 & 2)) != 0) {
    } else {
        if (((o->f68 & 0x10)) == 0) {
        } else {
            int v3 = (int)(g_8c41cba0 + 0x20);
            t1 = operation_8c01d844(v3, 0x10, 6, 1);
            if (t1 == 0) {
                if (((o->f68 & 0x20)) != 0) {
                    v4 = (int)0;
                } else {
                    t9 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
                    v4 = (int)t9;
                }
                if (v4 == 0) {
                    goto L_8c1bd1fe;
                }
            }
            call_8c1bdafc(o);
L_8c1bd1fe:;
            t2 = operation_8c01d844(v3, 0x20, 6, 1);
            if (t2 == 0) {
                if (((o->f68 & 0x20)) != 0) {
                    v9 = (int)0;
                } else {
                    t10 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
                    v9 = (int)t10;
                }
                if (v9 == 0) {
                    goto L_8c1bd24a;
                }
            }
            call_8c1bdc24(o);
L_8c1bd24a:;
            t3 = operation_8c01d844(v3, 0x40, 6, 1);
            if (t3 == 0) {
                if (((o->f68 & 0x20)) != 0) {
                    v14 = (int)0;
                } else {
                    t11 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x40, 6, 1);
                    v14 = (int)t11;
                }
                if (v14 == 0) {
                    goto L_8c1bd296;
                }
            }
            call_8c1bda48(o);
L_8c1bd296:;
            t4 = operation_8c01d844(v3, 0x80, 6, 1);
            if (t4 == 0) {
                if (((o->f68 & 0x20)) != 0) {
                    v19 = (int)0;
                } else {
                    t12 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x80, 6, 1);
                    v19 = (int)t12;
                }
                if (v19 == 0) {
                    goto L_8c1bd442;
                }
            }
            operation_8c1bdaa4((void *)o);
            goto L_8c1bd442;
        }
        v28 = (int)(g_8c41cba0 + 0x20);
        t5 = operation_8c01d858(v28, 0x10, 6, 1);
        if (t5 == 0) {
            if (((o->f68 & 0x20)) != 0) {
                v29 = (int)0;
            } else {
                t13 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x10, 6, 1);
                v29 = (int)t13;
            }
            if (v29 == 0) {
                goto L_8c1bd34e;
            }
        }
        call_8c1bdafc(o);
L_8c1bd34e:;
        t6 = operation_8c01d858(v28, 0x20, 6, 1);
        if (t6 == 0) {
            if (((o->f68 & 0x20)) != 0) {
                v34 = (int)0;
            } else {
                t14 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x20, 6, 1);
                v34 = (int)t14;
            }
            if (v34 == 0) {
                goto L_8c1bd39e;
            }
        }
        call_8c1bdc24(o);
L_8c1bd39e:;
        t7 = operation_8c01d858(v28, 0x40, 6, 1);
        if (t7 == 0) {
            if (((o->f68 & 0x20)) != 0) {
                v39 = (int)0;
            } else {
                t15 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x40, 6, 1);
                v39 = (int)t15;
            }
            if (v39 == 0) {
                goto L_8c1bd3ee;
            }
        }
        call_8c1bda48(o);
L_8c1bd3ee:;
        t8 = operation_8c01d858(v28, 0x80, 6, 1);
        if (t8 == 0) {
            if (((o->f68 & 0x20)) != 0) {
                v44 = (int)0;
            } else {
                t16 = operation_8c01d844((int)(g_8c41cba0 + 0x110), 0x80, 6, 1);
                v44 = (int)t16;
            }
            if (v44 == 0) {
                goto L_8c1bd442;
            }
        }
        operation_8c1bdaa4((void *)o);
L_8c1bd442:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 4)) == 0) {
            if (((o->f68 & 0x20)) != 0) {
                v50 = (int)0;
            } else {
                t17 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 4);
                v50 = (int)t17;
            }
            if (v50 == 0) {
                goto L_8c1bd488;
            }
        }
        operation_8c1bdd4c((void *)o);
L_8c1bd488:;
        if (((*(int *)(g_8c41cba0 + 0x28) & 2)) == 0) {
            if (((o->f68 & 0x20)) != 0) {
                v55 = (int)0;
            } else {
                t18 = operation_8c01d8a8((void *)((g_8c41cba0 + 0x110)), 2);
                v55 = (int)t18;
            }
            if (v55 == 0) {
                goto L_8c1bd4c8;
            }
        }
        call_8c1bddbc(o);
    }
L_8c1bd4c8:;
    if (o->f78 != 0 && !(7.5f > (float)o->f64)) {
        call_8c199b74((void *)(o->f78));
    }
    call_8c0db30c(o);
    interpolate_view_parameters((void *)o);
    update_view_nodes((void *)o, (void *)(((char *)o + 0x2c)));
}
