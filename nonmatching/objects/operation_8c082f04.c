/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c082f04
 * function: operation_8c082f04
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 4 of 66 reference instruction lines
 * differing bytes: 15
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
typedef struct S_L8c469c2c S_L8c469c2c;
typedef struct S_L8c469c2c_10 S_L8c469c2c_10;
typedef struct S_L8c469c2c_10_4 S_L8c469c2c_10_4;
typedef struct S_L8c469c2c_10_4_4 S_L8c469c2c_10_4_4;
typedef struct S_L8c469c2c_c S_L8c469c2c_c;
typedef struct S_L8c469c2c_c_4 S_L8c469c2c_c_4;
typedef struct S_L8c469c2c_c_4_4 S_L8c469c2c_c_4_4;
typedef struct S_g8c469c20 S_g8c469c20;
typedef struct S_g8c469c24 S_g8c469c24;
typedef struct S_g8c469c2c S_g8c469c2c;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x84];
    float fec;
};
struct S_L8c469c2c {
    S_g8c469c2c *f00;
    char unknown4[0x8];
    S_L8c469c2c_c *f0c;
    S_L8c469c2c_10 *f10;
};
struct S_L8c469c2c_c {
    char unknown0[0x4];
    S_L8c469c2c_c_4 *f04;
};
struct S_L8c469c2c_c_4 {
    char unknown0[0x4];
    S_L8c469c2c_c_4_4 *f04;
};
struct S_L8c469c2c_10 {
    char unknown0[0x4];
    S_L8c469c2c_10_4 *f04;
};
struct S_L8c469c2c_10_4 {
    char unknown0[0x4];
    S_L8c469c2c_10_4_4 *f04;
};
extern S_g8c469c20 *g_8c469c20;
extern S_g8c469c24 *g_8c469c24;
extern S_L8c469c2c g_8c469c2c;
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3ac53a(float, void *, void *);
extern void reset_state_8c391c94(void);
extern void call_8c0345cc(void *, int);
extern void call_8c3aa716(S_L8c469c2c_c *);
extern void reset_state_8c391cc4(void);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c082f04(Object *o)
{
    call_8c3827d8(g_8c469c20);
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3ac53a(o->fec, (void *)((&g_8c469c2c)->f00), g_8c469c24);
    reset_state_8c391c94();
    call_8c0345cc((void *)((&g_8c469c2c)->f0c->f04->f04), 0xa);
    call_8c0345cc((void *)((&g_8c469c2c)->f10->f04->f04), 0xa);
    call_8c3aa716((S_L8c469c2c_c *)((&g_8c469c2c)->f0c));
    call_8c3aa716((S_L8c469c2c_c *)((&g_8c469c2c)->f10));
    reset_state_8c391cc4();
    njPopMatrixEx_8c38ad10();
}
