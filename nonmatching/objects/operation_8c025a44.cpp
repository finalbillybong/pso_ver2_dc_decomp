/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c025a44
 * function: operation_8c025a44
 * language: c++
 * reference size: 524 bytes
 * compiled size: 524 bytes (+0.0%)
 * differing lines: 56 of 232 reference instruction lines
 * differing bytes: 62
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_dc Arg0_dc;
class Object;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
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
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual int v19(void *);
};
typedef struct ObjectData {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x238];
    float f318;
    float f31c;
    float f320;
} ObjectData;
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x8];
    int f18;
};
extern "C" int operation_8c026934(Object *, void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" float njScalor_8c37e480(void *);
extern "C" float njSin_8c37eb0c(int);
extern "C" float njCos_8c38c154(int);
extern "C" int operation_8c011214(int, int, int);
extern "C" int operation_8c025a44(Object *o)
{
    Frame frame;
    int v1;
    float v2;
    float v3;
    int t1;
    int t2;
    float t3;
    int t4;
    float t5;
    float t6;
    float t7;
    (&frame)->f18 = ((ObjectData *)o)->f318 + ((ObjectData *)o)->f3c;
    (&frame)->f1c = ((ObjectData *)o)->f31c + ((ObjectData *)o)->f40;
    (&frame)->f20 = ((ObjectData *)o)->f320 + ((ObjectData *)o)->f44;
    if (((((ObjectData *)o)->fdc->f18 & 0x3800000)) != 0) {
        ((ObjectData *)o)->f320 = 0.0f;
        ((ObjectData *)o)->f31c = 0.0f;
        ((ObjectData *)o)->f318 = 0.0f;
        return 4;
    }
    t1 = operation_8c026934(o, (void *)(&(&frame)->f18));
    if (t1 != 0) {
        ((ObjectData *)o)->f320 = 0.0f;
        ((ObjectData *)o)->f31c = 0.0f;
        ((ObjectData *)o)->f318 = 0.0f;
        return 3;
    }
    t2 = o->v19(&(&frame)->f18);
    if (t2 == 0) {
        ((ObjectData *)o)->f320 = 0.0f;
        ((ObjectData *)o)->f31c = 0.0f;
        ((ObjectData *)o)->f318 = 0.0f;
        return 1;
    }
    t5 = errno_wrap_8c130334(((ObjectData *)o)->f318, ((ObjectData *)o)->f320);
    v1 = (int)(int)(t5 * 65536.0f / 6.28318405f);
    t6 = njScalor_8c37e480((void *)(((char *)o + 0x318)));
    v2 = (float)(t6 + ((ObjectData *)o)->fdc->f0c);
    t7 = njSin_8c37eb0c(v1);
    v3 = (float)(v2 * t7);
    t3 = njCos_8c38c154(v1);
    (&frame)->f00 = ((ObjectData *)o)->f3c;
    (&frame)->f04 = ((ObjectData *)o)->f40 + 5.0f;
    (&frame)->f08 = ((ObjectData *)o)->f44;
    (&frame)->f0c = (&frame)->f00 + v3;
    (&frame)->f10 = (&frame)->f04;
    (&frame)->f14 = (&frame)->f08 + v2 * t3;
    t4 = operation_8c011214((int)(&frame), (int)(&(&frame)->f0c), 0x28a0);
    if (t4 != 0) {
        ((ObjectData *)o)->f320 = 0.0f;
        ((ObjectData *)o)->f31c = 0.0f;
        ((ObjectData *)o)->f318 = 0.0f;
        return 2;
    }
    ((ObjectData *)o)->f3c += ((ObjectData *)o)->f318;
    ((ObjectData *)o)->f40 += ((ObjectData *)o)->f31c;
    ((ObjectData *)o)->f44 += ((ObjectData *)o)->f320;
    return 0;
}
