/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a63a0
 * function: TWindowChatSymbol_render_8c1a63a0
 * language: c++
 * reference size: 156 bytes
 * compiled size: 160 bytes (+2.6%)
 * differing lines: 24 of 66 reference instruction lines
 * differing bytes: 75
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c0 S_c0;
class Object;
struct S_c0 {
    char unknown0[0x10];
    float f10;
    float f14;
    char unknown18[0x10];
    float f28;
    float f2c;
    int f30;
};
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
    char unknown0[0x50];
    float f50;
    float f54;
    char unknown58[0xc];
    int f64;
} ObjectData;
extern "C" void call_8c0dbdf4(Object *, S_c0 *);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void TWindowChatSymbol_render_8c1a63a0(Object *o)
{
    S_c0 *t1;
    t1 = (S_c0 *)o->v5();
    if (!(t1->f30 >= 0)) {
        t1->f28 = (float)((ObjectData *)o)->f64 / 7.5f;
        t1->f2c = t1->f28;
    }
    call_8c0dbdf4(o, t1);
    t1->f10 += (((ObjectData *)o)->f50 - 146.0f) * 0.5f;
    t1->f14 += (((ObjectData *)o)->f54 - 96.0f) * 0.5f;
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
}
