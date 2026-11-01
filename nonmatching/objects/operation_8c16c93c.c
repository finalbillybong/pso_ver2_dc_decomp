/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16c93c
 * function: operation_8c16c93c
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 8 of 47 reference instruction lines
 * differing bytes: 11
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c317ba8 S_L8c317ba8;
typedef struct Frame Frame;
typedef struct S_g8c4db400 S_g8c4db400;
struct S_L8c317ba8 {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    char unknown0[0x400];
};
extern S_g8c4db400 *g_8c4db400;
extern int g_8c4db420;
extern S_L8c317ba8 g_8c317ba8;
extern int strlen_8c12b0cc(int);
extern void operation_8c172b64(int, int);
void operation_8c16c93c(int a0)
{
    Frame frame;
    int v1;
    int t1;
    char *v2;
    char v3;
    v2 = (char *)*(int *)((char *)&g_8c317ba8.f04 + (a0 << 3));
    v1 = (int)g_8c4db420;
    g_8c4db420 = v1 + 1;
    v3 = (char)*(char *)((char *)((char *)g_8c4db400 + 0x0) + (v1));
    t1 = strlen_8c12b0cc((int)((int)g_8c4db400 + g_8c4db420));
    operation_8c172b64((int)((int)g_8c4db400 + g_8c4db420), (int)(&frame));
    g_8c4db420 += t1 + 1;
    ((void (*)(char, Frame *))(v2))(v3, (Frame *)((&frame)));
}
