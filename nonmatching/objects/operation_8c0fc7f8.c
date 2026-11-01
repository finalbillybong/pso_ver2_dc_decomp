/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fc7f8
 * function: operation_8c0fc7f8
 * language: c
 * reference size: 424 bytes
 * compiled size: 424 bytes (+0.0%)
 * differing lines: 2 of 176 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_30_4 Arg0_30_4;
typedef struct Arg0_30_8 Arg0_30_8;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10_0 S_vv10_0;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_20 S_vv11_20;
typedef struct S_vv1_20 S_vv1_20;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_20 S_vv2_20;
struct Object {
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x8];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x10];
    int f58;
    char unknown5c[0x14];
    Vector3 f70;
};
struct Arg0_30 {
    Arg0_30_0 *f00;
    Arg0_30_4 *f04;
    Arg0_30_8 *f08;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x408];
    int f408;
};
struct S_vv1 {
    char unknown0[0x20];
    S_vv1_20 *f20;
};
struct Arg1 {
    char unknown0[0x2bc];
    int f2bc;
    char unknown2c0[0xcc];
    int f38c;
};
struct S_vv2 {
    char unknown0[0x20];
    S_vv2_20 *f20;
};
struct S_vv11 {
    char unknown0[0x8];
    float f08;
    char unknownc[0x14];
    S_vv11_20 *f20;
    int f24;
};
extern Vector3 g_8c30aa64;
extern S_g8c467180 *g_8c467180;
extern void call_8c0e196c(void *, void *);
extern void operation_8c0e226c(int, int);
extern void initialize_fields_8c0e24e8(void *);
extern int operation_8c04b8dc(void *);
extern int operation_8c04c630(int);
void operation_8c0fc7f8(Object *o, Arg1 *a1)
{
    int v10;
    int t3;
    int v6;
    int v24;
    int t2;
    int t1;
    S_vv11 *v11;
    S_vv1 *v1;
    S_vv2 *v2;
    int t4;
    call_8c0e196c((void *)((0x2c + (char *)o)), (void *)((void *)0x8c30a8e8));
    *(&o->f70) = *(&g_8c30aa64);
    v1 = (S_vv1 *)o->f30->f04;
    operation_8c0e226c((int)v1, (int)(g_8c467180->f2c->f408));
    initialize_fields_8c0e24e8((void *)v1);
    t3 = operation_8c04b8dc((void *)(v1->f20));
    v2 = (S_vv2 *)o->f30->f00;
    t1 = operation_8c04c630((int)(a1->f38c));
    operation_8c0e226c((int)v2, t1);
    initialize_fields_8c0e24e8((void *)v2);
    o->f40 = (float)(unsigned int)operation_8c04b8dc((void *)(v2->f20));
    o->f44 = 99.0f;
    if (!(0 == ((a1->f2bc & 1)))) {
        v6 = 0;
    } else {
        if (((a1->f2bc & 2)) != 0) {
            v6 = (int)1;
        } else {
            t1 = a1->f2bc & 4;
            if (!(((t1)) == 0)) {
                v6 = 2;
            } else {
                if (((8 & a1->f2bc)) != 0) {
                    int pm5;
                    pm5 = 3;
                    v6 = (int)pm5;
                } else {
                    v6 = (int)4;
                }
            }
        }
    }
    v10 = (v6 << 2);
    v11 = (S_vv11 *)o->f30->f08;
    operation_8c0e226c((int)v11, (int)(*(S_vv10_0 **)(((char *)v10 + 0x0) + ((int)((void *)0x8c30aa3c)))));
    initialize_fields_8c0e24e8((void *)v11);
    v11->f08 = (float)(unsigned int)t3 + 10.0f;
    v11->f24 = (*(int *)(((int)((void *)0x8c30aa50)) + ((char *)v10 + 0x0)));
    t4 = operation_8c04b8dc((void *)(v11->f20));
    v10 = t4 + t3;
    v24 = (v10);
    if ((float)(unsigned int)v24 > o->f40) {
        o->f40 = (float)(unsigned int)v24;
    }
    o->f40 = 38.0f + o->f40;
    o->f3c = 444.0f - o->f44;
    o->f58 = 0;
}
