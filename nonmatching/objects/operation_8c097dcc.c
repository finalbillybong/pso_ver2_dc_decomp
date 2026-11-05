/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c097dcc
 * function: operation_8c097dcc
 * language: c
 * reference size: 180 bytes
 * compiled size: 180 bytes (+0.0%)
 * differing lines: 4 of 73 reference instruction lines
 * differing bytes: 8
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Object {
    char unknown0[0x40];
    float f40;
} Object;
typedef struct Frame {
    void *f00;
    unsigned int *f04;
    int f08;
    int f0c;
    unsigned int f10;
    unsigned int f14;
    unsigned int f18;
    unsigned int f1c;
} Frame;
extern void call_8c38ef2c(Frame *, int, int, float);
void operation_8c097dcc(Object *o)
{
    Frame frame;
    float a;
    float t;
    unsigned int c;
    float s;
    a = o->f40;
    if (a != 1.0f) {
        if (!(a > 0.5f)) {
            t = 0.0f;
        } else {
            t = (a - 0.5f) * 2.0f;
        }
        c = (unsigned int)((1.0f - t) * 255.0f) << 24;
        frame.f1c = c;
        frame.f10 = c;
        c = (unsigned int)((1.0f - a) * 255.0f) << 24;
        frame.f04 = &frame.f10;
        frame.f08 = 0;
        frame.f18 = c;
        frame.f0c = 4;
        frame.f00 = (void *)0x8c30118c;
        frame.f14 = c;
        s = -1.1f;
        call_8c38ef2c(&frame, 4, 0x60, s);
    }
}
