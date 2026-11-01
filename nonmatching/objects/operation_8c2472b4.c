/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2472b4
 * function: operation_8c2472b4
 * language: c
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 8 of 87 reference instruction lines
 * differing bytes: 9
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
typedef struct Arg2 Arg2;
struct Frame {
    Vector3 f00;
    Vector3 f0c;
};
struct S_g8c46ee80 {
    char unknown0[0xa8];
    S_g8c46ee80_a8 *fa8;
    S_g8c46ee80_ac *fac;
    S_g8c46ee80_b0 *fb0;
};
struct Arg2 {
    Vector3 f00;
};
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void njRotateX_8c37dd28(int, void *);
extern void njRotateZ_8c37e02c(int, void *);
extern void call_8c3be38c(int, Frame *, Frame *);
extern void njPopMatrixEx_8c38ad10(void);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float call_8c3845f0(Frame *, void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void project_point_to_screen_8c38ad50(int, Arg2 *, int);
int operation_8c2472b4(int a0, int a1, Arg2 *a2)
{
    Frame frame;
    float t1;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&*(Vector3 *)0x8c33b024;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)((*(S_g8c46ee80 **)0x8c46ee80)->fac));
    njRotateX_8c37dd28(0, (void *)((*(S_g8c46ee80 **)0x8c46ee80)->fa8));
    njRotateZ_8c37e02c(0, (void *)((*(S_g8c46ee80 **)0x8c46ee80)->fb0));
    call_8c3be38c(0, (Frame *)((&frame)), (Frame *)((&frame)));
    njPopMatrixEx_8c38ad10();
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&a2->f00;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f0c), (void *)(((char *)*(S_g8c46ee80 **)0x8c46ee80 + 0x90)));
    t1 = call_8c3845f0((Frame *)((&frame)), (void *)(&(&frame)->f0c));
    if (!(t1 > 0.0f)) {
        return 0;
    }
    njPushMatrixEx_8c38ae68();
    project_point_to_screen_8c38ad50(0, a2, a1);
    njPopMatrixEx_8c38ad10();
    return 1;
}
