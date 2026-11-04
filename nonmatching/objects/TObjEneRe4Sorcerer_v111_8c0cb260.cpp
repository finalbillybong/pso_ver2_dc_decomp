/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cb260
 * function: TObjEneRe4Sorcerer_v111_8c0cb260
 * language: c++
 * reference size: 276 bytes
 * compiled size: 276 bytes (+0.0%)
 * differing lines: 12 of 92 reference instruction lines
 * differing bytes: 28
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TObjEneRe4Sorcerer.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fa04 S_g8c46fa04;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
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
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x374];
    short f3dc;
    char unknown3de[0x2];
    float f3e0;
} ObjectData;
extern "C" void call_8c05a0a8(void);
extern "C" void call_8c05ba9c(Object *, int);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c0cd63c(void *, short, int);
extern "C" void call_8c397c90(void *, float, float);
extern "C" void operation_8c1086fc(void);
extern "C" void call_8c3aa716(void *);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TObjEneRe4Sorcerer_v111_8c0cb260(Object *o)
{
    int t1;
    call_8c05a0a8();
    t1 = o->v11(400.0f, 15.0f);
    if (t1 != 0) {
        call_8c05ba9c(o, 0);
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njTranslate_8c3829bc(0, 0.0f, 22.0f, 0.0f);
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        *(short *)((char *)o + 0x3dc) += 5;
        call_8c0cd63c((void *)(*(S_g8c46fa04 **)0x8c46fa04), ((ObjectData *)o)->f3dc, 0);
        ((ObjectData *)o)->f3e0 += 0.01f;
        *(int *)0x8c575570 |= 0x20000;
        call_8c397c90((void *)((void *)0x8c575570), 0.0f, ((ObjectData *)o)->f3e0);
        operation_8c1086fc();
        call_8c3aa716((void *)(((ObjectData *)o)->f38));
        reset_state_8c391cc4();
        *(int *)0x8c575570 &= -0x20001;
        njPopMatrixEx_8c38ad10();
    }
}
