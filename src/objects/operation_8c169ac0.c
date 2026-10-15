typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db3b8 S_g8c4db3b8;
typedef struct Object Object;
typedef struct Arg0_14 Arg0_14;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_14 S_vv1_14;
typedef struct S_vv1_20 S_vv1_20;
typedef struct S_vv1_c S_vv1_c;
typedef struct S_vv50 S_vv50;
typedef struct S_vv50_20 S_vv50_20;
typedef struct S_vv50_c S_vv50_c;
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
struct S_g8c4db3b8 {
    int f00;
};
struct S_vv50 {
    int f00;
    char unknown4[0x8];
    S_vv50_c *f0c;
    char unknown10[0x10];
    S_vv50_20 *f20;
};
extern int g_8c317ab0;
extern int g_8c4db3b4;
extern S_g8c4db3b8 *g_8c4db3b8;
extern int hierarchy_is_active(void *);
extern void call_8c169ac0(S_vv50 *);
void operation_8c169ac0(Object *o)
{
    S_vv1 *v1;
    int v2;
    int v12;
    int v25;
    S_vv50 *v50;
    int v51;
    int v61;
    int v74;
    int t2;
    int t4;
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
                g_8c4db3b8->f00 = (int)(v25);
                g_8c4db3b8 = (S_g8c4db3b8 *)((int)g_8c4db3b8 + 4);
                g_8c4db3b4 += 1;
            }
        }
        v50 = (S_vv50 *)v1->f14;
        while (v50 != 0) {
            v51 = (int)(v50->f00 == g_8c317ab0);
            v61 = (int)0;
            if (v51 != 0 && hierarchy_is_active((void *)v50) != 0) {
                v61 = (int)1;
            }
            if (v61 != 0) {
                t4 = hierarchy_is_active((void *)(v50->f20));
                if (t4 == 0) {
                    v74 = (int)0;
                } else {
                    v74 = (int)v50->f20;
                }
                if (v74 != 0) {
                    g_8c4db3b8->f00 = (int)(v74);
                    g_8c4db3b8 = (S_g8c4db3b8 *)((int)g_8c4db3b8 + 4);
                    g_8c4db3b4 += 1;
                }
            }
            call_8c169ac0(v50);
            v50 = (S_vv50 *)v50->f0c;
        }
        v1 = (S_vv1 *)v1->f0c;
    }
}
