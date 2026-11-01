/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f4554
 * function: load_assets_ene_df2_bringer_8c0f4554
 * language: c
 * reference size: 716 bytes
 * compiled size: 716 bytes (+0.0%)
 * differing lines: 36 of 285 reference instruction lines
 * differing bytes: 25
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
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct Frame Frame;
typedef struct S_g8c470618 S_g8c470618;
typedef struct S_g8c47061c S_g8c47061c;
typedef struct S_g8c47061c_42c S_g8c47061c_42c;
typedef struct S_g8c47061c_42c_8 S_g8c47061c_42c_8;
typedef struct S_g8c47062c S_g8c47062c;
typedef struct S_g8c47062c_0 S_g8c47062c_0;
typedef struct S_vv10 S_vv10;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_42c S_vv7_42c;
typedef struct S_vv7_42c_8 S_vv7_42c_8;
typedef struct S_vv7_430 S_vv7_430;
typedef struct S_vv7_430_4 S_vv7_430_4;
typedef struct S_x24720 S_x24720;
typedef struct S_x25200 S_x25200;
typedef struct S_x43984 S_x43984;
typedef struct Block_vv10_c {
    float f00;
    float f04;
    float f08;
} Block_vv10_c;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_vv10_24 {
    float f00;
    float f04;
    float f08;
} Block_vv10_24;
struct S_c8c1794c8 {
    char unknown0[0x8];
    float f08;
};
struct S_g8c470618 {
    char unknown0[0xc];
    float f0c;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
    int f18;
    int f1c;
    int f20;
    char unknown24[0x24];
    int f48;
    int f4c;
    int f50;
    int f54;
};
struct S_x24720 {
    float f00;
};
struct S_x25200 {
    float f00;
};
struct S_x43984 {
    float f00;
};
struct S_vv7 {
    char unknown0[0x42c];
    S_vv7_42c *f42c;
    S_vv7_430 *f430;
};
struct S_vv7_42c {
    char unknown0[0x8];
    S_vv7_42c_8 *f08;
};
struct S_g8c47062c {
    S_g8c47062c_0 *f00;
    char unknown4[0x4];
    int f08;
};
struct S_vv10 {
    Vector3 f00;
    Block_vv10_c f0c;
    Vector3 f18;
    Block_vv10_24 f24;
};
struct S_g8c47061c {
    char unknown0[0x42c];
    S_g8c47061c_42c *f42c;
};
struct S_g8c47061c_42c {
    char unknown0[0x8];
    S_g8c47061c_42c_8 *f08;
};
extern Vector3 g_8c470600;
extern S_g8c47061c *g_8c47061c;
extern S_g8c47062c *g_8c47062c;
extern char g_8c309fd8[];
extern char g_8c30a0ac[];
extern int operation_8c05bbf8(void);
extern int operation_8c059f44(void *, int);
extern int operation_8c059f04(int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern S_c8c1794c8 *record30_8c1794c8(int);
extern void operation_8c0f48c4(int, float);
extern int game_malloc_8c011ecc(int);
extern void call_8c118ea4(int, int, float, float, float);
extern void call_8c118f94(int, void *, void *, void *, void *);
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern float normalize_vector_checked(void *);
extern void call_8c0cd588(int, void *, int);
extern void operation_8c103f48(void);
void load_assets_ene_df2_bringer_8c0f4554(void)
{
    Frame frame;
    int v8;
    S_vv7 *v7;
    int t8;
    int v6;
    S_vv10 *v10;
    float v11;
    float v12;
    Vector3 *p;
    Vector3 *q;
    int off;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    S_c8c1794c8 *t7;
    int v9;
    int t9;
    float t10;
    g_8c470600.x = 0.0f;
    g_8c470600.y = 0.0f;
    g_8c470600.z = 0.0f;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = operation_8c059f44((void *)((void *)0x8c309fc8), (int)(g_8c30a0ac + 0x139));
        g_8c47061c = (S_g8c47061c *)t2;
    } else {
        t3 = operation_8c059f04((int)((void *)0x8c309fc8));
        g_8c47061c = (S_g8c47061c *)t3;
    }
    t4 = record24_8c17948c(0xd);
    *(int *)0x8c47060c = (int)(t4);
    t5 = record30_8c1794a0(0xd);
    *(int *)0x8c470610 = (int)(t5);
    t6 = block32_8c1794b4(0xd);
    *(int *)0x8c470614 = (int)(t6);
    t7 = record30_8c1794c8(0xd);
    *(S_c8c1794c8 **)0x8c470618 = t7;
    *(int *)0x8c470628 = *(int *)0x8c470624 = *(int *)0x8c470620 = 0;
    operation_8c0f48c4(4, t7->f08);
    operation_8c0f48c4(5, (*(S_g8c470618 **)0x8c470618)->f0c);
    t8 = game_malloc_8c011ecc(0x18);
    if (t8 != 0) {
        call_8c118ea4(t8, 4, 7.0f, 14.0f, *(float *)(g_8c309fd8 + 0x48));
    }
    g_8c47062c = (S_g8c47062c *)t8;
    (&frame)->f48 = 0x1a;
    (&frame)->f4c = 0x1a;
    (&frame)->f50 = 0x1e;
    (&frame)->f54 = 0x1e;
    v6 = (int)0;
    while (4 > v6) {
        ((S_x24720 *)(v6 * 0xc + (char *)&(&frame)->f18))->f00 = 0.0f;
        ((S_x25200 *)(v6 * 0xc + (char *)&(&frame)->f1c))->f00 = 0.0f;
        ((S_x43984 *)(v6 * 0xc + (char *)&(&frame)->f20))->f00 = 0.0f;
        v6 = (int)(v6 + 1);
    }
    v7 = (S_vv7 *)g_8c47061c;
    off = 0x42c;
    call_8c118f94(t8, (void *)((*(S_vv7_42c **)((char *)v7 + off))->f08), (void *)(*(S_vv7_430_4 **)((char *)((char *)v7->f430 + 0x4) + (*(int *)(g_8c309fd8 + 0x44) << 3))), (void *)(&(&frame)->f48), (void *)(&(&frame)->f18));
    v9 = (int)0;
    v8 = (int)g_8c47062c->f08;
    v10 = (S_vv10 *)g_8c47062c->f00;
    while (v8 > v9) {
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&v10->f00;
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v10->f18;
        vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(&(&frame)->f0c));
        t10 = normalize_vector_checked((void *)(&frame));
        v11 = (float)(t10 * 0.4f);
        p = (Vector3 *)&v10->f0c;
        *p = (&frame)->f0c;
        p->x += (&frame)->f00.f00 * v11;
        p->y += (&frame)->f00.f04 * v11;
        p->z += (&frame)->f00.f08 * v11;
        v12 = (float)(t10 * 0.7f);
        q = (Vector3 *)&v10->f24;
        *q = (&frame)->f0c;
        q->x += (&frame)->f00.f00 * v12;
        q->y += (&frame)->f00.f04 * v12;
        q->z += (&frame)->f00.f08 * v12;
        v10 = (S_vv10 *)((char *)v10 + 48);
        v9 = (int)(v9 + 1);
    }
    t9 = game_malloc_8c011ecc(0x14);
    if (t9 != 0) {
        call_8c0cd588(t9, (void *)(g_8c47061c->f42c->f08), 1);
    }
    *(int *)0x8c470630 = (int)(t9);
    operation_8c103f48();
}
