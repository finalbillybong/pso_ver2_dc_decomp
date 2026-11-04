/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1307f8
 * function: TOKeyGenericSw_render_8c1307f8
 * language: c++
 * reference size: 284 bytes
 * compiled size: 284 bytes (+0.0%)
 * differing lines: 8 of 108 reference instruction lines
 * differing bytes: 12
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TOKeyGenericSw.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d9a20 S_L8c4d9a20;
typedef struct S_L8c4d9a20_4 S_L8c4d9a20_4;
typedef struct S_L8c4d9a20_4_42c S_L8c4d9a20_4_42c;
typedef struct S_g8c4d9a20 S_g8c4d9a20;
typedef struct S_g8c4d9a20_42c S_g8c4d9a20_42c;
typedef struct S_g8c4d9a28 S_g8c4d9a28;
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
    char unknown100[0xc];
    int f10c;
} ObjectData;
struct S_g8c4d9a28 {
    int f00;
    int f04;
    int f08;
};
struct S_g8c4d9a20 {
    char unknown0[0x42c];
    S_g8c4d9a20_42c *f42c;
};
struct S_g8c4d9a20_42c {
    char unknown0[0x8];
    int f08;
};
struct S_L8c4d9a20 {
    S_g8c4d9a20 *f00;
    S_L8c4d9a20_4 *f04;
};
struct S_L8c4d9a20_4 {
    char unknown0[0x42c];
    S_L8c4d9a20_4_42c *f42c;
};
struct S_L8c4d9a20_4_42c {
    char unknown0[0x8];
    int f08;
};
extern S_g8c4d9a28 *g_8c4d9a28;
extern S_L8c4d9a20 g_8c4d9a20;
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa716(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void reset_state_8c391c94(void);
extern "C" void call_8c3addea(void *, void *, float);
extern "C" void reset_state_8c391cc4(void);
extern "C" void TOKeyGenericSw_render_8c1307f8(Object *o)
{
    ObjectData *pm2;
    int t1;
    int pm3;
    void *pm4;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        njPushMatrixEx_8c38ae68();
        ((ObjectData *)o)->f28 = (Arg0_28 *)g_8c4d9a28->f00;
        ((ObjectData *)o)->f38 = (Arg0_38 *)(&g_8c4d9a20)->f00->f42c->f08;
        translate_current_matrix_v_8c382a40((void *)((0x3c + (char *)o)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        pm2 = (ObjectData *)o;
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        call_8c3aa716((void *)((pm2)->f38));
        njPopMatrixEx_8c38ad10();
        reset_state_8c391c94();
        njPushMatrixEx_8c38ae68();
        switch (((ObjectData *)o)->f10c) {
            case 0:
            ((ObjectData *)o)->f28 = (Arg0_28 *)g_8c4d9a28->f04;
            break;
            case 1:
            pm3 = g_8c4d9a28->f08;
            ((ObjectData *)o)->f28 = (Arg0_28 *)pm3;
        }
        pm3 = (&g_8c4d9a20)->f04->f42c->f08;
        t1 = pm3;
        ((ObjectData *)o)->f38 = (Arg0_38 *)t1;
        translate_current_matrix_v_8c382a40((void *)((0x3c + (char *)o)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        pm4 = (void *)(((ObjectData *)o)->ff4);
        call_8c3addea((void *)(((ObjectData *)o)->f38), pm4, ((ObjectData *)o)->fe8);
        njPopMatrixEx_8c38ad10();
        reset_state_8c391cc4();
    }
}
