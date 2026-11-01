/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c205c18
 * function: operation_8c205c18
 * language: c
 * reference size: 74 bytes
 * compiled size: 72 bytes (-2.7%)
 * differing lines: 45 of 37 reference instruction lines
 * differing bytes: 63
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -2 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c12bf94(int);
extern void call_8c204834(void);
extern void call_8c20508a(void);
void operation_8c205c18(int a0)
{
    int v1;
    v1 = (int)*(int *)((char *)0x8c504900 + (a0 << 2));
    if (v1 != 1) {
        if (v1 != 0) {
            return;
        }
    } else {
        call_8c12bf94(a0);
        call_8c204834();
        return;
    }
    call_8c12bf94(a0);
    call_8c20508a();
}
