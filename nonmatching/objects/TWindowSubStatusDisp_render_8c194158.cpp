/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c194158
 * function: TWindowSubStatusDisp_render_8c194158
 * language: c++
 * reference size: 104 bytes
 * compiled size: 104 bytes (+0.0%)
 * differing lines: 4 of 39 reference instruction lines
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
typedef struct S_g8c418248 S_g8c418248;
typedef struct Arg0_6c Arg0_6c;
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
    char unknown0[0x6c];
    Arg0_6c *f6c;
} ObjectData;
extern S_g8c418248 *g_8c418248;
extern "C" int lookup_low_id(void *);
extern "C" void draw_view_transition_if_active(Object *);
extern "C" void hs_8c0db5d4(Object *, int);
extern "C" void draw_view_nodes(Object *, void *, int);
extern "C" void hs_8c192c20(void *, int);
extern "C" void TWindowSubStatusDisp_render_8c194158(Object *o)
{
    int t1;
    int t2;
    t1 = lookup_low_id(g_8c418248);
    if (t1 != 0) {
        t2 = o->v5();
        draw_view_transition_if_active(o);
        hs_8c0db5d4(o, t2);
        draw_view_nodes(o, ((char *)o + 0x2c), t2);
        hs_8c192c20(((ObjectData *)o)->f6c, t2);
    }
}
