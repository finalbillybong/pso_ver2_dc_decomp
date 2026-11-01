/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21ec90
 * function: operation_8c21ec90
 * language: c
 * reference size: 312 bytes
 * compiled size: 312 bytes (+0.0%)
 * differing lines: 14 of 114 reference instruction lines
 * differing bytes: 24
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
typedef struct S_g8c505980 S_g8c505980;
typedef struct S_g8c505980_0 S_g8c505980_0;
typedef struct Object Object;
typedef struct Arg0_130 Arg0_130;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg2 Arg2;
typedef struct Arg2_sac Arg2_sac;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    unsigned short f20;
    char unknown22[0x1a];
    Vector3 f3c;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x80];
    int fe8;
    char unknownec[0xc];
    float ff8;
    char unknownfc[0x1c];
    void *f118;
    char unknown11c[0x14];
    Arg0_130 *f130;
    char unknown134[0x248];
    int f37c;
};
struct Arg2_sac {
    char unknown0[0x8];
    Vector3 f08;
};
struct Arg2 {
    char unknown0[0xb0];
    int fb0;
    char unknownb4[0x10];
    float fc4;
};
struct S_g8c505980 {
    S_g8c505980_0 *f00;
};
extern S_g8c505980 *g_8c505980;
extern void TObjPlayer_ctor_3_8c01f4f0(Object *, int, Arg2 *);
extern void operation_8c02656c(void *);
extern int operation_8c1a7530(int);
extern void call_8c01c908(Object *, int, void *, int);
extern void njPushMatrixEx_8c38ae68(int);
extern void njTranslateV_8c382a58(int, void *);
extern void njRotateY_8c37df90(int, void *);
extern void prepare_transform_8c01d020(void *, void *, int, float);
extern void njPopMatrixEx_8c38ad10(void);
extern void operation_8c21f134(int, void *);
Object *operation_8c21ec90(Object *o, int a1, Arg2 *a2)
{
    Object **home = &o;
    int t1;
    (void)home;
    TObjPlayer_ctor_3_8c01f4f0(o, a1, a2);
    o->dispatch = (void *)0x8c2786bc;
    o->f37c = 1;
    *(Vector3 *)&o->f3c = *(Vector3 *)&((Arg2_sac *)((char *)a2 + 0xac))->f08;
    o->f64 = (Arg0_64 *)a2->fb0;
    operation_8c02656c((void *)o);
    o->f118 = &*(int *)((char *)0x8c41cf80 + (o->f20 << 12));
    t1 = operation_8c1a7530((int)o);
    call_8c01c908(o, t1, (void *)(g_8c505980->f00), 1);
    o->ff8 = a2->fc4;
    o->fe8 |= 0x40;
    njPushMatrixEx_8c38ae68(0xe8);
    njTranslateV_8c382a58(0, (void *)(&o->f3c));
    njRotateY_8c37df90(0, (void *)(o->f64));
    prepare_transform_8c01d020((void *)o, (void *)(o->f130), (int)(o->f118), 0.0f);
    njPopMatrixEx_8c38ad10();
    operation_8c21f134((int)o, (void *)(((char *)a2 + 0x50)));
    operation_8c21f134((int)o, (void *)(((char *)a2 + 0x6c)));
    return o;
}
