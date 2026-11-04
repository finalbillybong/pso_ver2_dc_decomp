/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c22ba2c
 * function: TWindowSoundBalance_render_8c22ba2c
 * language: c++
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 26 of 43 reference instruction lines
 * differing bytes: 32
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TWindowSoundBalance.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown14[0x4];
    float f18;
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

} ObjectData;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(int, S_c0 *);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void operation_8c22bcf0(void *, int);
extern "C" void TWindowSoundBalance_render_8c22ba2c(Object *o)
{
    S_c0 *t1;
    t1 = (S_c0 *)o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4((int)(o), t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
    t1->f10 += 174.0f;
    t1->f18 -= 348.0f;
    operation_8c22bcf0((void *)o, (int)t1);
}
