/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c151f38
 * function: operation_8c151f38
 * language: c
 * reference size: 776 bytes
 * compiled size: 776 bytes (+0.0%)
 * differing lines: 118 of 314 reference instruction lines
 * differing bytes: 57
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
typedef struct S_L8c4da924 S_L8c4da924;
typedef struct S_L8c4da964 S_L8c4da964;
typedef struct S_c8c03ef88 S_c8c03ef88;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
typedef struct S_frame_10 S_frame_10;
typedef struct S_frame_4 S_frame_4;
typedef struct S_frame_8 S_frame_8;
typedef struct S_frame_c S_frame_c;
typedef struct S_g8c4da884 S_g8c4da884;
typedef struct S_g8c4da884_42c S_g8c4da884_42c;
typedef struct S_g8c4da884_42c_138 S_g8c4da884_42c_138;
typedef struct S_g8c4da9e4 S_g8c4da9e4;
typedef struct S_g8c4da9e4_4 S_g8c4da9e4_4;
typedef struct S_g8c4da9ec S_g8c4da9ec;
typedef struct S_g8c4da9ec_4 S_g8c4da9ec_4;
typedef struct S_g8c4da9f4 S_g8c4da9f4;
typedef struct S_g8c4da9f4_4 S_g8c4da9f4_4;
typedef struct S_vv15_0 S_vv15_0;
typedef struct S_vv17_0 S_vv17_0;
typedef struct S_vv6_0 S_vv6_0;
typedef struct S_vv7 S_vv7;
struct S_g8c4da884 {
    char unknown0[0x42c];
    S_g8c4da884_42c *f42c;
};
struct S_g8c4da884_42c {
    char unknown0[0x138];
    S_g8c4da884_42c_138 *f138;
    char unknown13c[0xc];
    int f148;
};
struct S_c8c03ef88 {
    int f00;
};
struct Frame {
    S_frame_0 *f00;
    S_frame_4 *f04;
    S_frame_8 *f08;
    S_frame_c *f0c;
    S_frame_10 *f10;
    int f14;
    char unknown18[0x10];
};
struct S_vv7 {
    char unknown0[0x30];
    int f30;
};
struct S_L8c4da924 {
    char unknown0[0x4];
    S_c8c03ef88 *f04;
    int f08;
};
struct S_L8c4da964 {
    char unknown0[0x4];
    int f04;
};
struct S_g8c4da9e4 {
    char unknown0[0x4];
    S_g8c4da9e4_4 *f04;
};
struct S_g8c4da9e4_4 {
    char unknown0[0x4];
    int f04;
};
struct S_g8c4da9ec {
    char unknown0[0x4];
    S_g8c4da9ec_4 *f04;
};
struct S_g8c4da9ec_4 {
    char unknown0[0x4];
    int f04;
};
struct S_g8c4da9f4 {
    char unknown0[0x4];
    S_g8c4da9f4_4 *f04;
};
struct S_g8c4da9f4_4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c4d9b60;
extern int g_8c4da870;
extern int g_8c4da874;
extern int g_8c4da878;
extern int g_8c4da87c;
extern int g_8c4da880;
extern S_g8c4da884 *g_8c4da884;
extern int g_8c4da88c;
extern S_g8c4da9e4 *g_8c4da9e4;
extern S_c8c03ef88 *g_8c4da9e8;
extern S_g8c4da9ec *g_8c4da9ec;
extern S_c8c03ef88 *g_8c4da9f0;
extern S_g8c4da9f4 *g_8c4da9f4;
extern int g_8c4daa20;
extern int g_8c4daa24;
extern int g_8c4daa28;
extern S_L8c4da924 g_8c4da924;
extern S_L8c4da964 g_8c4da964;
extern int game_malloc_8c011ecc(int);
extern void initialize_vector_array(void *, void *);
extern S_c8c03ef88 *call_8c03ef88(int, int);
extern int call_8c0c2cc8(void *, void *);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void operation_8c151f38(void)
{
    Frame frame;
    int v3;
    int v6;
    int v10;
    int v12;
    int v13;
    int v15;
    int v17;
    int t1;
    int t26;
    int t27;
    int v4;
    int v5;
    int v11;
    S_vv7 *v7;
    S_c8c03ef88 *t2;
    S_c8c03ef88 *t3;
    S_c8c03ef88 *t4;
    S_c8c03ef88 *t5;
    S_c8c03ef88 *t6;
    S_c8c03ef88 *t7;
    int v14;
    S_c8c03ef88 *t9;
    int t10;
    S_c8c03ef88 *t11;
    S_c8c03ef88 *t12;
    S_c8c03ef88 *t13;
    S_c8c03ef88 *t14;
    S_c8c03ef88 *t15;
    S_c8c03ef88 *t16;
    S_c8c03ef88 *t17;
    S_c8c03ef88 *t18;
    S_c8c03ef88 *t19;
    S_c8c03ef88 *t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int v16;
    int t8;
    g_8c4da884 = (S_g8c4da884 *)(int)(g_8c4d9b60);
    t1 = game_malloc_8c011ecc(0xc);
    if (t1 != 0) {
        initialize_vector_array((void *)t1, (void *)(g_8c4da884->f42c->f138));
    }
    g_8c4da88c = (int)(t1);
    v3 = (int)g_8c4da884->f42c->f148;
    t2 = call_8c03ef88(v3, 0x44);
    t2->f00 |= 8;
    t3 = call_8c03ef88(v3, 0x39);
    t3->f00 |= 8;
    t4 = call_8c03ef88(v3, 0x27);
    t4->f00 |= 8;
    t5 = call_8c03ef88(v3, 0x3c);
    t5->f00 |= 8;
    t6 = call_8c03ef88(v3, 0x3f);
    v4 = (int)0;
    t6->f00 |= 8;
    while (5 > v4) {
        t7 = call_8c03ef88(v3, (int)(*(short *)((char *)0x8c315ff8 + (v4 << 1))));
        *(S_c8c03ef88 **)((char *)&(&frame)->f14 + (v4 << 2)) = t7;
        v4 = (int)(v4 + 1);
    }
    v5 = (int)0;
    while (5 > v5) {
        v6 = (int)(v5 << 2);
        v7 = (S_vv7 *)*(S_vv6_0 **)((char *)((char *)v6 + 0x0) + ((int)(&(&frame)->f14)));
        v7->f30 = 0;
        t8 = game_malloc_8c011ecc(0xc);
        if (t8 != 0) {
            initialize_vector_array((void *)t8, (void *)v7);
        }
        *(int *)((char *)((char *)v6 + 0x0) + ((int)((void *)0x8c4da890))) = (int)(t8);
        v5 = (int)(v5 + 1);
    }
    v10 = (int)0;
    v11 = (int)g_8c4da884->f42c->f138;
    while (5 > v10) {
        t9 = call_8c03ef88(v11, (int)(*(short *)((char *)0x8c315ff8 + (v10 << 1))));
        *(S_c8c03ef88 **)((char *)&(&frame)->f00 + (v10 << 2)) = t9;
        v10 = (int)(v10 + 1);
    }
    t10 = call_8c0c2cc8((void *)((&frame)->f00), (void *)((void *)0x8c4da8a4));
    call_8c0c2cc8((void *)((&frame)->f04), (void *)(&*(int *)((char *)0x8c4da8a4 + (t10 << 2))));
    t26 = call_8c0c2cc8((void *)((&frame)->f08), (void *)((void *)&g_8c4da924));
    t11 = call_8c03ef88(v11, 0x3b);
    v12 = (int)(t26 << 2);
    *(S_c8c03ef88 **)((char *)&g_8c4da924 + (v12)) = t11;
    t12 = call_8c03ef88(v11, 0x3c);
    *(S_c8c03ef88 **)((char *)&g_8c4da924.f04 + (v12)) = t12;
    *(int *)((char *)&g_8c4da924.f08 + (v12)) = 0;
    t27 = call_8c0c2cc8((void *)((&frame)->f0c), (void *)((void *)&g_8c4da964));
    t13 = call_8c03ef88(v11, 0x3a);
    v13 = (int)(t27 << 2);
    *(S_c8c03ef88 **)((char *)&g_8c4da964 + (v13)) = t13;
    *(int *)((char *)&g_8c4da964.f04 + (v13)) = 0;
    call_8c0c2cc8((void *)((&frame)->f10), (void *)((void *)0x8c4da9a4));
    t14 = call_8c03ef88(v11, 0x44);
    g_8c4da9e4 = (S_g8c4da9e4 *)t14;
    t15 = call_8c03ef88(v11, 0x39);
    g_8c4da9e8 = t15;
    t16 = call_8c03ef88(v11, 0x27);
    g_8c4da9ec = (S_g8c4da9ec *)t16;
    t17 = call_8c03ef88(v11, 0x3c);
    g_8c4da9f0 = t17;
    t18 = call_8c03ef88(v11, 0x3f);
    g_8c4da9f4 = (S_g8c4da9f4 *)t18;
    v14 = (int)0;
    while (5 > v14) {
        v15 = (int)(v14 << 2);
        t19 = call_8c03ef88(v11, (int)(*(S_vv15_0 **)((char *)((char *)v15 + 0x0) + ((int)((void *)0x8c315dd0)))));
        *(S_c8c03ef88 **)((char *)((char *)v15 + 0x0) + ((int)((void *)0x8c4da9f8))) = t19;
        v14 = (int)(v14 + 1);
    }
    v16 = (int)0;
    while (5 > v16) {
        v17 = (int)(v16 << 2);
        t20 = call_8c03ef88(v11, (int)(*(S_vv17_0 **)((char *)((char *)v17 + 0x0) + ((int)((void *)0x8c315de4)))));
        *(S_c8c03ef88 **)((char *)((char *)v17 + 0x0) + ((int)((void *)0x8c4daa0c))) = t20;
        v16 = (int)(v16 + 1);
    }
    g_8c4daa20 = (int)(g_8c4da9e4->f04->f04);
    g_8c4daa24 = (int)(g_8c4da9ec->f04->f04);
    g_8c4daa28 = (int)(g_8c4da9f4->f04->f04);
    t21 = record24_8c17948c(0x25);
    g_8c4da870 = (int)(t21);
    t22 = record30_8c1794a0(0x25);
    g_8c4da874 = (int)(t22);
    t23 = block32_8c1794b4(0x25);
    g_8c4da878 = (int)(t23);
    t24 = record30_8c1794c8(0x25);
    g_8c4da87c = (int)(t24);
    t25 = record30_8c1794c8(0x2a);
    g_8c4da880 = (int)(t25);
}
