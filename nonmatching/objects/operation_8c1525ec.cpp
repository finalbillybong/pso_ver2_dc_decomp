/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1525ec
 * function: operation_8c1525ec
 * language: c++
 * reference size: 268 bytes
 * compiled size: 268 bytes (+0.0%)
 * differing lines: 14 of 94 reference instruction lines
 * differing bytes: 18
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
class Object;
class Arg0_s4ac;
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
    char unknown2c[0x8];
    int f34;
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
} ObjectData;
class Arg0_s4ac {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};
typedef struct Arg0_s4acData {

} Arg0_s4acData;
extern int g_8c575570;
extern "C" int update_depth_mode(void *, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c013c58(Object *);
extern "C" void operation_8c1086fc(void);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" int operation_8c03d338(void);
extern "C" void call_8c3aa716(void *);
extern "C" void operation_8c01cc90(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c013e74(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void operation_8c1525ec(Object *o)
{
    int t1;
    int t2;
    int t3;
    if (((((ObjectData *)o)->f34 & 0x2000000)) == 0) {
        t1 = o->v11(400.0f, 40.0f);
        if (t1 != 0) {
            t2 = update_depth_mode((void *)(((char *)o + 0x4ac)), (void *)(((char *)o + 0x324)));
            if (t2 != 0) {
                ((Arg0_s4ac *)((char *)o + 0x4ac))->v6();
            }
            call_8c3827d8((void *)(((ObjectData *)o)->f28));
            call_8c013c58(o);
            operation_8c1086fc();
            njPushMatrixEx_8c38ae68();
            g_8c575570 &= -0x401;
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            t3 = operation_8c03d338();
            if (t3 == 1) {
                call_8c3aa716((void *)(((ObjectData *)o)->f38));
            } else {
                operation_8c01cc90((void *)o);
            }
            njPopMatrixEx_8c38ad10();
            operation_8c013e74();
            reset_state_8c391cc4();
            ((Arg0_s4ac *)((char *)o + 0x4ac))->v7();
        }
    }
}
