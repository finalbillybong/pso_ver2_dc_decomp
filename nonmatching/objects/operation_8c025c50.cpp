/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c025c50
 * function: operation_8c025c50
 * language: c++
 * reference size: 544 bytes
 * compiled size: 544 bytes (+0.0%)
 * differing lines: 62 of 238 reference instruction lines
 * differing bytes: 70
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
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg1 Arg1;
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
struct Arg1 {
    float f00;
    float f04;
    float f08;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x8];
    int f18;
};
extern "C" int operation_8c052c38(Object *, Object *, void *);
extern "C" int operation_8c026934(void *, void *);
extern "C" float errno_wrap_8c130334(float, float);
extern "C" float njScalor_8c37e480(void *);
extern "C" float njSin_8c37eb0c(int);
extern "C" float njCos_8c38c154(int);
extern "C" int operation_8c011214(int, int, int);
extern "C" int operation_8c025c50(Object *o, Arg1 *a1)
{
    Frame frame;
    int v1;
    int v2;
    float v3;
    float v4;
    int t1;
    int t2;
    int t3;
    float t4;
    int t5;
    float t6;
    float t7;
    float t8;
    (&frame)->f18 = ((ObjectData *)o)->f3c + a1->f00;
    (&frame)->f1c = ((ObjectData *)o)->f40 + a1->f04;
    (&frame)->f20 = ((ObjectData *)o)->f44 + a1->f08;
    v1 = (int)((ObjectData *)o)->fdc->f18;
    if (((v1 & 0x700000)) != 0) {
        if (((v1 & 0x3800000)) == 0) {
            goto L_8c025e1c;
        }
        ((ObjectData *)o)->f320 = 0.0f;
        ((ObjectData *)o)->f31c = 0.0f;
        ((ObjectData *)o)->f318 = 0.0f;
        return 4;
    }
    t1 = operation_8c052c38(o, o, (void *)(&(&frame)->f18));
    if (t1 != 0) {
        ((ObjectData *)o)->f320 = 0.0f;
        ((ObjectData *)o)->f31c = 0.0f;
        ((ObjectData *)o)->f318 = 0.0f;
        return 4;
    }
    t2 = operation_8c026934((void *)o, (void *)(&(&frame)->f18));
    if (t2 != 0) {
        ((ObjectData *)o)->f320 = 0.0f;
        ((ObjectData *)o)->f31c = 0.0f;
        ((ObjectData *)o)->f318 = 0.0f;
        return 3;
    }
    t3 = o->v19(&(&frame)->f18);
    if (t3 == 0) {
        ((ObjectData *)o)->f320 = 0.0f;
        ((ObjectData *)o)->f31c = 0.0f;
        ((ObjectData *)o)->f318 = 0.0f;
        return 1;
    }
    t6 = errno_wrap_8c130334(((ObjectData *)o)->f318, ((ObjectData *)o)->f320);
    v2 = (int)(int)(t6 * 65536.0f / 6.28318405f);
    t7 = njScalor_8c37e480((void *)(((char *)o + 0x318)));
    v3 = (float)(t7 + ((ObjectData *)o)->fdc->f0c);
    t8 = njSin_8c37eb0c(v2);
    v4 = (float)(v3 * t8);
    v3 *= njCos_8c38c154(v2);
    (&frame)->f00 = ((ObjectData *)o)->f3c;
    (&frame)->f04 = ((ObjectData *)o)->f40 + 5.0f;
    (&frame)->f08 = ((ObjectData *)o)->f44;
    (&frame)->f0c = (&frame)->f00 + v4;
    (&frame)->f10 = (&frame)->f04;
    (&frame)->f14 = (&frame)->f08 + v3;
    t5 = operation_8c011214((int)(&frame), (int)(&(&frame)->f0c), 0x28a0);
    if (t5 != 0) {
        ((ObjectData *)o)->f320 = 0.0f;
        ((ObjectData *)o)->f31c = 0.0f;
        ((ObjectData *)o)->f318 = 0.0f;
        return 2;
    }
    return 0;
L_8c025e1c:;
    return 0;
}
