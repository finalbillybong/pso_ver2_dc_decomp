/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c130e20
 * function: operation_8c130e20
 * language: c++
 * reference size: 268 bytes
 * compiled size: 264 bytes (-1.5%)
 * differing lines: 20 of 103 reference instruction lines
 * differing bytes: 121
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
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
    char unknown68[0x7c];
    int fe4;
    float fe8;
    float fec;
    char unknownf0[0x4];
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
} ObjectData;
extern "C" int operation_8c0eeb00(void *, float);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3addea(void *, float, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void call_8c130f2c(Object *);
extern "C" void operation_8c130e20(Object *o)
{
    float pm5;
    int pm3;
    int t2;
    ObjectData *pm6;
    int t1;
    Arg0_38 *pm7;
    void *pm8;
    ObjectData *pm9;
    ObjectData *pm4;
    void *pm11;
    float pm12;
    int pm13;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        t1 = operation_8c0eeb00((void *)o, 30.0f);
        t2 = t1;
        if (t2 != 0) {
            switch (((ObjectData *)o)->fe4) {
                case 1:
                case 3:
                njPushMatrixEx_8c38ae68();
                translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
                pm9 = (ObjectData *)o;
                pm6 = pm9;
                pm13 = 0;
                pm3 = pm13;
                pm11 = (void *)(((ObjectData *)o)->f64);
                njRotateY_8c37df90(pm3, pm11);
                pm11 = (void *)(((ObjectData *)o)->f28);
                call_8c3827d8(pm11);
                call_8c3addea((void *)((pm6)->f38), ((ObjectData *)o)->fe8, (void *)(((ObjectData *)o)->ff4));
                njPopMatrixEx_8c38ad10();
                return;
                case 2:
                njPushMatrixEx_8c38ae68();
                pm4 = (ObjectData *)o;
                pm11 = (void *)(((char *)o + 0x3c));
                translate_current_matrix_v_8c382a40(pm11);
                njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
                call_8c3827d8((void *)(((ObjectData *)o)->f28));
                pm8 = (void *)((pm4)->ff4);
                pm7 = ((ObjectData *)o)->f38;
                pm12 = ((ObjectData *)o)->fec;
                pm5 = pm12 - 1.0f;
                call_8c3addea((void *)(pm7), pm5, pm8);
                njPopMatrixEx_8c38ad10();
                return;
                case 0:
                call_8c130f2c(o);
            }
        }
    }
}
