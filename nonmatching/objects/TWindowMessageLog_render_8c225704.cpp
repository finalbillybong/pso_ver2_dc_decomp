/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c225704
 * function: TWindowMessageLog_render_8c225704
 * language: c++
 * reference size: 88 bytes
 * compiled size: 88 bytes (+0.0%)
 * differing lines: 4 of 33 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode switch2ext)
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
typedef struct Arg0_a0 Arg0_a0;
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
    char unknown0[0xa0];
    Arg0_a0 *fa0;
} ObjectData;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(Object *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void call_8c199bc8(void *, int, void *);
extern "C" void TWindowMessageLog_render_8c225704(Object *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4(o, t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
    call_8c199bc8((void *)(((ObjectData *)o)->fa0), t1, (void *)(((char *)o + 0x78)));
}
