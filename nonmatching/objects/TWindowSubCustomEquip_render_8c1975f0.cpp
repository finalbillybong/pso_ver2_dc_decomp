/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1975f0
 * function: TWindowSubCustomEquip_render_8c1975f0
 * language: c++
 * reference size: 80 bytes
 * compiled size: 80 bytes (+0.0%)
 * differing lines: 4 of 31 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TWindowSubCustomEquip.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_70 Arg0_70;
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
    char unknown0[0x70];
    Arg0_70 *f70;
} ObjectData;
extern "C" void draw_view_transition_if_active(Object *);
extern "C" void hs_8c0db5d4(Object *, int);
extern "C" void draw_view_nodes(Object *, void *, int);
extern "C" void hs_8c199b80(void *, int);
extern "C" void TWindowSubCustomEquip_render_8c1975f0(Object *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active(o);
    hs_8c0db5d4(o, t1);
    draw_view_nodes(o, ((char *)o + 0x2c), t1);
    hs_8c199b80(((ObjectData *)o)->f70, t1);
}
