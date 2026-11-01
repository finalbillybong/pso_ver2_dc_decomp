/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c205f18
 * function: operation_8c205f18
 * language: c
 * reference size: 52 bytes
 * compiled size: 60 bytes (+15.4%)
 * differing lines: 44 of 26 reference instruction lines
 * differing bytes: 58
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_x60016 S_x60016;
struct S_x60016 {
    char f00;
};
extern char g_8c50494c;
void operation_8c205f18(float f0)
{
    int v1;
    ((S_x60016 *)(-0x17fffc))->f00 = (int)(1562500.0f / f0 + -0.5f);
    g_8c50494c = ((S_x60016 *)(-0x17fffc))->f00;
    v1 = (int)0x80000;
    while (!((0 + 1) >= v1)) {
    }
}
