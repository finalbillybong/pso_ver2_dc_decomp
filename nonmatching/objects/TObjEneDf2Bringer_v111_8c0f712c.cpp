/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f712c
 * function: TObjEneDf2Bringer_v111_8c0f712c
 * language: c++
 * reference size: 304 bytes
 * compiled size: 304 bytes (+0.0%)
 * differing lines: 4 of 116 reference instruction lines
 * differing bytes: 2
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
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_114 Arg0_114;
typedef struct Arg0_114_4 Arg0_114_4;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
class Object;
struct Frame {
    Vector3 f00;
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
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0xa8];
    Arg0_110 *f110;
    Arg0_114 *f114;
    char unknown118[0x258];
    float f370;
    float f374;
} ObjectData;
struct Arg0_114_4 {
    char unknown0[0x4];
    int f04;
};
extern Vector3 g_8c30a0a0;
extern "C" void call_8c05a0a8(void);
extern "C" void call_8c05ba9c(Object *);
extern "C" void operation_8c1086fc(void);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3addea(void *, float);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void TObjEneDf2Bringer_v111_8c0f712c(Object *o)
{
    Frame frame;
    int v1;
    float v4;
    int v3;
    int v5;
    float v8;
    float v11;
    int t1;
    Arg0_114_4 *e;
    call_8c05a0a8();
    t1 = o->v11(400.0f, 15.0f);
    if (t1 != 0) {
        {
            Vector3 *p_ = (Vector3 *)&g_8c30a0a0;
            *(Vector3 *)&(&frame)->f00 = *p_;
        }
        call_8c05ba9c(o);
        operation_8c1086fc();
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        if (!((int)((ObjectData *)o)->f370 >= 0)) {
            v3 = (int)0;
        } else {
            v1 = (int)(int)((ObjectData *)o)->f370;
            if ((int)((ObjectData *)o)->f370 >= 0xb) {
                v1 = (int)0xa;
            }
            v3 = (int)v1;
        }
        e = *(Arg0_114_4 **)((char *)((char *)((ObjectData *)o)->f114 + 0x4) + (*(int *)((char *)((char *)((ObjectData *)o)->f110 + 0x4) + (v3 << 4)) << 3));
        v4 = ((ObjectData *)o)->f374;
        if (0.0f > v4) {
            v4 = 0.0f;
        } else {
            v5 = e->f04 + -1;
            if (v4 > (float)(unsigned int)v5) {
                v4 = (float)(unsigned int)v5;
            }
        }
        call_8c3addea((void *)(((ObjectData *)o)->f38), v4);
        njPopMatrixEx_8c38ad10();
        reset_state_8c391cc4();
    }
}
