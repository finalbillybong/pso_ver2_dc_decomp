/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a0884
 * function: operation_8c0a0884
 * language: c
 * reference size: 176 bytes
 * compiled size: 172 bytes (-2.3%)
 * differing lines: 32 of 73 reference instruction lines
 * differing bytes: 90
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
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
    char unknown58[0x1c];
    float f74;
};
struct S_c8c021ef8 {
    char unknown0[0x64];
    int f64;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
extern S_g8c418248 *g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, Frame *, Frame *);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c0a0884(Object *o)
{
    Frame frame;
    S_c8c021ef8 *t1;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 != 0) {
        o->f34 = (Arg0_34 *)t1->f64;
        (&frame)->f00 = 0.0f;
        (&frame)->f04 = 0.0f;
        (&frame)->f08 = o->f74;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, (void *)(o->f34));
        call_8c3be280(0, (Frame *)((&frame)), (Frame *)((&frame)));
        njPopMatrixEx_8c38ad10();
        o->f40 = o->f4c + (&frame)->f00;
        o->f44 = o->f50 + (&frame)->f04;
        o->f48 = o->f54 + (&frame)->f08;
    }
}
