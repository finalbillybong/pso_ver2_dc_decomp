/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ee474
 * function: operation_8c0ee474
 * language: c
 * reference size: 404 bytes
 * compiled size: 404 bytes (+0.0%)
 * differing lines: 54 of 161 reference instruction lines
 * differing bytes: 78
 * provenance: generator draft (mode switch2)
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
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_g8c46ee80_a8 S_g8c46ee80_a8;
typedef struct S_g8c46ee80_ac S_g8c46ee80_ac;
typedef struct S_g8c46ee80_b0 S_g8c46ee80_b0;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Frame {
    float f00;
    float f04;
    float f08;
    Vector3 f0c;
};
struct S_g8c46ee80 {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
    char unknown9c[0xc];
    S_g8c46ee80_a8 *fa8;
    S_g8c46ee80_ac *fac;
    S_g8c46ee80_b0 *fb0;
};
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    float f20;
    float f24;
    char unknown28[0x4];
    char f2c;
};
extern char g_8c46efd4[];
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void njRotateX_8c37dd28(int, void *);
extern void njRotateZ_8c37e02c(int, void *);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern float call_8c3845f0(void *, Frame *);
extern void njPushMatrixEx_8c38ae68(void);
extern void project_point_to_screen_8c38ad50(int, Arg1 *, void *);
int operation_8c0ee474(Object *o, Arg1 *a1)
{
    Frame frame;
    float t1;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&*(Vector3 *)0x8c308dec;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)((*(S_g8c46ee80 **)0x8c46ee80)->fac));
    njRotateX_8c37dd28(0, (void *)((*(S_g8c46ee80 **)0x8c46ee80)->fa8));
    njRotateZ_8c37e02c(0, (void *)((*(S_g8c46ee80 **)0x8c46ee80)->fb0));
    call_8c3be38c(0, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f0c));
    njPopMatrixEx_8c38ad10();
    (&frame)->f00 = a1->f00 - (*(S_g8c46ee80 **)0x8c46ee80)->f90;
    (&frame)->f04 = a1->f04 - (*(S_g8c46ee80 **)0x8c46ee80)->f94;
    (&frame)->f08 = a1->f08 - (*(S_g8c46ee80 **)0x8c46ee80)->f98;
    if (((&frame)->f00 * (&frame)->f00 + (&frame)->f04 * (&frame)->f04 + (&frame)->f08 * (&frame)->f08) > 122500.0f) {
        o->f2c = 0;
        o->f04 |= 0x10;
        o->f04 |= 1;
        return 0;
    }
    t1 = call_8c3845f0((void *)(&(&frame)->f0c), (Frame *)((&frame)));
    if (!(t1 > 0.0f)) {
        o->f2c = 0;
        o->f04 |= 0x10;
        o->f04 |= 1;
        return 0;
    }
    njPushMatrixEx_8c38ae68();
    project_point_to_screen_8c38ad50(0, a1, (void *)(&o->f20));
    njPopMatrixEx_8c38ad10();
    o->f20 -= *(float *)(g_8c46efd4 + 0xc);
    o->f24 -= *(float *)(g_8c46efd4 + 0x10);
    return 1;
}
