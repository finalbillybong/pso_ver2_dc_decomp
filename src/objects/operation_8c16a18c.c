typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_1ac Arg0_1ac;
typedef struct Arg0_1ac_14 Arg0_1ac_14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_20 S_vv1_20;
typedef struct S_vv1_c S_vv1_c;
typedef struct S_vv24 S_vv24;
struct Object {
    char unknown0[0x1ac];
    Arg0_1ac *f1ac;
};
struct Arg0_1ac {
    char unknown0[0x14];
    Arg0_1ac_14 *f14;
};
struct S_vv1 {
    int f00;
    char unknown4[0x8];
    S_vv1_c *f0c;
    char unknown10[0x10];
    S_vv1_20 *f20;
};
struct S_vv24 {
    char unknown0[0xe8];
    int fe8;
};
extern int g_8c317ab0;
extern int g_8c4db3a8;
extern int g_8c4db3b0;
extern int hierarchy_is_active(void *);
extern int call_8c169528(S_vv1 *);
int operation_8c16a18c(Object *o, int a1)
{
    S_vv1 *v1;
    int v2;
    int v54;
    S_vv24 *v24;
    int v3;
    int t1;
    int t2;
    int t3;
    g_8c4db3a8 = a1;
    g_8c4db3b0 = 0;
    v1 = (S_vv1 *)o->f1ac->f14;
    while (v1 != 0) {
        v2 = (int)(v1->f00 == g_8c317ab0);
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
                if (g_8c4db3a8 == v24->fe8) {
                    v54 = (int)v1;
                    goto L_8c16a206;
                }
                g_8c4db3b0 += 1;
            }
        }
        t3 = call_8c169528(v1);
        if (t3 != 0) {
            v24 = (S_vv24 *)/* ? clobbered */ 0;
            v54 = (int)t3;
            goto L_8c16a206;
        }
        v1 = (S_vv1 *)v1->f0c;
    }
    v24 = (S_vv24 *)/* ? clobbered */ 0;
    v54 = (int)0;
L_8c16a206:;
    return (int)(v54);
}
