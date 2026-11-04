/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c254ef0
 * function: TWindowChoiceSetting_render_8c254ef0
 * language: c++
 * reference size: 124 bytes
 * compiled size: 124 bytes (+0.0%)
 * differing lines: 4 of 46 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TWindowChoiceSetting.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_88 Arg0_88;
typedef struct Arg0_8c Arg0_8c;
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
    char unknown0[0x88];
    Arg0_88 *f88;
    Arg0_8c *f8c;
} ObjectData;
extern "C" void draw_view_transition_if_active(Object *);
extern "C" void hs_8c0db5d4(Object *, int);
extern "C" void draw_view_nodes(Object *, void *, int);
extern "C" void operation_8c1dc160(Object *, int);
extern "C" void hs_8c199b80(void *, int);
extern "C" void hs_8c199bc8(void *, int, void *);
extern "C" void TWindowChoiceSetting_render_8c254ef0(Object *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active(o);
    hs_8c0db5d4(o, t1);
    draw_view_nodes(o, ((char *)o + 0x2c), t1);
    operation_8c1dc160(o, t1);
    if (((ObjectData *)o)->f88 != 0) {
        hs_8c199b80(((ObjectData *)o)->f88, t1);
    }
    if (((ObjectData *)o)->f8c != 0) {
        hs_8c199bc8(((ObjectData *)o)->f8c, t1, ((char *)o + 0x78));
    }
}
