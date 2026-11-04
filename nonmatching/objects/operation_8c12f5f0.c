/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c12f5f0
 * function: operation_8c12f5f0
 * language: c
 * reference size: 140 bytes
 * compiled size: 136 bytes (-2.9%)
 * differing lines: 70 of 63 reference instruction lines
 * differing bytes: 108
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
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
struct Frame {
    int f00;
    char f04;
    char unknown5[0xb];
};
extern void memset_8c12b880(void *, int, int);
extern void hs_8c12c390(void *, int, int);
extern float hs_8c12c194(void *, int, char);
float operation_8c12f5f0(int a0, Arg1 *a1, int a2, int a3)
{
    Frame frame;
    char *v1;
    int v4;
    int v3;
    int v2;
    float t1;
    (&frame)->f00 = a0;
    (&frame)->f04 = a3;
    v1 = (char *)((char *)(&frame) + 0x8);
    memset_8c12b880(v1, 0, 8);
    v2 = (int)(a2 + -0x10);
    v3 = (int)0x10;
    while (*(char *)((char *)((char *)a1 + 0x0) + (v3)) == 0x30) {
        v2 = (int)(v2 + 1);
        v3 = (int)(v3 + -1);
    }
    v4 = (int)0;
    if (v3 >= 0) {
        do {
            hs_8c12c390(v1, *(char *)((char *)((char *)a1 + 0x0) + (v4)) + -0x30, v4);
            v4 = (int)(v4 + 1);
        } while (!(v4 > v3));
    }
    t1 = hs_8c12c194(v1, v2, (&frame)->f04);
    return t1 * (float)(&frame)->f00;
}
