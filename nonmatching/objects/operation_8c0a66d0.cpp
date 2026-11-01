/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a66d0
 * function: operation_8c0a66d0
 * language: c++
 * reference size: 192 bytes
 * compiled size: 200 bytes (+4.2%)
 * differing lines: 28 of 76 reference instruction lines
 * differing bytes: 58
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_20 Arg0_20;
class Object;
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
};
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13(int);
};
typedef struct ObjectData {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x4c];
    float f70;
    float f74;
    float f78;
    float f7c;
    float f80;
    float f84;
    char unknown88[0x8];
    int f90;
} ObjectData;
struct Arg0_20 {
    char unknown0[0x64];
    int f64;
};
extern "C" int get_current_area_8c032b10(void);
extern "C" void operation_8c06536c(void *, void *);
extern "C" void forward_effect_view(void *, void *);
extern "C" void operation_8c0a66d0(Object *o)
{
    Frame frame;
    int t1;
    t1 = get_current_area_8c032b10();
    if (t1 == 0xb) {
        operation_8c06536c((void *)(&frame), (void *)(&(&frame)->f0c));
        forward_effect_view((void *)(&frame), (void *)(&(&frame)->f0c));
        return;
    }
    if (((((ObjectData *)o)->f90 & 8)) == 0) {
        o->v13(((ObjectData *)o)->f20->f64 + 0x8000);
        ((ObjectData *)o)->f7c = 0.0f;
        ((ObjectData *)o)->f80 = 19.8f;
        ((ObjectData *)o)->f84 = -5.0f;
        ((ObjectData *)o)->f70 = ((Vector3 *)0x8c303bb0)->x;
        ((ObjectData *)o)->f74 = ((Vector3 *)0x8c303bb0)->y;
        ((ObjectData *)o)->f78 = ((Vector3 *)0x8c303bb0)->z;
    }
    ((ObjectData *)o)->f90 &= -9;
}
