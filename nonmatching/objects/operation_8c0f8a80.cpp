/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f8a80
 * function: operation_8c0f8a80
 * language: c++
 * reference size: 76 bytes
 * compiled size: 76 bytes (+0.0%)
 * differing lines: 12 of 30 reference instruction lines
 * differing bytes: 47
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_x10608 S_x10608;
struct Object {
    char unknown0[0x3a0];
    int f3a0;
};
struct Frame {
    Vector3 f00;
};
struct S_x10608 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c30a484[];
extern "C" void hs_8c18e6fc(Frame *);
extern "C" void operation_8c0f8a80(Object *o, int a1)
{
    Frame frame;
    o->f3a0 = a1;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x10608 *)(o->f3a0 * 0x18 + g_8c30a484))->f00;
    hs_8c18e6fc((&frame));
    (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
}
