/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13ac44
 * function: operation_8c13ac44
 * language: c++
 * reference size: 264 bytes
 * compiled size: 264 bytes (+0.0%)
 * differing lines: 8 of 93 reference instruction lines
 * differing bytes: 6
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3b4 Arg0_3b4;
typedef struct Arg0_60 Arg0_60;
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
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x8];
    int f34;
    Arg0_38 *f38;
    char unknown3c[0x24];
    Arg0_60 *f60;
    Arg0_64 *f64;
    char unknown68[0x33c];
    int f3a4;
    char unknown3a8[0xc];
    Arg0_3b4 *f3b4;
} ObjectData;
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateX_8c37dd28(int, void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void njScale_8c37e2e4(int, float, float, float);
extern "C" int operation_8c03d338(void);
extern "C" void call_8c3aa716(void *);
extern "C" void operation_8c01cc90(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c13ac44(Object *o)
{
    int t1;
    int t2;
    if (((((ObjectData *)o)->f34 & 0x2000000)) == 0) {
        t1 = o->v11(400.0f, 40.0f);
        if (t1 != 0) {
            call_8c3827d8((void *)(((ObjectData *)o)->f28));
            njPushMatrixEx_8c38ae68();
            *(int *)0x8c575570 &= -0x401;
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateX_8c37dd28(0, (void *)(((ObjectData *)o)->f60));
            if (((((ObjectData *)o)->f3a4 & 0x10000)) != 0) {
                njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f3b4));
                njScale_8c37e2e4(0, 1.0f, 1.0f, 0.05f);
                njRotateY_8c37df90(0, (void *)((int)((ObjectData *)o)->f64 - (int)((ObjectData *)o)->f3b4));
            } else {
                njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            }
            t2 = operation_8c03d338();
            if (t2 == 1) {
                call_8c3aa716((void *)(((ObjectData *)o)->f38));
            } else {
                operation_8c01cc90((void *)o);
            }
            njPopMatrixEx_8c38ad10();
        }
    }
}
