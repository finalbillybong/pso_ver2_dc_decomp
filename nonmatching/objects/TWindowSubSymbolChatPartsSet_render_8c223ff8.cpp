/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c223ff8
 * function: TWindowSubSymbolChatPartsSet_render_8c223ff8
 * language: c++
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 26 of 83 reference instruction lines
 * differing bytes: 32
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TWindowSubSymbolChatPartsSet.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c0 S_c0;
typedef struct Arg0_90 Arg0_90;
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
    char unknown0[0x64];
    int f64;
    char unknown68[0x28];
    Arg0_90 *f90;
    float f94;
    float f98;
    float f9c;
} ObjectData;
struct S_c0 {
    char unknown0[0x10];
    float f10;
    float f14;
    char unknown18[0x10];
    float f28;
    float f2c;
    int f30;
};
extern "C" void hs_8c199b80(void *, S_c0 *);
extern "C" void hs_8c0dbdf4(Object *, S_c0 *);
extern "C" void operation_8c2244bc(Object *, S_c0 *);
extern "C" void draw_view_nodes(Object *, void *, S_c0 *);
extern "C" void TWindowSubSymbolChatPartsSet_render_8c223ff8(Object *o)
{
    S_c0 *t1;
    t1 = (S_c0 *)o->v5();
    hs_8c199b80(((ObjectData *)o)->f90, t1);
    if (!(t1->f30 >= 0)) {
        t1->f28 = (float)((ObjectData *)o)->f64 / 7.5f;
        t1->f2c = t1->f28;
    }
    hs_8c0dbdf4(o, t1);
    t1->f10 += ((ObjectData *)o)->f94;
    t1->f14 += ((ObjectData *)o)->f98;
    t1->f28 *= ((ObjectData *)o)->f9c;
    t1->f2c *= ((ObjectData *)o)->f9c;
    operation_8c2244bc(o, t1);
    draw_view_nodes(o, ((char *)o + 0x2c), t1);
}
