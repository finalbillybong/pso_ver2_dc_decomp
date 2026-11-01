/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08b160
 * function: TMovie_render_shadow_8c08b160
 * language: c++
 * reference size: 204 bytes
 * compiled size: 204 bytes (+0.0%)
 * differing lines: 22 of 86 reference instruction lines
 * differing bytes: 81
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
class Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
};
struct Frame {
    int f00;
    int f04;
};
class Arg0_20 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7(void *, Frame *);
};
typedef struct Arg0_20Data {

} Arg0_20Data;
extern "C" char g_8c300204[];
extern "C" int call_8c18e768(int, int);
extern "C" int call_8c18e8a0(int, int);
extern "C" void debug_print_at_8c38cf80(int, void *, ...);
extern "C" void TMovie_render_shadow_8c08b160(Object *o)
{
    Frame frame;
    int t5;
    int v1;
    int t1;
    int t2;
    int v2;
    int t4;
    int t3;
    o->f20->v7(&(&frame)->f04, (&frame));
    v1 = (int)(int)((float)(&frame)->f04 / (float)(&frame)->f00 * 1000.0f);
    t3 = call_8c18e768(v1, 0x36ee80);
    v2 = (int)(v1 - t3 * 0x36ee80);
    t2 = call_8c18e768(v2, 0xea60);
    t1 = call_8c18e8a0(v1, 0x3e8);
    t5 = call_8c18e768((int)(t1 * 0x1e), 0x3e8);
    v2 -= t2 * 0xea60;
    t4 = call_8c18e768(v2, 0x3e8);
    debug_print_at_8c38cf80(4, (void *)((g_8c300204 + 0x7)), ((char *)o + 0x48), t3, t2, t4, t5);
}
