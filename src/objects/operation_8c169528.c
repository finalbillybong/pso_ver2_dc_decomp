typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_14 Arg0_14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_14 S_vv1_14;
typedef struct S_vv1_20 S_vv1_20;
typedef struct S_vv1_c S_vv1_c;
typedef struct S_vv24 S_vv24;
typedef struct S_vv47 S_vv47;
typedef struct S_vv47_20 S_vv47_20;
typedef struct S_vv47_c S_vv47_c;
typedef struct S_vv70 S_vv70;
struct Object {
    char unknown0[0x14];
    Arg0_14 *f14;
};
struct S_vv1 {
    int f00;
    char unknown4[0x8];
    S_vv1_c *f0c;
    char unknown10[0x4];
    S_vv1_14 *f14;
    char unknown18[0x8];
    S_vv1_20 *f20;
};
struct S_vv24 {
    char unknown0[0xe8];
    int fe8;
};
struct S_vv47 {
    int f00;
    char unknown4[0x8];
    S_vv47_c *f0c;
    char unknown10[0x10];
    S_vv47_20 *f20;
};
struct S_vv70 {
    char unknown0[0xe8];
    int fe8;
};
extern int hierarchy_is_active(void *);
extern int call_8c169528(S_vv47 *);
S_vv1 *operation_8c169528(Object *o)
{
    S_vv1 *v1;
    int v2;
    int v3;
    S_vv24 *v24;
    S_vv47 *v47;
    int v48;
    int v100;
    S_vv70 *v70;
    int v49;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    v1 = (S_vv1 *)o->f14;
    while (v1 != 0) {
        v2 = (int)((int)v1->f00 == *(int *)0x8c317ab0);
        v3 = (int)0;
        if (v2 != 0) {
            t1 = hierarchy_is_active((void *)v1);
            if (t1 != 0) {
                v3 = (int)1;
            }
        }
        if (v3 != 0) {
            t2 = hierarchy_is_active((void *)(v1->f20));
            if (t2 == 0) {
                v24 = (S_vv24 *)0;
            } else {
                v24 = (S_vv24 *)v1->f20;
            }
            if (v24 != 0) {
                if (*(int *)0x8c4db3a8 == (int)v24->fe8) {
                    return v1;
                }
                *(int *)0x8c4db3b0 += 1;
            }
        }
        v47 = (S_vv47 *)v1->f14;
        while (v47 != 0) {
            v48 = (int)((int)v47->f00 == *(int *)0x8c317ab0);
            v49 = (int)0;
            if (v48 != 0) {
                t3 = hierarchy_is_active((void *)v47);
                if (t3 != 0) {
                    v49 = (int)1;
                }
            }
            if (v49 != 0) {
                t4 = hierarchy_is_active((void *)(v47->f20));
                if (t4 == 0) {
                    v70 = (S_vv70 *)0;
                } else {
                    v70 = (S_vv70 *)v47->f20;
                }
                if (v70 != 0) {
                    if (*(int *)0x8c4db3a8 == (int)v70->fe8) {
                        v100 = (int)v47;
                        goto L_8c1695e6;
                    }
                    *(int *)0x8c4db3b0 += 1;
                }
            }
            t5 = call_8c169528(v47);
            if (t5 != 0) {
                v70 = (S_vv70 *)/* ? clobbered */ 0;
                v100 = (int)t5;
                goto L_8c1695e6;
            }
            v47 = (S_vv47 *)v47->f0c;
        }
        v70 = (S_vv70 *)/* ? clobbered */ 0;
        v100 = (int)0;
L_8c1695e6:;
        if (v100 != 0) {
            return (S_vv1 *)(v100);
        }
        v1 = (S_vv1 *)v1->f0c;
    }
    return 0;
}
