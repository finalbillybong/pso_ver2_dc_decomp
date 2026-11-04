/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0f1ba4
 * function: TOMonumentAncient02_render_8c0f1ba4
 * language: c++
 * reference size: 464 bytes
 * compiled size: 464 bytes (+0.0%)
 * differing lines: 20 of 183 reference instruction lines
 * differing bytes: 26
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TOMonumentAncient02.h (shared layout for modders; this draft keeps its own local types)
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
typedef struct S_vv15 S_vv15;
typedef struct S_vv15_4 S_vv15_4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_2c S_vv3_2c;
typedef struct S_vv3_4 S_vv3_4;
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
    char unknown68[0x4];
    float f6c;
    char unknown70[0x4];
    float f74;
    char unknown78[0x80];
    float ff8;
    float ffc;
    int f100;
    int f104;
    char unknown108[0x8];
    float f110;
    char unknown114[0x10];
    int f124;
} ObjectData;
struct S_vv3 {
    char unknown0[0x4];
    S_vv3_4 *f04;
    char unknown8[0x24];
    S_vv3_2c *f2c;
};
struct S_vv15 {
    char unknown0[0x4];
    S_vv15_4 *f04;
    float f08;
    float f0c;
    float f10;
};
extern int g_8c46f560;
extern int g_8c575570;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" int rand(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void reset_state_8c391c94(void);
extern "C" void call_8c38c0f0(void *);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TOMonumentAncient02_render_8c0f1ba4(Object *o)
{
    S_vv3 *v3;
    S_vv15 *v15;
    int t1;
    int t2;
    int t3;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    ((ObjectData *)o)->f124 = (int)t1;
    if (((ObjectData *)o)->f124 != 1) {
        return;
    }
    njPushMatrixEx_8c38ae68();
    if (((ObjectData *)o)->f100 == 1) {
        t2 = rand();
        ((ObjectData *)o)->f6c = (float)t2 / 32768.0f * 0.1f - 0.05f;
        t3 = rand();
        ((ObjectData *)o)->f74 = (float)t3 / 32768.0f * 0.1f - 0.05f;
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x6c)));
    }
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    call_8c3827d8((void *)(((ObjectData *)o)->f28));
    v3 = (S_vv3 *)((ObjectData *)o)->f38;
    translate_current_matrix_v_8c382a40((void *)((int)v3 + 8));
    call_8c3aa702((void *)(v3->f04));
    if (((ObjectData *)o)->f100 == 1) {
        if (((ObjectData *)o)->f104 != 0) {
            ((ObjectData *)o)->f110 += 0.05f;
            if (0.0f > ((ObjectData *)o)->f110) {
                goto L_8c0f1caa;
            }
            ((ObjectData *)o)->f110 = 0.0f;
            ((ObjectData *)o)->f104 = 0;
        } else {
            ((ObjectData *)o)->f110 -= 0.05f;
            if (!(((ObjectData *)o)->f110 > -1.0f)) {
                ((ObjectData *)o)->f110 = -1.0f;
                ((ObjectData *)o)->f104 = 1;
            }
        }
L_8c0f1caa:;
        v15 = (S_vv15 *)v3->f2c;
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, v15->f08, v15->f0c, v15->f10);
        reset_state_8c391c94();
        g_8c46f560 = (int)(g_8c575570);
        g_8c575570 |= 0x20;
        call_8c38c0f0((void *)(((char *)o + 0x110)));
        call_8c3aa702((void *)(v15->f04));
        call_8c38c0f0((void *)((void *)0x8c305fd8));
        g_8c575570 = (int)(g_8c46f560);
        reset_state_8c391cc4();
        njPopMatrixEx_8c38ad10();
    }
    njPopMatrixEx_8c38ad10();
}
