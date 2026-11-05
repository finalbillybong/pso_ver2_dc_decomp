/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e2368
 * function: operation_8c1e2368
 * language: c
 * reference size: 108 bytes
 * compiled size: 108 bytes (+0.0%)
 * differing lines: 4 of 50 reference instruction lines
 * differing bytes: 8
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2
 *   (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_74 Arg0_74;
typedef struct S_vv1 S_vv1;
struct Frame {
    int f00;
    int f04;
    int f08;
};
struct Object {
    char unknown0[0x74];
    Arg0_74 *f74;
    char unknown78[0x44];
    int fbc;
};
struct S_vv1 {
    unsigned short f00;
};
extern int call_8c04bdf8(void *, int, void *, void *, Frame *);
int operation_8c1e2368(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int t1;
    int k;
    (&frame)->f08 = 0;
    (&frame)->f04 = 0;
    (&frame)->f00 = 0;
    v1 = (S_vv1 *)o->f74;
    while (v1->f00 != 0) {
        k = (v1++)->f00;
        t1 = call_8c04bdf8((void *)(&o->f74), k, (void *)(&(&frame)->f08), (void *)(&(&frame)->f04), (Frame *)((&frame)));
        if (t1 != 0) {
            break;
        }
    }
    (&frame)->f00 += 1;
    if (((o->fbc & 0x10)) == 0) {
        (&frame)->f00 += 2;
    }
    return (int)((&frame)->f00);
}
