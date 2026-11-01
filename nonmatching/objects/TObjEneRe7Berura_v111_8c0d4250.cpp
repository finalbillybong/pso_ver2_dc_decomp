/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d4250
 * function: TObjEneRe7Berura_v111_8c0d4250
 * language: c++
 * reference size: 320 bytes
 * compiled size: 320 bytes (+0.0%)
 * differing lines: 4 of 122 reference instruction lines
 * differing bytes: 2
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation; review found and fixed behaviour defects of the generator draft; not
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
    char unknown118[0x1f2];
    short f30a;
    char unknown30c[0x64];
    float f370;
    float f374;
} ObjectData;
struct Frame {
    Vector3 f00;
};
struct Arg0_114_4 {
    char unknown0[0x4];
    int f04;
};
extern Vector3 g_8c306f58;
extern "C" void call_8c05a0a8(void);
extern "C" void call_8c05ba9c(Object *, Frame *);
extern "C" void operation_8c1086fc(void);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3addea(void *, float);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void TObjEneRe7Berura_v111_8c0d4250(Object *o)
{
    Frame frame;
    int v3;
    float v6;
    int v5;
    int v7;
    float v10;
    float v13;
    int t1;
    call_8c05a0a8();
    t1 = o->v11(400.0f, 15.0f);
    if (t1 != 0) {
        if (((ObjectData *)o)->f30a != 0xb) {
            {
                Vector3 *p_ = (Vector3 *)&g_8c306f58;
                *(Vector3 *)&(&frame)->f00 = *p_;
            }
            call_8c05ba9c(o, &frame);
        }
        operation_8c1086fc();
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        v5 = (int)((ObjectData *)o)->f370;
        if (v5 < 0) {
            v5 = 0;
        } else if (v5 >= 8) {
            v5 = 7;
        }
        {
            Arg0_114_4 *p = *(Arg0_114_4 **)((char *)((char *)((ObjectData *)o)->f114 + 0x4) + (*(int *)((char *)((char *)((ObjectData *)o)->f110 + 0x4) + (v5 << 4)) << 3));
            v13 = ((ObjectData *)o)->f374;
            if (0.0f > v13) {
                v13 = 0.0f;
            } else {
                v7 = p->f04;
                if (v13 > (float)(unsigned int)(v7 - 1)) {
                    v13 = (float)(unsigned int)v7;
                }
            }
        }
        call_8c3addea((void *)(((ObjectData *)o)->f38), v13);
        njPopMatrixEx_8c38ad10();
        reset_state_8c391cc4();
    }
}
