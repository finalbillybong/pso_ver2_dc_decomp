/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a63d0
 * function: operation_8c0a63d0
 * language: c
 * reference size: 380 bytes
 * compiled size: 380 bytes (+0.0%)
 * differing lines: 24 of 165 reference instruction lines
 * differing bytes: 41
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
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg1 Arg1;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct Frame {
    float f00;
    float f04;
    float f08;
    Block_frame_c f0c;
};
struct Object {
    char unknown0[0x34];
    Arg0_34 *f34;
    char unknown38[0x8];
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
};
struct Arg1 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    int f64;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_c8c011214_4 {
    float f00;
    float f04;
    float f08;
};
extern Vector3 g_8c303bd4;
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern S_c8c011214 *operation_8c011214(int, int, int);
extern float njScalor2_8c37e494(Frame *);
extern void njUnitVector_8c37b630(Frame *);
void operation_8c0a63d0(Object *o, Arg1 *a1)
{
    Frame frame;
    S_c8c011214 *t1;
    float t2;
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&g_8c303bd4;
    if (a1 == 0) {
        return;
    }
    o->f34 = (Arg0_34 *)((int)a1->f64 + 0x8000);
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)(o->f34));
    call_8c3be280(0, (void *)(&(&frame)->f0c), (void *)(&(&frame)->f0c));
    njPopMatrix_8c38accc(1);
    o->f4c = a1->f3c;
    o->f50 = a1->f40 + 19.8f;
    o->f54 = a1->f44;
    o->f40 = o->f4c + (&frame)->f0c.f00;
    o->f44 = o->f50 + (&frame)->f0c.f04;
    o->f48 = o->f54 + (&frame)->f0c.f08;
    t1 = operation_8c011214((int)(&o->f4c), (int)(&o->f40), 0x100);
    if (t1 != 0) {
        (&frame)->f00 = o->f40 - o->f4c;
        (&frame)->f04 = o->f44 - o->f50;
        (&frame)->f08 = o->f48 - o->f54;
        t2 = njScalor2_8c37e494((Frame *)((&frame)));
        if (t2 != 0.0f) {
            njUnitVector_8c37b630((Frame *)((&frame)));
        }
        o->f40 = t1->f04->f00 - (&frame)->f00;
        o->f44 = t1->f04->f04 - (&frame)->f04;
        o->f48 = t1->f04->f08 - (&frame)->f08;
    }
}
