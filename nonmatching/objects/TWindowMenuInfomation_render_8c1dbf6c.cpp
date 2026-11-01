/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1dbf6c
 * function: TWindowMenuInfomation_render_8c1dbf6c
 * language: c++
 * reference size: 116 bytes
 * compiled size: 116 bytes (+0.0%)
 * differing lines: 4 of 43 reference instruction lines
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
extern "C" void call_8c0db98c(Object *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void operation_8c1dc160(void *, int);
extern "C" void call_8c199b80(void *, int);
extern "C" void call_8c199bc8(void *, int, void *);
extern "C" void TWindowMenuInfomation_render_8c1dbf6c(Object *o)
{
    int t1;
    t1 = o->v5();
    call_8c0db98c(o, t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
    operation_8c1dc160((void *)o, t1);
    if (((ObjectData *)o)->f88 != 0) {
        call_8c199b80((void *)(((ObjectData *)o)->f88), t1);
    }
    if (((ObjectData *)o)->f8c != 0) {
        call_8c199bc8((void *)(((ObjectData *)o)->f8c), t1, (void *)(((char *)o + 0x78)));
    }
}
