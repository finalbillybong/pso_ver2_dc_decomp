/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c157e74
 * function: operation_8c157e74
 * language: c++
 * reference size: 240 bytes
 * compiled size: 240 bytes (+0.0%)
 * differing lines: 20 of 78 reference instruction lines
 * differing bytes: 40
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
typedef struct Arg0_100 Arg0_100;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_108 Arg0_108;
typedef struct Arg0_10c Arg0_10c;
typedef struct Arg0_110 Arg0_110;
typedef struct Arg0_114 Arg0_114;
typedef struct Arg0_118 Arg0_118;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_fc Arg0_fc;
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
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x8c];
    float ff4;
    float ff8;
    Arg0_fc *ffc;
    Arg0_100 *f100;
    Arg0_104 *f104;
    Arg0_108 *f108;
    Arg0_10c *f10c;
    Arg0_110 *f110;
    Arg0_114 *f114;
    Arg0_118 *f118;
} ObjectData;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void reset_state_8c391c94(void);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3addea(void *, float, void *);
extern "C" void reset_state_8c391cc4(void);
extern "C" void call_8c3aa716(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c157e74(Object *o)
{
    int t1;
    float f;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        reset_state_8c391c94();
        call_8c3827d8((void *)(((ObjectData *)o)->f108));
        f = ((ObjectData *)o)->ff4;
        call_8c3addea((void *)(((ObjectData *)o)->ffc), f, (void *)(((ObjectData *)o)->f114));
        call_8c3827d8((void *)(((ObjectData *)o)->f110));
        f = ((ObjectData *)o)->ff8;
        call_8c3addea((void *)(((ObjectData *)o)->f104), f, (void *)(((ObjectData *)o)->f118));
        reset_state_8c391cc4();
        call_8c3827d8((void *)(((ObjectData *)o)->f10c));
        call_8c3aa716((void *)(((ObjectData *)o)->f100));
        njPopMatrixEx_8c38ad10();
    }
}
