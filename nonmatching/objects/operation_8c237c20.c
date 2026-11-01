/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c237c20
 * function: operation_8c237c20
 * language: c
 * reference size: 96 bytes
 * compiled size: 96 bytes (+0.0%)
 * differing lines: 42 of 34 reference instruction lines
 * differing bytes: 57
 * provenance: generator draft (mode passext)
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
typedef struct Block160 {
    int words[40];
} Block160;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_x16272 S_x16272;
typedef struct S_x16272_s274 S_x16272_s274;
struct S_x16272 {
    char unknown0[0x274];
    int f274;
};
struct S_x16272_s274 {
    char unknown0[0x4];
    Block160 f04;
};
struct S_g8c4db9e4 {
    char unknown0[0x11c4];
    Block160 f11c4;
};
extern int g_8c418248;
extern S_g8c4db9e4 *g_8c4db9e4;
extern char g_8c339ca0[];
extern void call_8c237c80(int);
void operation_8c237c20(int a0)
{
    int v5;
    call_8c237c80(a0);
    if (g_8c4db9e4 != 0) {
        v5 = (int)g_8c418248;
        ((S_x16272 *)(v5 * 0xa4 + g_8c339ca0))->f274 = 1;
        *(Block160 *)&((S_x16272_s274 *)((char *)(v5 * 0xa4 + g_8c339ca0) + 0x274))->f04 = *(Block160 *)&g_8c4db9e4->f11c4;
    }
}
