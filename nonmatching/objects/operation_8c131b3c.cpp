/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c131b3c
 * function: operation_8c131b3c
 * language: c++
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 12 of 56 reference instruction lines
 * differing bytes: 31
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
typedef struct Arg0_f4 Arg0_f4;
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
    char unknown68[0x80];
    float fe8;
    char unknownec[0x8];
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
    char unknown100[0x28];
    float f128;
} ObjectData;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3addea(float, void *, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c131b3c(Object *o)
{
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, 0.0f, ((ObjectData *)o)->f128, 0.0f);
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        call_8c3addea(((ObjectData *)o)->fe8, (void *)(((ObjectData *)o)->f38), (void *)(((ObjectData *)o)->ff4));
        njPopMatrixEx_8c38ad10();
    }
}
