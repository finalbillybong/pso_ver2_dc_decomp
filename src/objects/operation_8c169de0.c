typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db3ac S_g8c4db3ac;
typedef struct Object Object;
typedef struct Arg0_14 Arg0_14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_14 S_vv1_14;
typedef struct S_vv1_20 S_vv1_20;
typedef struct S_vv1_c S_vv1_c;
typedef struct S_vv25 S_vv25;
typedef struct S_vv26 S_vv26;
typedef struct S_vv52 S_vv52;
typedef struct S_vv52_20 S_vv52_20;
typedef struct S_vv52_c S_vv52_c;
typedef struct S_vv76 S_vv76;
typedef struct S_vv77 S_vv77;
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
struct S_vv26 {
    int f00;
};
struct S_vv25 {
    char unknown0[0xe8];
    int fe8;
};
struct S_vv52 {
    int f00;
    char unknown4[0x8];
    S_vv52_c *f0c;
    char unknown10[0x10];
    S_vv52_20 *f20;
};
struct S_vv77 {
    int f00;
};
struct S_vv76 {
    char unknown0[0xe8];
    int fe8;
};
extern int hierarchy_is_active(void *);
extern void call_8c169de0(S_vv52 *);
void operation_8c169de0(Object *o)
{
    S_vv1 *v1;
    int v2;
    int v12;
    S_vv25 *v25;
    S_vv26 *v26;
    S_vv52 *v52;
    int v53;
    int v63;
    S_vv76 *v76;
    S_vv77 *v77;
    int t2;
    int t4;
    v1 = (S_vv1 *)o->f14;
    while (v1 != 0) {
        v2 = (int)((int)v1->f00 == *(int *)0x8c317ab0);
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
                v26 = (S_vv26 *)*(S_g8c4db3ac **)0x8c4db3ac;
                *(int *)0x8c4db3ac = (int)v26 + 4;
                v26->f00 = (int)(v25->fe8);
                *(int *)0x8c4db3b4 += 1;
            }
        }
        v52 = (S_vv52 *)v1->f14;
        while (v52 != 0) {
            v53 = (int)((int)v52->f00 == *(int *)0x8c317ab0);
            v63 = (int)0;
            if (v53 != 0 && hierarchy_is_active((void *)v52) != 0) {
                v63 = (int)1;
            }
            if (v63 != 0) {
                t4 = hierarchy_is_active((void *)(v52->f20));
                if (t4 == 0) {
                    v76 = (S_vv76 *)0;
                } else {
                    v76 = (S_vv76 *)v52->f20;
                }
                if (v76 != 0) {
                    v77 = (S_vv77 *)*(S_g8c4db3ac **)0x8c4db3ac;
                    *(int *)0x8c4db3ac = (int)v77 + 4;
                    v77->f00 = (int)(v76->fe8);
                    *(int *)0x8c4db3b4 += 1;
                }
            }
            call_8c169de0(v52);
            v52 = (S_vv52 *)v52->f0c;
        }
        v1 = (S_vv1 *)v1->f0c;
    }
}
