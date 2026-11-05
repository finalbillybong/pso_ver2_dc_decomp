/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a1a78
 * function: operation_8c0a1a78
 * language: c++
 * reference size: 240 bytes
 * compiled size: 240 bytes (+0.0%)
 * differing lines: 76 of 90 reference instruction lines
 * differing bytes: 68
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * runtime: equal on boot+title+opening movie; menu to registration screen; offline start: new
 *   character to Pioneer 2 (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c3032d8 S_g8c3032d8;
typedef struct S_g8c46ee80 S_g8c46ee80;
class S_vv1;
struct S_g8c46ee80 {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
    float f9c;
    float fa0;
    float fa4;
    char unknowna8[0x10];
    float fb8;
    float fbc;
    float fc0;
    float fc4;
    float fc8;
    float fcc;
};
class S_vv1 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};
typedef struct S_vv1Data {
    char unknown0[0x40];
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
} S_vv1Data;
extern S_g8c46ee80 *g_8c46ee80;
extern unsigned char g_8c46efc8;
extern "C" void operation_8c0a1a78(int a0)
{
    S_vv1 *v1;
    g_8c46efc8 = a0;
    v1 = (S_vv1 *)*(S_g8c3032d8 **)((char *)0x8c3032d8 + (g_8c46efc8 << 2));
    if (v1 != 0) {
        v1->v6();
        if (g_8c46ee80 != 0) {
            g_8c46ee80->f90 = g_8c46ee80->fb8 = ((S_vv1Data *)v1)->f40;
            g_8c46ee80->f94 = g_8c46ee80->fbc = ((S_vv1Data *)v1)->f44;
            g_8c46ee80->f98 = g_8c46ee80->fc0 = ((S_vv1Data *)v1)->f48;
            g_8c46ee80->f9c = g_8c46ee80->fc4 = ((S_vv1Data *)v1)->f4c;
            g_8c46ee80->fa0 = g_8c46ee80->fc8 = ((S_vv1Data *)v1)->f50;
            g_8c46ee80->fa4 = g_8c46ee80->fcc = ((S_vv1Data *)v1)->f54;
        }
    }
}
