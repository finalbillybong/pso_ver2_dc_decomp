/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c20706c
 * function: TWindowSubComCardList_render_8c20706c
 * language: c++
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 4 of 48 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TWindowSubComCardList.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_98 Arg0_98;
typedef struct Arg0_9c Arg0_9c;
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
    char unknown0[0x98];
    Arg0_98 *f98;
    Arg0_9c *f9c;
} ObjectData;
extern "C" void draw_view_transition_if_active(void *);
extern "C" void call_8c0db5d4(Object *, int);
extern "C" void draw_view_nodes(void *, void *, void *);
extern "C" void operation_8c156b58(void *, int);
extern "C" void operation_8c207210(Object *, int);
extern "C" void call_8c199b80(void *, int);
extern "C" void call_8c192c20(void *, int);
extern "C" void TWindowSubComCardList_render_8c20706c(Object *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active((void *)o);
    call_8c0db5d4(o, t1);
    draw_view_nodes((void *)o, (void *)(((char *)o + 0x2c)), (void *)t1);
    operation_8c156b58((void *)o, t1);
    operation_8c207210(o, t1);
    if (((ObjectData *)o)->f98 != 0) {
        call_8c199b80((void *)(((ObjectData *)o)->f98), t1);
    }
    if (((ObjectData *)o)->f9c != 0) {
        call_8c192c20((void *)(((ObjectData *)o)->f9c), t1);
    }
}
