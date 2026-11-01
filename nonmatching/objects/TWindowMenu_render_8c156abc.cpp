/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c156abc
 * function: TWindowMenu_render_8c156abc
 * language: c++
 * reference size: 156 bytes
 * compiled size: 156 bytes (+0.0%)
 * differing lines: 4 of 57 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
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
typedef struct Arg0_94 Arg0_94;
typedef struct Arg0_98 Arg0_98;
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
    char unknown0[0x80];
    volatile unsigned short f80;
    char unknown82[0x12];
    Arg0_94 *f94;
    Arg0_98 *f98;
} ObjectData;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(Object *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void operation_8c156b58(void *, int);
extern "C" void operation_8c156b98(void *, int);
extern "C" void call_8c199b80(void *, int);
extern "C" void call_8c199bc8(void *, int, void *);
extern "C" void TWindowMenu_render_8c156abc(Object *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4(o, t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
    if (((((ObjectData *)o)->f80 & 0xffff & 0x80)) == 0) {
        operation_8c156b58((void *)o, t1);
        operation_8c156b98((void *)o, t1);
    }
    if (((ObjectData *)o)->f98 != 0) {
        call_8c199b80((void *)(((ObjectData *)o)->f98), t1);
    }
    if (((ObjectData *)o)->f94 != 0) {
        call_8c199bc8((void *)(((ObjectData *)o)->f94), t1, (void *)(((char *)o + 0x78)));
    }
}
