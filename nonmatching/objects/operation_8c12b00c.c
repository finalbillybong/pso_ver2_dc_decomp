/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12b00c
 * function: operation_8c12b00c
 * language: c
 * reference size: 60 bytes
 * compiled size: 52 bytes (-13.3%)
 * differing lines: 35 of 27 reference instruction lines
 * differing bytes: 50
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_frame_0 S_frame_0;
struct Frame {
    S_frame_0 *f00;
};
typedef struct StkArg {
    int f00;
    int f04;
} StkArg;
extern void scanf_core(int, int, void *, int, int);
void operation_8c12b00c(int a0, int a1, int a2, int a3, int a4, StkArg sp)
{
    Frame frame;
    int v1;
    (&frame)->f00 = (S_frame_0 *)a0;
    if (((3 & (int)(&sp.f00))) != 0) {
        v1 = (int)&sp.f04;
    } else {
        v1 = (int)&sp.f00;
    }
    scanf_core(1, 0, (&frame)->f00, a4, v1);
}
