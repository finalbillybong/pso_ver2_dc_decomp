/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1ccf94
 * function: operation_8c1ccf94
 * language: c++
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 4 of 43 reference instruction lines
 * differing bytes: 4
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
typedef struct Arg0_90 Arg0_90;
typedef struct Arg0_94 Arg0_94;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct ObjectData {
    char unknown0[0x90];
    Arg0_90 *f90;
    Arg0_94 *f94;
} ObjectData;
extern "C" void hs_8c0db5d4(Object *, int);
extern "C" void draw_view_nodes(Object *, void *, int);
extern "C" void operation_8c1cd168(Object *, int);
extern "C" void hs_8c199b80(void *, int);
extern "C" void hs_8c199bc8(void *, int, void *);
extern "C" void operation_8c1ccf94(Object *o)
{
    int t1;
    t1 = o->v5();
    hs_8c0db5d4(o, t1);
    draw_view_nodes(o, ((char *)o + 0x2c), t1);
    operation_8c1cd168(o, t1);
    if (((ObjectData *)o)->f90 != 0) {
        hs_8c199b80(((ObjectData *)o)->f90, t1);
    }
    if (((ObjectData *)o)->f94 != 0) {
        hs_8c199bc8(((ObjectData *)o)->f94, t1, ((char *)o + 0x78));
    }
}
