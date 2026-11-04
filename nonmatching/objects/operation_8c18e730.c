/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18e730
 * function: operation_8c18e730
 * language: c
 * reference size: 32 bytes
 * compiled size: 28 bytes (-12.5%)
 * differing lines: 6 of 11 reference instruction lines
 * differing bytes: 30
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void hs_8c18df3c(void);
extern void operation_8c18ea1c(void);
void operation_8c18e730(void)
{
    hs_8c18df3c();
    operation_8c18ea1c();
}
