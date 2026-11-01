/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c220920
 * function: operation_8c220920
 * language: c
 * reference size: 168 bytes
 * compiled size: 164 bytes (-2.4%)
 * differing lines: 90 of 74 reference instruction lines
 * differing bytes: 138
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c336e88 S_L8c336e88;
typedef struct Frame Frame;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
};
struct S_L8c336e88 {
    char unknown0[0x1];
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
};
extern char g_8c505a04;
extern S_L8c336e88 g_8c336e88;
extern char g_8c336edc[];
extern void operation_8c013a54(int, int, Frame *);
void operation_8c220920(void)
{
    Frame frame;
    int v2;
    v2 = (int)*(unsigned char *)((char *)&g_8c336e88 + (g_8c505a04 << 2));
    (&frame)->f00 = (float)v2 / 255.0f;
    (&frame)->f04 = (float)*(unsigned char *)((char *)&g_8c336e88.f01 + (g_8c505a04 << 2)) / 255.0f;
    (&frame)->f08 = (float)*(unsigned char *)((char *)&g_8c336e88.f02 + (g_8c505a04 << 2)) / 255.0f;
    (&frame)->f0c = (float)*(unsigned char *)((char *)&g_8c336e88.f03 + (g_8c505a04 << 2)) / 255.0f;
    operation_8c013a54(0, (int)(g_8c505a04 * 0xc + g_8c336edc), (Frame *)((&frame)));
}
