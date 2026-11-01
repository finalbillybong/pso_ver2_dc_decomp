/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c178734
 * function: operation_8c178734
 * language: c
 * reference size: 248 bytes
 * compiled size: 248 bytes (+0.0%)
 * differing lines: 6 of 93 reference instruction lines
 * differing bytes: 6
 * provenance: generator draft (mode bgotoext)
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
typedef struct Object Object;
typedef struct Arg0_358 Arg0_358;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x4];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x2d8];
    int f350;
    float f354;
    Arg0_358 *f358;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern int call_8c18e8a0(void *, int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, Frame *, Frame *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c3bdf60(Frame *, void *);
extern void create_effect_7cc0(void *, int, int, int);
void operation_8c178734(Object *o)
{
    Frame frame;
    int t1;
    o->f64 += 0x1000;
    o->f74 += 0.1f;
    o->f6c = o->f70 = o->f74;
    if (o->f354 < o->f6c) {
        o->f350 = 1;
    }
    *(int *)((char *)o + 0x358) += 1;
    t1 = call_8c18e8a0((void *)(o->f358), 3);
    if (t1 == 0) {
        (&frame)->f00 = 0.0f;
        (&frame)->f04 = 0.0f;
        (&frame)->f08 = o->f6c * 10.0f;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, (int)(o->f64 << 1));
        call_8c3be38c(0, (Frame *)((&frame)), (Frame *)((&frame)));
        njPopMatrixEx_8c38ad10();
        call_8c3bdf60((Frame *)((&frame)), (void *)(((char *)o + 0x3c)));
        create_effect_7cc0((void *)(&frame), 0x12d, 0, 0xa);
    }
}
