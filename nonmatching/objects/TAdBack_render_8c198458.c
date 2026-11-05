/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c198458
 * function: TAdBack_render_8c198458
 * language: c
 * reference size: 660 bytes
 * compiled size: 652 bytes (-1.2%)
 * differing lines: 156 of 285 reference instruction lines
 * differing bytes: 537
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction scheduling, instruction or operand order; review found and fixed behaviour defects
 *   of the generator draft; not proven equivalent to the original; compiled size differs from the
 *   reference by -8 bytes
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2
 *   (emulator A/B: RAM, trace and sampled call I/O); not proof
 * class header: src/include/classes/TAdBack.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc420 S_g8c4dc420;
typedef struct S_g8c4dc420_42c S_g8c4dc420_42c;
typedef struct S_g8c4dc420_42c_18 S_g8c4dc420_42c_18;
typedef struct S_g8c4dc420_42c_28 S_g8c4dc420_42c_28;
typedef struct S_g8c4dc420_42c_38 S_g8c4dc420_42c_38;
typedef struct S_g8c4dc420_42c_48 S_g8c4dc420_42c_48;
typedef struct S_g8c4dc420_42c_8 S_g8c4dc420_42c_8;
typedef struct S_g8c4dc424 S_g8c4dc424;
typedef struct S_g8c4dc428 S_g8c4dc428;
typedef struct S_g8c4dc42c S_g8c4dc42c;
typedef struct S_g8c4dc430 S_g8c4dc430;
typedef struct S_g8c4dc434 S_g8c4dc434;
typedef struct S_g8c4dc438 S_g8c4dc438;
typedef struct S_g8c4dc43c S_g8c4dc43c;
typedef struct Object Object;
struct Object {
    char unknown0[0x2c];
    short f2c;
    short f2e;
    short f30;
    short f32;
    short f34;
    short f36;
    short f38;
    short f3a;
    short f3c;
    short f3e;
};
struct S_g8c4dc420 {
    char unknown0[0x42c];
    S_g8c4dc420_42c *f42c;
};
struct S_g8c4dc420_42c {
    char unknown0[0x8];
    S_g8c4dc420_42c_8 *f08;
    int f0c;
    char unknown10[0x8];
    S_g8c4dc420_42c_18 *f18;
    int f1c;
    char unknown20[0x8];
    S_g8c4dc420_42c_28 *f28;
    int f2c;
    char unknown30[0x8];
    S_g8c4dc420_42c_38 *f38;
    int f3c;
    char unknown40[0x8];
    S_g8c4dc420_42c_48 *f48;
    int f4c;
};
struct S_g8c4dc420_42c_38 {
    char unknown0[0x4];
    int f04;
};
struct S_g8c4dc420_42c_48 {
    char unknown0[0x4];
    int f04;
};
struct S_g8c4dc420_42c_8 {
    char unknown0[0x4];
    int f04;
};
struct S_g8c4dc420_42c_18 {
    char unknown0[0x4];
    int f04;
};
struct S_g8c4dc420_42c_28 {
    char unknown0[0x4];
    int f04;
};
extern S_g8c4dc420 *g_8c4dc420;
extern S_g8c4dc424 *g_8c4dc424;
extern S_g8c4dc428 *g_8c4dc428;
extern S_g8c4dc42c *g_8c4dc42c;
extern S_g8c4dc430 *g_8c4dc430;
extern S_g8c4dc434 *g_8c4dc434;
extern S_g8c4dc438 *g_8c4dc438;
extern S_g8c4dc43c *g_8c4dc43c;
extern char g_8c31c794[];
extern void call_8c0cd63c(void *, short, short);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void call_8c3827d8(void *);
extern void call_8c3aa702(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c37eb1c(void *, int, int, float);
static inline void blk(Object *o, void *g, short a, short b, int k, int k2)
{
    call_8c0cd63c(g, a, b);
    g_8c4dc424 = (S_g8c4dc424 *)(*(S_g8c4dc420_42c_8 **)((char *)g_8c4dc420->f42c + k))->f04;
    g_8c4dc428 = (S_g8c4dc428 *)*(int *)((char *)g_8c4dc420->f42c + k2);
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((char *)o + 0x20);
    call_8c3827d8(g_8c4dc428);
    call_8c3aa702(g_8c4dc424);
    njPopMatrixEx_8c38ad10();
}
void TAdBack_render_8c198458(Object *o)
{
    blk(o, g_8c4dc42c, o->f2c, o->f36, 0x38, 0x3c);
    blk(o, g_8c4dc430, o->f2e, o->f38, 0x48, 0x4c);
    blk(o, g_8c4dc434, o->f30, o->f3a, 0x08, 0x0c);
    blk(o, g_8c4dc438, o->f32, o->f3c, 0x18, 0x1c);
    blk(o, g_8c4dc43c, o->f34, o->f3e, 0x28, 0x2c);
    call_8c37eb1c((void *)g_8c31c794, 0, 0, -150.0f);
    call_8c37eb1c((g_8c31c794 + 0x20), 1, 0, -150.0f);
    call_8c37eb1c((g_8c31c794 + 0x40), 2, 0, -150.0f);
    call_8c37eb1c((g_8c31c794 + 0x60), 3, 0, -150.0f);
    call_8c37eb1c((g_8c31c794 + 0x80), 4, 0, -150.0f);
    call_8c37eb1c((g_8c31c794 + 0xa0), 5, 0, -150.0f);
    call_8c37eb1c((g_8c31c794 + 0xc0), 6, 0, -150.0f);
    call_8c37eb1c((g_8c31c794 + 0xe0), 7, 0, -150.0f);
}
