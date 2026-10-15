typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db3c0 S_g8c4db3c0;
typedef struct Object Object;
typedef struct Arg0_14 Arg0_14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_14 S_vv1_14;
typedef struct S_vv1_20 S_vv1_20;
typedef struct S_vv1_c S_vv1_c;
typedef struct S_vv70 S_vv70;
typedef struct S_vv70_20 S_vv70_20;
typedef struct S_vv70_c S_vv70_c;
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
struct S_vv70 {
    int f00;
    char unknown4[0x8];
    S_vv70_c *f0c;
    char unknown10[0x10];
    S_vv70_20 *f20;
};
extern int g_8c317ab0;
extern int g_8c4db3b4;
extern S_g8c4db3c0 *g_8c4db3c0;
extern int hierarchy_is_active(void *);
extern int export_state_8c16b234(void *, void *);
extern void call_8c169cf8(S_vv70 *);
void operation_8c169cf8(Object *o)
{
    S_vv1 *v1;
    int v2;
    int v12;
    int v25;
    S_vv70 *v70;
    int v71;
    int v81;
    int v94;
    int t2;
    int t3;
    int t5;
    int t6;
    v1 = (S_vv1 *)o->f14;
    while (v1 != 0) {
        v2 = (int)(v1->f00 == g_8c317ab0);
        v12 = (int)0;
        if (v2 != 0 && hierarchy_is_active((void *)v1) != 0) {
            v12 = (int)1;
        }
        if (v12 != 0) {
            t2 = hierarchy_is_active((void *)(v1->f20));
            if (t2 == 0) {
                v25 = (int)0;
            } else {
                v25 = (int)v1->f20;
            }
            if (v25 != 0) {
                t3 = export_state_8c16b234((void *)v25, g_8c4db3c0);
                if (t3 != 0) {
                    g_8c4db3c0 = (S_g8c4db3c0 *)((int)g_8c4db3c0 + 0x1c);
                    g_8c4db3b4 += 1;
                }
            }
        }
        v70 = (S_vv70 *)v1->f14;
        while (v70 != 0) {
            v71 = (int)(v70->f00 == g_8c317ab0);
            v81 = (int)0;
            if (v71 != 0 && hierarchy_is_active((void *)v70) != 0) {
                v81 = (int)1;
            }
            if (v81 != 0) {
                t5 = hierarchy_is_active((void *)(v70->f20));
                if (t5 == 0) {
                    v94 = (int)0;
                } else {
                    v94 = (int)v70->f20;
                }
                if (v94 != 0) {
                    t6 = export_state_8c16b234((void *)v94, g_8c4db3c0);
                    if (t6 != 0) {
                        g_8c4db3c0 = (S_g8c4db3c0 *)((int)g_8c4db3c0 + 0x1c);
                        g_8c4db3b4 += 1;
                    }
                }
            }
            call_8c169cf8(v70);
            v70 = (S_vv70 *)v70->f0c;
        }
        v1 = (S_vv1 *)v1->f0c;
    }
}
