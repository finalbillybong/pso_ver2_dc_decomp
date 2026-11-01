/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c087b0c
 * function: operation_8c087b0c
 * language: c
 * reference size: 144 bytes
 * compiled size: 144 bytes (+0.0%)
 * differing lines: 8 of 53 reference instruction lines
 * differing bytes: 13
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
typedef struct S_g8c4db9e8 S_g8c4db9e8;
struct S_g8c4db9e8 {
    char unknown0[0x3208];
    int f3208;
};
struct Frame {
    char unknown0[0x4];
    unsigned char f04;
    unsigned char f05;
    unsigned char f06;
    char unknown7[0x5];
};
extern S_g8c4db9e8 *g_8c4db9e8;
extern int operation_8c087b9c(void);
extern void call_8c36d3ca(Frame *);
extern int call_8c18e768(int, int);
extern int call_8c18e8a0(int, int);
int operation_8c087b0c(void)
{
    Frame frame;
    int v2;
    int t1;
    int v;
    int t2;
    if (g_8c4db9e8 == 0) {
        v2 = operation_8c087b9c();
    } else {
        v2 = (int)g_8c4db9e8->f3208;
    }
    call_8c36d3ca((Frame *)((&frame)));
    v = (&frame)->f04 * 0x3c;
    v = ((&frame)->f05 + v) * 0x3c;
    v = (&frame)->f06 + v;
    t1 = call_8c18e768((int)((float)v * 30.0f) + v2, 0xa20);
    t2 = call_8c18e8a0(t1, 0x3e8);
    return (int)(t2);
}
