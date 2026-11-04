/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1aebd8
 * function: TODoorCave03_render_8c1aebd8
 * language: c++
 * reference size: 284 bytes
 * compiled size: 284 bytes (+0.0%)
 * differing lines: 4 of 105 reference instruction lines
 * differing bytes: 15
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TODoorCave03.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_30 Arg0_38_2c_30;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_2c S_vv3_2c;
typedef struct S_vv3_4 S_vv3_4;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_4 S_vv4_4;
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
    char unknown68[0x90];
    float ff8;
    float ffc;
    char unknown100[0x8];
    int f108;
} ObjectData;
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
};
struct Arg0_38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    char unknown0[0x30];
    Arg0_38_2c_30 *f30;
};
struct S_vv3 {
    char unknown0[0x4];
    S_vv3_4 *f04;
    char unknown8[0x24];
    S_vv3_2c *f2c;
};
struct S_vv4 {
    char unknown0[0x4];
    S_vv4_4 *f04;
};
extern int g_8c46f560;
extern int g_8c575570;
extern "C" int operation_8c0eeb00(void *, float);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3aa702(void *);
extern "C" void reset_state_8c391c94(void);
extern "C" void call_8c38c0f0(void *);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TODoorCave03_render_8c1aebd8(Object *o)
{
    int v9;
    S_vv1 *v1;
    S_vv3 *v3;
    S_vv4 *v4;
    int t1;
    int t2;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        t2 = operation_8c0eeb00((void *)o, 30.0f);
        if (t2 != 0) {
            call_8c3827d8((void *)(((ObjectData *)o)->f28));
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            v1 = (S_vv1 *)((ObjectData *)o)->f38;
            translate_current_matrix_v_8c382a40((void *)((int)v1 + 8));
            call_8c3aa702((void *)(v1->f04));
            reset_state_8c391c94();
            v9 = g_8c575570;
            g_8c46f560 = v9;
            g_8c575570 = v9 | 0x10;
            call_8c38c0f0((void *)(((char *)o + 0x10c)));
            if (((((ObjectData *)o)->f108 & 1)) != 0) {
                v3 = (S_vv3 *)((ObjectData *)o)->f38->f2c;
            } else {
                v3 = (S_vv3 *)((ObjectData *)o)->f38->f2c->f30;
            }
            translate_current_matrix_v_8c382a40((void *)((int)v3 + 8));
            call_8c3aa702((void *)(v3->f04));
            v4 = (S_vv4 *)v3->f2c;
            translate_current_matrix_v_8c382a40((void *)((int)v4 + 8));
            call_8c3aa702((void *)(v4->f04));
            call_8c38c0f0((void *)((void *)0x8c305fd8));
            g_8c575570 = (int)(g_8c46f560);
            reset_state_8c391cc4();
            njPopMatrixEx_8c38ad10();
        }
    }
}
