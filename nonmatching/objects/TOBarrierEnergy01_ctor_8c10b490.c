/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10b490
 * function: TOBarrierEnergy01_ctor_8c10b490
 * language: c
 * reference size: 228 bytes
 * compiled size: 232 bytes (+1.8%)
 * differing lines: 42 of 93 reference instruction lines
 * differing bytes: 136
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * class header: src/include/classes/TOBarrierEnergy01.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg1_64 Arg1_64;
struct Frame {
    Vector3 f00;
    float f0c;
    float f10;
    float f14;
};
struct Arg1 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg1_64 *f64;
};
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
};
extern Vector3 g_8c30bd40;
extern float squared_distance_xyz(void *, void *);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, Frame *, Frame *);
extern void njPopMatrixEx_8c38ad10(void);
extern void njUnitVector_8c37b630(void *);
extern float call_8c3845f0(Frame *, void *);
int TOBarrierEnergy01_ctor_8c10b490(Object *o, Arg1 *a1, float f0)
{
    Frame frame;
    int v1;
    float t1;
    float t2;
    t1 = squared_distance_xyz((void *)(&a1->f3c), (void *)(&o->f3c));
    if (t1 > (f0 * f0)) {
        return 0;
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c30bd40;
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)(a1->f64));
    call_8c3be38c(0, (Frame *)((&frame)), (Frame *)((&frame)));
    njPopMatrixEx_8c38ad10();
    (&frame)->f0c = o->f3c - a1->f3c;
    (&frame)->f10 = o->f40 - a1->f40;
    (&frame)->f14 = o->f44 - a1->f44;
    njUnitVector_8c37b630((void *)(&(&frame)->f0c));
    t2 = call_8c3845f0((Frame *)((&frame)), (void *)(&(&frame)->f0c));
    v1 = (int)(t2 <= -0.5f);
    return (int)(v1);
}
