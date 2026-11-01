/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c150934
 * function: TBoss3VoloptHiraisin_render_8c150934
 * language: c++
 * reference size: 416 bytes
 * compiled size: 416 bytes (+0.0%)
 * differing lines: 8 of 150 reference instruction lines
 * differing bytes: 16
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
typedef struct S_g8c4da6b0 S_g8c4da6b0;
typedef struct S_g8c4da6b0_42c S_g8c4da6b0_42c;
typedef struct S_g8c4da6b0_42c_8 S_g8c4da6b0_42c_8;
typedef struct S_g8c4da6b0_42c_c S_g8c4da6b0_42c_c;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3a8 Arg0_3a8;
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
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x84];
    int fec;
    char unknownf0[0x2b8];
    Arg0_3a8 *f3a8;
} ObjectData;
struct S_g8c4da6b0 {
    char unknown0[0x42c];
    S_g8c4da6b0_42c *f42c;
};
struct S_g8c4da6b0_42c {
    char unknown0[0x8];
    S_g8c4da6b0_42c_8 *f08;
    S_g8c4da6b0_42c_c *f0c;
};
extern S_g8c4da6b0 *g_8c4da6b0;
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c013c58(Object *);
extern "C" void operation_8c1086fc(void);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" float njSin_8c37eb0c(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" int operation_8c03d338(void);
extern "C" void call_8c3aa716(void *);
extern "C" void operation_8c01cc90(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c013e74(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njScale_8c37e2e4(int, float, float, float);
extern "C" void TBoss3VoloptHiraisin_render_8c150934(Object *o)
{
    float v6;
    float v7;
    int t1;
    float t2;
    int t3;
    switch (((ObjectData *)o)->f34 & 0x2000000) {
    case 0:
        t1 = o->v11(400.0f, 40.0f);
        if (t1 != 0) {
            call_8c3827d8((void *)(((ObjectData *)o)->f28));
            call_8c013c58(o);
            operation_8c1086fc();
            njPushMatrixEx_8c38ae68();
            *(int *)0x8c575570 &= -0x401;
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            if (((ObjectData *)o)->fec == 8) {
                njTranslate_8c3829bc(0, 0.0f, 20.0f, 0.0f);
            }
            t2 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f3a8));
            njTranslate_8c3829bc(0, 0.0f, t2, 0.0f);
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
            if (50.0f > ((ObjectData *)o)->f40) {
                njPushMatrixEx_8c38ae68();
                v6 = (float)1.0f;
                v7 = (float)(v6 - (((ObjectData *)o)->f40 - 4.6f) * 0.0220264308f);
                njTranslate_8c3829bc(0, ((ObjectData *)o)->f3c, 4.5f, ((ObjectData *)o)->f44);
                njScale_8c37e2e4(0, v7, v7, v7);
                call_8c3827d8((void *)(g_8c4da6b0->f42c->f0c));
                call_8c3aa716((void *)(g_8c4da6b0->f42c->f08));
                njPopMatrixEx_8c38ad10();
            }
        }
    }
}
