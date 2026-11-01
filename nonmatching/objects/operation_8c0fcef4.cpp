/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0fcef4
 * function: operation_8c0fcef4
 * language: c++
 * reference size: 256 bytes
 * compiled size: 256 bytes (+0.0%)
 * differing lines: 4 of 85 reference instruction lines
 * differing bytes: 15
 * provenance: generator draft (mode switch2ext)
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
typedef struct Arg0_380 Arg0_380;
typedef struct Arg0_384 Arg0_384;
typedef struct Arg0_388 Arg0_388;
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
    char unknown3c[0x2ce];
    short f30a;
    char unknown30c[0x74];
    Arg0_380 *f380;
    Arg0_384 *f384;
    Arg0_388 *f388;
    int f38c;
} ObjectData;
extern int g_8c46f560;
extern int g_8c575570;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3a944a(void *);
extern "C" void reset_state_8c391c94(void);
extern "C" void call_8c38c0f0(void *);
extern "C" void call_8c3aa716(void *);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c0fcef4(Object *o)
{
    int t1;
    switch (((ObjectData *)o)->f30a) {
    case 2:
    case 3:
        t1 = o->v11(400.0f, 20.0f);
        ((ObjectData *)o)->f38c = (int)t1;
        if (((ObjectData *)o)->f38c == 1) {
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f380));
            call_8c3827d8((void *)(((ObjectData *)o)->f28));
            call_8c3a944a((void *)(((ObjectData *)o)->f38));
            reset_state_8c391c94();
            g_8c46f560 = (int)(g_8c575570);
            g_8c575570 |= 0x20;
            call_8c38c0f0((void *)(((char *)o + 0x370)));
            call_8c3827d8((void *)(((ObjectData *)o)->f388));
            call_8c3aa716((void *)(((ObjectData *)o)->f384));
            call_8c38c0f0((void *)((void *)0x8c305fd8));
            g_8c575570 = (int)(g_8c46f560);
            reset_state_8c391cc4();
            njPopMatrixEx_8c38ad10();
        }
    }
}
