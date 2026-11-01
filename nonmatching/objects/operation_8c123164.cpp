/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c123164
 * function: operation_8c123164
 * language: c++
 * reference size: 2720 bytes
 * compiled size: 2720 bytes (+0.0%)
 * differing lines: 164 of 1009 reference instruction lines
 * differing bytes: 208
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
typedef struct Arg0_64 Arg0_64;
class Object;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
typedef struct Block_frame_18 {
    float f00;
    float f04;
    float f08;
} Block_frame_18;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
typedef struct Block_p0_110 {
    float f00;
    float f04;
    float f08;
} Block_p0_110;
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
};
typedef struct ObjectData {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    Vector3 f48;
    char unknown54[0x10];
    Arg0_64 *f64;
    char unknown68[0x8];
    float f70;
    char unknown74[0x80];
    int ff4;
    char unknownf8[0x10];
    float f108;
    char unknown10c[0x4];
    Block_p0_110 f110;
    Vector3 f11c;
    float f128;
    float f12c;
    float f130;
    short f134;
    short f136;
    unsigned char f138;
    unsigned char f139;
    unsigned char f13a;
} ObjectData;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
    Block_frame_18 f18;
    float f24;
    char unknown28[0x4];
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    char unknown40[0x4];
    float f44;
    float f48;
    float f4c;
    float f50;
};
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c0eeb58(void *);
extern "C" float njSin_8c37eb0c(int);
extern "C" int rand(void);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3be38c(int, void *, void *);
extern "C" void njPopMatrix_8c38accc(int);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" void njUnitVector_8c37b630(void *);
extern "C" float call_8c38d7d8(void *, void *);
extern "C" void call_8c3bdf60(void *, void *);
extern "C" void operation_8c123d48(void *);
extern "C" void operation_8c123d1c(void *);
extern "C" void call_8c123d8c(Object *);
extern "C" void operation_8c123164(Object *o)
{
    Frame frame;
    float v37;
    float v38;
    int t1;
    float t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    float t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    float t21;
    int t22;
    *(Vector3 *)&((ObjectData *)o)->f48 = *(Vector3 *)&((ObjectData *)o)->f3c;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        o->v15();
        return;
    }
    if (((ObjectData *)o)->ff4 != 0) {
        operation_8c0eeb58((void *)o);
    }
    t2 = njSin_8c37eb0c((int)(((ObjectData *)o)->f136));
    v37 = (float)((ObjectData *)o)->f108;
    v38 = (float)(v37 + t2 * 3.2f);
    if ((((ObjectData *)o)->f139) == 0) {
        ((ObjectData *)o)->f130 = (v38 - ((ObjectData *)o)->f3c.f04) * 5.0f;
        if (0.1f > ((ObjectData *)o)->f130) {
            ((ObjectData *)o)->f130 = 0.1f;
        } else {
            if (((ObjectData *)o)->f130 > 4.0f) {
                ((ObjectData *)o)->f130 = 4.0f;
            }
        }
        ((ObjectData *)o)->f12c = ((ObjectData *)o)->f130 * 0.01f * 2.0f + 0.3f;
        ((ObjectData *)o)->f110.f04 += ((ObjectData *)o)->f130 * 0.027f * 0.1f;
        ((ObjectData *)o)->f110.f04 -= 0.027f;
    } else {
        ((ObjectData *)o)->f130 = (v38 - ((ObjectData *)o)->f3c.f04) * -7.0f;
        if (0.1f > ((ObjectData *)o)->f130) {
            ((ObjectData *)o)->f130 = 0.1f;
        } else {
            if (((ObjectData *)o)->f130 > 4.0f) {
                ((ObjectData *)o)->f130 = 4.0f;
            }
        }
        ((ObjectData *)o)->f12c = ((ObjectData *)o)->f130 * 0.1f * 2.0f + 0.32f;
        ((ObjectData *)o)->f110.f04 -= ((ObjectData *)o)->f130 * 0.027f * 0.5f;
        ((ObjectData *)o)->f110.f04 -= 0.027f;
        ((ObjectData *)o)->f128 += ((ObjectData *)o)->f12c;
        if (((ObjectData *)o)->f128 > 5.0f) {
            ((ObjectData *)o)->f128 = 0.0f;
            ((ObjectData *)o)->f139 = 0;
        }
    }
    switch ((unsigned char)((ObjectData *)o)->f138) {
    case 0:
        ((ObjectData *)o)->f110.f00 *= 0.8f;
        ((ObjectData *)o)->f110.f08 *= 0.8f;
        break;
    case 1:
        if ((((ObjectData *)o)->f139) == 0) {
            t3 = rand();
            (&frame)->f48 = ((float)t3 / 32768.0f * 2.0f - 1.0f) * 0.0015f * 2.0f;
            (&frame)->f4c = 0.0f;
            (&frame)->f50 = (float)rand() / 32768.0f * 0.0015f * 2.0f + 0.05f;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            call_8c3be38c(0, (void *)(&(&frame)->f48), (void *)(&(&frame)->f3c));
            njPopMatrix_8c38accc(1);
            ((ObjectData *)o)->f110.f00 += (&frame)->f3c;
            ((ObjectData *)o)->f110.f08 += (&frame)->f44;
            ((ObjectData *)o)->f110.f00 *= 0.72f;
            ((ObjectData *)o)->f110.f08 *= 0.72f;
            break;
        }
        ((ObjectData *)o)->f110.f00 *= 0.85f;
        ((ObjectData *)o)->f110.f08 *= 0.85f;
        break;
    case 2:
        if ((((ObjectData *)o)->f13a) == 0) {
            t5 = rand();
            ((ObjectData *)o)->f64 = (Arg0_64 *)(int)((float)(int)((ObjectData *)o)->f64 + ((float)t5 / 32768.0f * 200.0f + 200.0f));
        } else {
            t6 = rand();
            ((ObjectData *)o)->f64 = (Arg0_64 *)(int)((float)(int)((ObjectData *)o)->f64 - ((float)t6 / 32768.0f * 200.0f + 200.0f));
        }
        if ((((ObjectData *)o)->f139) == 0) {
            t7 = rand();
            (&frame)->f30 = ((float)t7 / 32768.0f * 2.0f - 1.0f) * 0.025f * 2.0f;
            (&frame)->f34 = 0.0f;
            t8 = rand();
            (&frame)->f38 = (float)t8 / 32768.0f * 0.025f * 2.0f + 0.05f;
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            call_8c3be38c(0, (void *)(&(&frame)->f30), (void *)(&(&frame)->f24));
            njPopMatrix_8c38accc(1);
            ((ObjectData *)o)->f110.f00 += (&frame)->f24;
            ((ObjectData *)o)->f110.f08 += (&frame)->f2c;
            ((ObjectData *)o)->f110.f00 *= 0.85f;
            ((ObjectData *)o)->f110.f08 *= 0.85f;
            break;
        }
        ((ObjectData *)o)->f110.f00 *= 0.75f;
        ((ObjectData *)o)->f110.f08 *= 0.75f;
        break;
    case 3:
        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&((ObjectData *)o)->f11c;
        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f18), (void *)(((char *)o + 0x3c)));
        njUnitVector_8c37b630((void *)(&(&frame)->f18));
        (&frame)->f18.f00 = (&frame)->f18.f00 / 5.0f;
        (&frame)->f18.f04 = (&frame)->f18.f04 / 5.0f;
        (&frame)->f18.f08 = (&frame)->f18.f08 / 5.0f;
        *(Vector3 *)&((ObjectData *)o)->f110 = *(Vector3 *)&(&frame)->f18;
        t9 = call_8c38d7d8((void *)(((char *)o + 0x11c)), (void *)(((char *)o + 0x3c)));
        if (!((((ObjectData *)o)->f70 / 5.0f) > t9)) {
            break;
        }
        ((ObjectData *)o)->f138 = 1;
        break;
    case 4:
        *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((ObjectData *)o)->f3c;
        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f0c), (void *)(((char *)o + 0x11c)));
        njUnitVector_8c37b630((void *)(&(&frame)->f0c));
        (&frame)->f0c.f00 = (&frame)->f0c.f00 / 5.0f;
        (&frame)->f0c.f04 = (&frame)->f0c.f04 / 5.0f;
        (&frame)->f0c.f08 = (&frame)->f0c.f08 / 5.0f;
        *(Vector3 *)&((ObjectData *)o)->f110 = *(Vector3 *)&(&frame)->f0c;
    }
    call_8c3bdf60((void *)(((char *)o + 0x3c)), (void *)(((char *)o + 0x110)));
    if (((ObjectData *)o)->f3c.f04 > (v38 + 12.0f)) {
        ((ObjectData *)o)->f3c.f04 = v38 + 12.0f;
    } else {
        if (((ObjectData *)o)->f3c.f04 < (v38 - 6.0f)) {
            ((ObjectData *)o)->f3c.f04 = v38 - 6.0f;
        }
    }
    if (((ObjectData *)o)->f134 != 0) {
        ((ObjectData *)o)->f134 -= 1;
    } else {
        switch ((unsigned char)((ObjectData *)o)->f138) {
        case 0:
            ((ObjectData *)o)->f138 = 1;
            t10 = rand();
            ((ObjectData *)o)->f134 = (int)((float)t10 / 32768.0f * 20.0f * 2.0f + 20.0f);
            break;
        case 1:
            t11 = rand();
            if (0.5f > ((float)t11 / 32768.0f)) {
                ((ObjectData *)o)->f138 = 2;
                t12 = rand();
                ((ObjectData *)o)->f134 = (int)((float)t12 / 32768.0f * 50.0f + 50.0f);
                t13 = rand();
                if (0.5f > ((float)t13 / 32768.0f)) {
                    ((ObjectData *)o)->f13a = 0;
                    break;
                }
                ((ObjectData *)o)->f13a = 1;
                break;
            }
            ((ObjectData *)o)->f138 = 0;
            t14 = rand();
            ((ObjectData *)o)->f134 = (int)((float)t14 / 32768.0f * 30.0f + 30.0f);
            break;
        case 2:
            t15 = rand();
            if (0.4f > ((float)t15 / 32768.0f)) {
                ((ObjectData *)o)->f138 = 2;
                t16 = rand();
                ((ObjectData *)o)->f134 = (int)((float)t16 / 32768.0f * 50.0f + 50.0f);
                t17 = rand();
                if (0.5f > ((float)t17 / 32768.0f)) {
                    ((ObjectData *)o)->f13a = 0;
                    break;
                }
                ((ObjectData *)o)->f13a = 1;
                break;
            }
            ((ObjectData *)o)->f138 = 1;
            t18 = rand();
            ((ObjectData *)o)->f134 = (int)((float)t18 / 32768.0f * 30.0f * 2.0f + 30.0f);
            break;
        case 3:
            if ((((ObjectData *)o)->f13a) == 0) {
                t19 = rand();
                ((ObjectData *)o)->f64 = (Arg0_64 *)(int)((float)(int)((ObjectData *)o)->f64 + ((float)t19 / 32768.0f * 200.0f + 200.0f));
            } else {
                t20 = rand();
                ((ObjectData *)o)->f64 = (Arg0_64 *)(int)((float)(int)((ObjectData *)o)->f64 - ((float)t20 / 32768.0f * 200.0f + 200.0f));
            }
            if ((((ObjectData *)o)->f139) == 0) {
                njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
                njPopMatrix_8c38accc(1);
            }
            t21 = call_8c38d7d8((void *)(((char *)o + 0x11c)), (void *)(((char *)o + 0x3c)));
            if (!((((ObjectData *)o)->f70 / 5.0f) > t21)) {
                break;
            }
            ((ObjectData *)o)->f138 = 1;
            break;
        case 4:
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((ObjectData *)o)->f3c;
            vector_sub_in_place_8c37f6f0((void *)(&frame), (void *)(((char *)o + 0x11c)));
            njUnitVector_8c37b630((void *)(&frame));
            (&frame)->f00.f00 = (&frame)->f00.f00 / 5.0f;
            (&frame)->f00.f04 = (&frame)->f00.f04 / 5.0f;
            (&frame)->f00.f08 = (&frame)->f00.f08 / 5.0f;
            *(Vector3 *)&((ObjectData *)o)->f110 = *(Vector3 *)&(&frame)->f00;
        }
    }
    operation_8c123d48((void *)o);
    operation_8c123d1c((void *)o);
    call_8c123d8c(o);
    t22 = rand();
    ((ObjectData *)o)->f136 += (int)((float)t22 / 32768.0f * 40.0f + 160.0f);
}
