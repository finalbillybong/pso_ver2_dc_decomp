/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0902bc
 * function: load_assets_ene_me1_mb_8c0902bc
 * language: c
 * reference size: 440 bytes
 * compiled size: 440 bytes (+0.0%)
 * differing lines: 4 of 155 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c469e34 S_L8c469e34;
typedef struct S_c8c03ef88 S_c8c03ef88;
typedef struct S_c8c03ef88_4 S_c8c03ef88_4;
typedef struct S_g8c469e10 S_g8c469e10;
typedef struct S_g8c469e10_42c S_g8c469e10_42c;
typedef struct S_g8c469e10_42c_18 S_g8c469e10_42c_18;
typedef struct S_g8c469e10_42c_8 S_g8c469e10_42c_8;
typedef struct S_vv5_0 S_vv5_0;
struct S_L8c469e34 {
    float f00;
    float f04;
    float f08;
};
struct S_g8c469e10 {
    char unknown0[0x42c];
    S_g8c469e10_42c *f42c;
};
struct S_g8c469e10_42c {
    char unknown0[0x8];
    S_g8c469e10_42c_8 *f08;
    char unknownc[0xc];
    S_g8c469e10_42c_18 *f18;
};
struct S_c8c03ef88 {
    char unknown0[0x4];
    S_c8c03ef88_4 *f04;
};
struct S_c8c03ef88_4 {
    char unknown0[0x4];
    int f04;
};
extern S_g8c469e10 *g_8c469e10;
extern int g_8c469e14;
extern int g_8c469e1c;
extern int g_8c469e20;
extern int g_8c469e24;
extern int g_8c469e28;
extern int g_8c469e2c;
extern int g_8c469e30;
extern S_L8c469e34 g_8c469e34;
extern char g_8c300a74[];
extern int operation_8c05bbf8(void);
extern int operation_8c059f44(void *, int);
extern int operation_8c059f04(int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
extern int game_malloc_8c011ecc(int);
extern void initialize_vector_array(void *, void *);
extern S_c8c03ef88 *call_8c03ef88(int, int);
extern void call_8c0c7628(void);
void load_assets_ene_me1_mb_8c0902bc(void)
{
    int v5;
    int v4;
    char *v10;
    char *v11;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    S_c8c03ef88 *t10;
    S_c8c03ef88 *t11;
    S_c8c03ef88 *t12;
    S_c8c03ef88 *t13;
    (&g_8c469e34)->f00 = 0.0f;
    (&g_8c469e34)->f04 = 0.0f;
    (&g_8c469e34)->f08 = 0.0f;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = operation_8c059f44((void *)((void *)0x8c3009d8), (int)(g_8c300a74 + 0x148));
        g_8c469e10 = (S_g8c469e10 *)(int)(t2);
    } else {
        t3 = operation_8c059f04((int)((void *)0x8c3009d8));
        g_8c469e10 = (S_g8c469e10 *)(int)(t3);
    }
    v4 = (int)0;
    while (3 > v4) {
        v5 = (int)(v4 << 2);
        t4 = record24_8c17948c((int)(*(S_vv5_0 **)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c284f80)))));
        *(int *)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c469de0))) = (int)(t4);
        t5 = record30_8c1794a0((int)(*(S_vv5_0 **)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c284f8c)))));
        *(int *)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c469dec))) = (int)(t5);
        t6 = block32_8c1794b4((int)(*(S_vv5_0 **)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c284f98)))));
        *(int *)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c469df8))) = (int)(t6);
        t7 = record30_8c1794c8((int)(*(S_vv5_0 **)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c284fa4)))));
        *(int *)((char *)((char *)v5 + 0x0) + ((int)((void *)0x8c469e04))) = (int)(t7);
        v4 = (int)(v4 + 1);
    }
    g_8c469e14 = 0;
    t8 = game_malloc_8c011ecc(0xc);
    if (t8 != 0) {
        initialize_vector_array((void *)t8, (void *)(g_8c469e10->f42c->f18));
    }
    g_8c469e1c = (int)(t8);
    t9 = game_malloc_8c011ecc(0xc);
    if (t9 != 0) {
        initialize_vector_array((void *)t9, (void *)(g_8c469e10->f42c->f08));
    }
    g_8c469e20 = (int)(t9);
    v10 = (char *)g_8c469e10->f42c->f18;
    t10 = call_8c03ef88((int)(v10), 3);
    g_8c469e24 = t10->f04->f04 + 4;
    t11 = call_8c03ef88((int)(v10), 2);
    g_8c469e28 = t11->f04->f04 + 4;
    v11 = (char *)g_8c469e10->f42c->f08;
    t12 = call_8c03ef88((int)(v11), 3);
    g_8c469e2c = t12->f04->f04 + 4;
    t13 = call_8c03ef88((int)(v11), 2);
    g_8c469e30 = t13->f04->f04 + 4;
    call_8c0c7628();
}
