/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f3534
 * function: operation_8c1f3534
 * language: c
 * reference size: 110 bytes
 * compiled size: 88 bytes (-20.0%)
 * differing lines: 22 of 34 reference instruction lines
 * differing bytes: 97
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -22 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
struct Frame {
    unsigned char f00;
    char unknown1[0x3];
};
extern int hs_8c1f7314(int);
extern int hs_8c1f7602(int);
extern int hs_8c1f3440(Frame *, int);
int operation_8c1f3534(int a0)
{
    Frame frame;
    int v2;
    int v4;
    int t1;
    int t2;
    t1 = hs_8c1f7314(a0);
    v2 = (int)a0;
    if (t1 != 0) {
        v2 = hs_8c1f7602(a0);
    }
    t2 = hs_8c1f3440((&frame), v2);
    if (t2 != 1) {
        return 0;
    }
    v4 = (int)((*(unsigned char *)((char *)0x8c28a000 + ((&frame)->f00)) & 0xf) == 0xb);
    return (int)(v4);
}
