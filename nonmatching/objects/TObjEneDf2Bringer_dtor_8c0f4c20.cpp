/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f4c20
 * function: TObjEneDf2Bringer_dtor_8c0f4c20
 * language: c++
 * reference size: 244 bytes
 * compiled size: 244 bytes (+0.0%)
 * differing lines: 4 of 91 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TObjEneDf2Bringer.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_46c Arg0_46c;
typedef struct Arg0_48c Arg0_48c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv4 S_vv4;
class Arg0_460;
class Arg0_468;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x444];
    Arg0_460 *f460;
    int f464;
    Arg0_468 *f468;
    Arg0_46c *f46c;
    char unknown470[0x1c];
    Arg0_48c *f48c;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_vv4 {
    char unknown0[0x4];
    short f04;
};
class Arg0_468 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct Arg0_468Data {

} Arg0_468Data;
class Arg0_460 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct Arg0_460Data {

} Arg0_460Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void operation_8c0f3384(int, int);
extern "C" void operation_8c052124(void *);
extern "C" void destroy_field_8c178048(void *, short);
extern "C" void destroy_field_8c0fbfa4(void *, short);
extern "C" void destroy_color_rise_8c05bd84(void *, short);
extern "C" void operation_8c122774(void *, void *);
extern "C" Object *TObjEneDf2Bringer_dtor_8c0f4c20(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv4 *v4;
    if (o != 0) {
        o->dispatch = (void *)(void *)0x8c268870;
        if (o->f48c != 0) {
            v1 = (S_vv1 *)o->f48c;
            v1->f04 |= 1;
            o->f48c = (Arg0_48c *)0;
        }
        v4 = (S_vv4 *)o->f46c;
        v4->f04 |= 1;
        o->f46c = (Arg0_46c *)0;
        if (o->f468 != 0) {
            o->f468->v0(1);
        }
        o->f468 = (Arg0_468 *)0;
        operation_8c0f3384((int)(o->f464), 1);
        o->f464 = 0;
        if (o->f460 != 0) {
            o->f460->v0(1);
        }
        o->f460 = (Arg0_460 *)0;
        operation_8c052124((void *)o);
        destroy_field_8c178048((void *)(((char *)o + 0x3fc)), (short)-1);
        destroy_field_8c0fbfa4((void *)(((char *)o + 0x3e0)), (short)-1);
        destroy_color_rise_8c05bd84((void *)o, (short)0);
        if ((short)a1 > 0) {
            operation_8c122774(g_8c4d97e0, (void *)o);
        }
    }
    return o;
}
