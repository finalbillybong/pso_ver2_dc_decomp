/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11d3b0
 * function: operation_8c11d3b0
 * language: c
 * reference size: 148 bytes
 * compiled size: 144 bytes (-2.7%)
 * differing lines: 20 of 53 reference instruction lines
 * differing bytes: 131
 * provenance: generator draft (mode bgotoext)
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
typedef struct Object Object;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x2c0];
    Arg0_3ac *f3ac;
    char unknown3b0[0x48];
    int f3f8;
};
struct S_vv2 {
    char unknown0[0x18];
    int f18;
};
extern void play_se_8c05fbf8(int, void *, int, int);
extern void call_8c01c9e8(Object *, int);
void operation_8c11d3b0(Object *o)
{
    S_vv2 *v2;
    int v1;
    o->f3f8 = 1;
    v1 = (int)-2;
    v2 = (S_vv2 *)o->f3ac;
    v2->f18 &= v1;
    play_se_8c05fbf8(0x30031, (void *)(((char *)o + 0x3c8)), 0, 0);
    play_se_8c05fbf8(0x30030, (void *)(((char *)o + 0x3e0)), 0, 0);
    o->fe8 &= -5;
    o->fe8 |= 1;
    call_8c01c9e8(o, 0xa);
    o->fe8 = (unsigned int)o->fe8 >> 1 << 1;
}
