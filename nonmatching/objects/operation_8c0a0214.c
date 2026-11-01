/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a0214
 * function: operation_8c0a0214
 * language: c
 * reference size: 92 bytes
 * compiled size: 90 bytes (-2.2%)
 * differing lines: 10 of 45 reference instruction lines
 * differing bytes: 21
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
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_0 Arg0_0_0;
typedef struct Arg0_4 Arg0_4;
typedef struct Arg0_4_0 Arg0_4_0;
struct Object {
    Arg0_0 *tag;
    Arg0_4 *f04;
    int f08;
    int f0c;
};
struct Arg0_4 {
    Arg0_4_0 *f00;
};
struct Arg0_0 {
    Arg0_0_0 *f00;
};
void operation_8c0a0214(Object *o)
{
    *(int *)((char *)((char *)o->f04->f00 + 0x8) + (o->f0c * 0xc)) = (int)(*(int *)((char *)((char *)o->tag->f00 + 0x8) + (o->f08 * 0xc)));
    *(int *)((char *)((char *)o->f04->f00 + 0x4) + (o->f0c * 0xc)) = (int)(*(int *)((char *)((char *)o->tag->f00 + 0x4) + (o->f08 * 0xc)));
    *(int *)((char *)((char *)o->f04->f00 + 0x0) + (o->f0c * 0xc)) = (int)(*(int *)((char *)((char *)o->tag->f00 + 0x0) + (o->f08 * 0xc)));
}
