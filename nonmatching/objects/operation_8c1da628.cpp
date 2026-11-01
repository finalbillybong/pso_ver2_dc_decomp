/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1da628
 * function: operation_8c1da628
 * language: c++
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 8 of 88 reference instruction lines
 * differing bytes: 12
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
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_9c Arg0_9c;
typedef struct Arg0_c4 Arg0_c4;
typedef struct Arg0_c4_0 Arg0_c4_0;
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
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x2c];
    float f94;
    float f98;
    Arg0_9c *f9c;
    char unknowna0[0x8];
    float fa8;
    char unknownac[0x10];
    int fbc;
    int fc0;
    Arg0_c4 *fc4;
    char unknownc8[0x10];
    float fd8;
} ObjectData;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void call_8c3827d8(void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3ac53a(void *, void *, float);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c1da628(Object *o)
{
    Arg0_28 *pm3;
    ObjectData *pm9;
    int t1;
    int v1;
    void *pm7;
    ObjectData *pm2;
    pm2 = (ObjectData *)o;
    t1 = o->v11((pm2)->f94, ((ObjectData *)o)->f98);
    if (!(0 == t1)) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        pm9 = (ObjectData *)o;
        pm3 = (pm9)->f28;
        call_8c3827d8((void *)(pm3));
        v1 = 0;
        while (v1 < ((ObjectData *)o)->fbc) {
            void *pm4;
            pm2 = (ObjectData *)o;
            njPushMatrixEx_8c38ae68();
            njTranslate_8c3829bc(0, 0.0f, ((ObjectData *)o)->fd8, 0.0f);
            t1 = 0xc * v1 + ((ObjectData *)o)->fc0;
            translate_current_matrix_v_8c382a40((void *)(t1));
            pm4 = (void *)(((ObjectData *)o)->f64);
            njRotateY_8c37df90((int)(unsigned char)(0), pm4);
            njRotateY_8c37df90(0, (void *)(*(Arg0_c4_0 **)((v1 << 2) + ((0x0 + (char *)((ObjectData *)o)->fc4)))));
            pm7 = (void *)(((ObjectData *)o)->f9c);
            call_8c3ac53a((void *)((pm2)->f38), pm7, ((ObjectData *)o)->fa8);
            njPopMatrixEx_8c38ad10();
            v1 += 1;
        }
        njPopMatrixEx_8c38ad10();
    }
}
