/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12c714
 * function: operation_8c12c714
 * language: c
 * reference size: 76 bytes
 * compiled size: 64 bytes (-15.8%)
 * differing lines: 40 of 25 reference instruction lines
 * differing bytes: 69
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -12 bytes
 * runtime: DIVERGED on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (called 218300 times where the original is called 216717 times); known
 *   incorrect
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4d9a00;
void operation_8c12c714(int a0, float f0)
{
    if (0x7f800000 == (0x7f800000 & (a0 & 0x7fffffff))) {
        if (((0x7fffff & (a0 & 0x7fffffff))) == 0) {
            g_8c4d9a00 = 0x44c;
        } else {
            g_8c4d9a00 = 0x44d;
        }
    }
}
