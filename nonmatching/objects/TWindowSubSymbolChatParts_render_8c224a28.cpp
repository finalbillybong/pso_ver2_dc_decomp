/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c224a28
 * function: TWindowSubSymbolChatParts_render_8c224a28
 * language: c++
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 4 of 63 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TWindowSubSymbolChatParts.h (shared layout for modders; this draft keeps its own local types)
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
    char unknown0[0x81];
    char f81;
    char unknown82[0x16];
    Arg0_98 *f98;
    Arg0_9c *f9c;
} ObjectData;
extern "C" void draw_view_transition_if_active(Object *);
extern "C" void hs_8c0db5d4(Object *, int);
extern "C" void operation_8c224fb0(Object *, int);
extern "C" void hs_8c199b80(void *, int);
extern "C" void hs_8c199bc8(void *, int, void *);
extern "C" void hs_8c224bb4(Object *, int);
extern "C" void hs_8c224cc4(Object *, int);
extern "C" void hs_8c224ddc(Object *, int);
extern "C" void TWindowSubSymbolChatParts_render_8c224a28(Object *o)
{
    int t1;
    t1 = o->v5();
    draw_view_transition_if_active(o);
    hs_8c0db5d4(o, t1);
    operation_8c224fb0(o, t1);
    hs_8c199b80(((ObjectData *)o)->f98, t1);
    hs_8c199bc8(((ObjectData *)o)->f9c, t1, ((char *)o + 0x78));
    if (((ObjectData *)o)->f81 != 0) {
        if (((ObjectData *)o)->f81 == 1) {
            goto L_8c224a8a;
        }
        if (((ObjectData *)o)->f81 == 2) {
            goto L_8c224a96;
        }
        return;
    }
    hs_8c224bb4(o, t1);
    return;
L_8c224a8a:;
    hs_8c224cc4(o, t1);
    return;
L_8c224a96:;
    hs_8c224ddc(o, t1);
}
