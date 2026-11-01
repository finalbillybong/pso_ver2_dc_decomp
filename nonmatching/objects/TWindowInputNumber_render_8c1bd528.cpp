/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1bd528
 * function: TWindowInputNumber_render_8c1bd528
 * language: c++
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 12 of 55 reference instruction lines
 * differing bytes: 18
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
typedef struct Arg0_30 Arg0_30;
typedef struct Arg0_30_0 Arg0_30_0;
typedef struct Arg0_78 Arg0_78;
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
    char unknown0[0x30];
    Arg0_30 *f30;
    char unknown34[0x34];
    unsigned short f68;
    char unknown6a[0x1];
    char f6b;
    char unknown6c[0xc];
    Arg0_78 *f78;
} ObjectData;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(Object *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void call_8c1bd5ac(Object *, int, void *, int);
extern "C" void call_8c199b80(void *, int);
extern "C" void TWindowInputNumber_render_8c1bd528(Object *o)
{
    int t1;
    int v1;
    t1 = o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4(o, t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
    v1 = (int)(((((ObjectData *)o)->f68 & 2)) != 0);
    call_8c1bd5ac(o, t1, (void *)(*(Arg0_30_0 **)((char *)((char *)((ObjectData *)o)->f30 + 0x0) + (((ObjectData *)o)->f6b << 2))), v1);
    if (((ObjectData *)o)->f78 != 0) {
        call_8c199b80((void *)(((ObjectData *)o)->f78), t1);
    }
}
