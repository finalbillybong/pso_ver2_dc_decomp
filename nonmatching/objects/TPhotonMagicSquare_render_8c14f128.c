/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c14f128
 * function: TPhotonMagicSquare_render_8c14f128
 * language: c
 * reference size: 320 bytes
 * compiled size: 320 bytes (+0.0%)
 * differing lines: 2 of 111 reference instruction lines
 * differing bytes: 4
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
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_94 Arg0_94;
typedef struct Arg0_b4 Arg0_b4;
typedef struct Arg0_d0 Arg0_d0;
typedef struct Block_p0_a4 {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
} Block_p0_a4;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x2c];
    Arg0_94 *f94;
    char unknown98[0x8];
    float fa0;
    Block_p0_a4 fa4;
    Arg0_b4 *fb4;
    char unknownb8[0x18];
    Arg0_d0 *fd0;
};
struct Frame {
    Block16 f00;
};
extern int g_8c46f560;
extern int g_8c575570;
extern void reset_state_8c391c94(void);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void scale_current_matrix_v_8c37e390(void *);
extern int call_8c18e954(void *, void *);
extern void call_8c38c0f0(void *);
extern void call_8c3addea(void *, void *, float);
extern void njPopMatrixEx_8c38ad10(void);
extern void reset_state_8c391cc4(void);
void TPhotonMagicSquare_render_8c14f128(Object *o)
{
    Frame frame;
    int t1;
    reset_state_8c391c94();
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0xbc)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3827d8((void *)(o->f28));
    scale_current_matrix_v_8c37e390((void *)(((char *)o + 0x6c)));
    *(Block16 *)&(&frame)->f00 = *(Block16 *)&o->fa4;
    t1 = call_8c18e954((void *)(o->fb4), (void *)(o->fd0));
    if (t1 == 0) {
        o->fa4.f04 = 0.5f;
        o->fa4.f08 = 0.5f;
        o->fa4.f0c = 0.5f;
    }
    g_8c46f560 = (int)(g_8c575570);
    g_8c575570 |= 0x10;
    call_8c38c0f0((void *)(&o->fa4));
    call_8c3addea((void *)(o->f38), (void *)(o->f94), o->fa0);
    call_8c38c0f0((void *)((void *)0x8c305fd8));
    g_8c575570 = (int)(g_8c46f560);
    *(Block16 *)&o->fa4 = *(Block16 *)&(&frame)->f00;
    njPopMatrixEx_8c38ad10();
    reset_state_8c391cc4();
}
