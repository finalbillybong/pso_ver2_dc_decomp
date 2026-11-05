/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e2d6c
 * function: operation_8c0e2d6c
 * language: c
 * reference size: 300 bytes
 * compiled size: 300 bytes (+0.0%)
 * differing lines: 126 of 140 reference instruction lines
 * differing bytes: 126
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, stack frame and spills; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Arg2 {
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
    float f2c;
} Arg2;
typedef struct Object {
    char unknown0[0x5c];
    float f5c;
} Object;
typedef struct Arg1 {
    float f00;
    float f04;
} Arg1;
typedef struct Frame Frame;
struct Frame {
    int f00;
    int f04;
    int f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float *f24;
    Frame *f28;
    int f2c;
    int f30;
};
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern int call_8c391be0(void *, int, int, float);
void operation_8c0e2d6c(Object *o, Arg1 *a1, Arg2 *a2, int a3, register int a4, register int a5, float f0, float f1)
{
    Frame frame;
    float v1;
    float v2;
    int m;
    v1 = f1 * a2->f28;
    f0 = o->f5c + f0 * 0.299f;
    v2 = f1 * a2->f2c;
    frame.f24 = &frame.f0c;
    frame.f28 = &frame;
    frame.f00 = a3;
    frame.f04 = a3;
    frame.f2c = 0;
    frame.f30 = 1;
    frame.f08 = a3;
    frame.f0c = (a1->f00 - a2->f20) * a2->f28 + a2->f20;
    frame.f10 = (a1->f04 - a2->f24) * a2->f2c + a2->f24;
    frame.f1c = v1 * njCos_8c38c154(a4) + frame.f0c;
    frame.f20 = v2 * njSin_8c37eb0c(a4) + frame.f10;
    m = 0x1000;
    while (a5 > a4) {
        frame.f14 = frame.f1c;
        frame.f18 = frame.f20;
        a4 += m;
        if (a4 > a5) {
            a4 = a5;
        }
        frame.f1c = v1 * njCos_8c38c154(a4) + frame.f0c;
        frame.f20 = v2 * njSin_8c37eb0c(a4) + frame.f10;
        call_8c391be0(&frame.f24, 1, 0x20, f0);
    }
}
