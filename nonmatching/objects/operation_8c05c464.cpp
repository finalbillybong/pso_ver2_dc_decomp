/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05c464
 * function: operation_8c05c464
 * language: c++
 * reference size: 284 bytes
 * compiled size: 280 bytes (-1.4%)
 * differing lines: 38 of 119 reference instruction lines
 * differing bytes: 205
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c0 S_c0;
typedef struct S_c0_4 S_c0_4;
typedef struct Frame Frame;
typedef struct Arg0_64 Arg0_64;
class Object;
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
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual int v19(Frame *);
};
typedef struct ObjectData {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    char unknown54[0x10];
    Arg0_64 *f64;
    char unknown68[0x108];
    Vector3 f170;
    char unknown17c[0x224];
    int f3a0;
    char unknown3a4[0x18];
    float f3bc;
    char unknown3c0[0x4];
    float f3c4;
} ObjectData;
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct S_c0 {
    char unknown0[0x4];
    S_c0_4 *f04;
};
struct S_c0_4 {
    char unknown0[0xc];
    Vector3 f0c;
};
extern "C" float errno_wrap_8c130334(float, float);
extern "C" int angle_step(int, int, int);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float njCos_8c38c154(void *);
extern "C" void advance_scaled_contact(void *, void *, float, float, float);
extern "C" S_c0 *operation_8c05c464(Object *o, int a1, float f0)
{
    Frame frame;
    float v1;
    float t1;
    int t2;
    float t3;
    float t4;
    S_c0 *t5;
    t1 = errno_wrap_8c130334(((ObjectData *)o)->f3bc, ((ObjectData *)o)->f3c4);
    t2 = angle_step((int)(((ObjectData *)o)->f64), (int)((int)(t1 * 65536.0f / 6.28318405f)), a1);
    ((ObjectData *)o)->f64 = (Arg0_64 *)(short)t2;
    t3 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f64));
    t4 = njCos_8c38c154((void *)(((ObjectData *)o)->f64));
    advance_scaled_contact((void *)o, (void *)(&frame), t3, t4, f0);
    v1 = (float)((ObjectData *)o)->f40;
    t5 = (S_c0 *)o->v19((&frame));
    if (t5 != 0) {
        ((ObjectData *)o)->f48 = ((ObjectData *)o)->f3c;
        ((ObjectData *)o)->f4c = v1;
        ((ObjectData *)o)->f50 = ((ObjectData *)o)->f44;
        ((ObjectData *)o)->f3c = (&frame)->f00;
        ((ObjectData *)o)->f44 = (&frame)->f08;
        *(Vector3 *)&((ObjectData *)o)->f170 = *(Vector3 *)&t5->f04->f0c;
        ((ObjectData *)o)->f3a0 = 0;
    } else {
        ((ObjectData *)o)->f3a0 += 1;
    }
    return t5;
}
