/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1adcfc
 * function: operation_8c1adcfc
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 12 of 49 reference instruction lines
 * differing bytes: 62
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    void *f00;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    int f1c;
};
extern void call_8c38ef2c(Frame *, int, int, float);
void operation_8c1adcfc(int a0, int a1, float f0)
{
    Frame frame;
    unsigned int c;
    if (f0 > 0.0f) {
        if (f0 > 1.0f) {
            f0 = 1.0f;
        }
        frame.f18 = c;
        c = (unsigned int)(f0 * 255.0f) << 24 | a1 & 0xffffff;
        frame.f04 = (int)&frame.f10;
        frame.f1c = c;
        frame.f08 = 0;
        frame.f14 = c;
        frame.f0c = 4;
        frame.f10 = c;
        frame.f00 = (void *)0x8c325260;
        call_8c38ef2c(&frame, 4, 0x60, -1.0f);
    }
}
