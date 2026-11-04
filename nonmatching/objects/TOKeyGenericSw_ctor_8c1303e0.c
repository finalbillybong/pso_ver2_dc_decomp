/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1303e0
 * function: TOKeyGenericSw_ctor_8c1303e0
 * language: c
 * reference size: 80 bytes
 * compiled size: 84 bytes (+5.0%)
 * differing lines: 42 of 29 reference instruction lines
 * differing bytes: 68
 * provenance: generator draft (mode passext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TOKeyGenericSw.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c12e624 S_c8c12e624;
typedef struct Frame Frame;
struct Frame {
    int f00;
};
extern int g_8c4d9a00;
extern float call_8c12e624(int);
float TOKeyGenericSw_ctor_8c1303e0(int a0)
{
    Frame frame;
    float t1;
    float self;
    float *home = &self;
    (void)home;
    t1 = call_8c12e624(a0);
    self = t1;
    if (((&frame)->f00 & 0x7f800000) == 0x7f800000) {
        if ((((&frame)->f00 & 0x7fffff)) != 0) {
            g_8c4d9a00 = 0x44d;
        } else {
            g_8c4d9a00 = 0x44c;
        }
    }
    return self;
}
