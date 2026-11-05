/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c23364c
 * function: operation_8c23364c
 * language: c
 * reference size: 74 bytes
 * compiled size: 92 bytes (+24.3%)
 * differing lines: 42 of 37 reference instruction lines
 * differing bytes: 73
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +18 bytes
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
struct Frame {
    int f00;
    char unknown4[0x4];
};
struct Arg1 {
    int f00;
};
extern int g_8c338cb4;
extern int call_8c233230(void);
extern void call_8c2333dc(Frame *);
int operation_8c23364c(int a0, Arg1 *a1)
{
    Frame frame;
    Arg1 **home1 = &a1;
    int v2;
    int v7;
    (void)home1;
    (&frame)->f00 = a0;
    v2 = call_8c233230();
    if (v2 == 0) {
        call_8c2333dc((Frame *)((&frame)));
        v7 = (int)g_8c338cb4;
        if ((&frame)->f00 == 1) {
            a1->f00 = v7 + 4;
            v2 = (int)v2;
        } else {
            if ((&frame)->f00 == 2) {
                a1->f00 = v7 + 0x168;
                v2 = (int)v2;
            } else {
                v2 = (int)-3;
            }
        }
    }
    return (int)(v2);
}
