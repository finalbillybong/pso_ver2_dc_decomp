typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db3ac S_g8c4db3ac;
typedef struct Object Object;
typedef struct Arg0_1ac Arg0_1ac;
typedef struct Arg0_1ac_14 Arg0_1ac_14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_20 S_vv1_20;
typedef struct S_vv1_c S_vv1_c;
typedef struct S_vv25 S_vv25;
typedef struct S_vv26 S_vv26;
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
struct S_vv26 {
    int f00;
};
struct S_vv25 {
    char unknown0[0xe8];
    int fe8;
};
extern int g_8c317ab0;
extern S_g8c4db3ac *g_8c4db3ac;
extern int g_8c4db3b4;
extern int hierarchy_is_active(void *);
extern void call_8c169de0(S_vv1 *);
int operation_8c16ad38(Object *o, int a1)
{
    S_vv1 *v1;
    int v2;
    int v12;
    S_vv25 *v25;
    S_vv26 *v26;
    int t2;
    g_8c4db3ac = (S_g8c4db3ac *)a1;
    g_8c4db3b4 = 0;
    v1 = (S_vv1 *)o->f1ac->f14;
    while (v1 != 0) {
        v2 = (int)(v1->f00 == g_8c317ab0);
        v12 = (int)0;
        if (v2 != 0 && hierarchy_is_active((void *)v1) != 0) {
            v12 = (int)1;
        }
        if (v12 != 0) {
            t2 = hierarchy_is_active((void *)(v1->f20));
            if (t2 == 0) {
                v25 = (S_vv25 *)0;
            } else {
                v25 = (S_vv25 *)v1->f20;
            }
            if (v25 != 0) {
                v26 = (S_vv26 *)g_8c4db3ac;
                g_8c4db3ac = (S_g8c4db3ac *)((int)v26 + 4);
                v26->f00 = (int)(v25->fe8);
                g_8c4db3b4 += 1;
            }
        }
        call_8c169de0(v1);
        v1 = (S_vv1 *)v1->f0c;
    }
    return (int)(g_8c4db3b4);
}
