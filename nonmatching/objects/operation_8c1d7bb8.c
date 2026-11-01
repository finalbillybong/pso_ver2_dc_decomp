/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d7bb8
 * function: operation_8c1d7bb8
 * language: c
 * reference size: 200 bytes
 * compiled size: 204 bytes (+2.0%)
 * differing lines: 14 of 74 reference instruction lines
 * differing bytes: 100
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x30];
    int f30;
    float f34;
};
struct Frame {
    float f00;
    float f04;
};
extern char g_8c32a294[];
extern void operation_8c19a370(int, int, int, float, float);
extern void call_8c19a3a0(Frame *, void *, int, float);
void operation_8c1d7bb8(int a0, Arg1 *a1)
{
    Frame frame;
    float v1;
    int v2;
    v1 = (float)(-1.0f / (a1->f34 + 0.1794f));
    if (6 > a1->f30) {
        v2 = (int)((int)((float)(a1->f30 * 0xff) * 0.166666672f) << 0x18 | 0xffffff);
    } else {
        v2 = (int)-1;
    }
    operation_8c19a370((int)a1, 0, 0, v1, 100000.0f);
    (&frame)->f00 = 494.0f;
    (&frame)->f04 = 288.0f;
    call_8c19a3a0((Frame *)((&frame)), (void *)((g_8c32a294 + 0x1c)), v2, 1000000.0f);
    {
        float y = (&frame)->f04;
        (&frame)->f04 = y + 20.0f;
    }
    call_8c19a3a0((Frame *)((&frame)), (void *)((g_8c32a294 + 0x26)), v2, 1000000.0f);
}
