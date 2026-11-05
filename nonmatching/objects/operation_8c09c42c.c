/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09c42c
 * function: operation_8c09c42c
 * language: c
 * reference size: 108 bytes
 * compiled size: 108 bytes (+0.0%)
 * differing lines: 20 of 41 reference instruction lines
 * differing bytes: 8
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    int f00;
    char unknown4[0xc];
    int f10;
    int f14;
    char unknown18[0x12c];
    int f144;
    int f148;
    char unknown14c[0x12c];
    int f278;
};
extern char g_8c46b06c[];
int operation_8c09c42c(void)
{
    int v1;
    S_vv2 *v2;
    v1 = (int)2;
    v2 = (S_vv2 *)(void *)g_8c46b06c;
    while ((unsigned int)(g_8c46b06c + 0x3ac0) > (int)v2) {
        if (v2->f00 != 0) {
            if (v2->f14 != 0 && v2->f10 == 0) {
                v1 = (int)(v1 + -1);
            }
            if (v2->f148 != 0 && v2->f144 == 0) {
                v1 = (int)(v1 + -1);
            }
            if (v2->f278 == 0) {
                v1 = (int)(v1 + -1);
            }
        }
        v2 = (S_vv2 *)((char *)v2 + 940);
    }
    return (int)(v1);
}
