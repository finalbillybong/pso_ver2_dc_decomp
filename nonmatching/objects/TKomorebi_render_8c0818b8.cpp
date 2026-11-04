/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0818b8
 * function: TKomorebi_render_8c0818b8
 * language: c++
 * reference size: 232 bytes
 * compiled size: 236 bytes (+1.7%)
 * differing lines: 24 of 86 reference instruction lines
 * differing bytes: 108
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TKomorebi.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct Arg0_38_4_4 Arg0_38_4_4;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
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
    char unknown3c[0x24];
    float f60;
    float f64;
    float f68;
    char unknown6c[0x4];
    float f70;
} ObjectData;
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x4];
    Arg0_38_4_4 *f04;
};
extern int g_8c46ee80;
extern "C" float distance_xz(void *, void *);
extern "C" void reset_state_8c391c94(void);
extern "C" void call_8c0344f0(void *, int, int, int);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void call_8c3827d8(void *);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void call_8c37e0c8(int, int, int, int);
extern "C" void call_8c3a944a(Arg0_38 *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void TKomorebi_render_8c0818b8(Object *o)
{
    int t1;
    float t2;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        t2 = distance_xz((void *)(((char *)o + 0x3c)), (void *)(g_8c46ee80 + 0x90));
        if (!(1600.0f > t2)) {
            reset_state_8c391c94();
            call_8c0344f0((void *)(((ObjectData *)o)->f38->f04->f04), 0, (int)((int)((ObjectData *)o)->f70), 0);
            njPushMatrixEx_8c38ae68();
            call_8c3827d8((void *)(((ObjectData *)o)->f28));
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            call_8c37e0c8(0, *(int *)&((ObjectData *)o)->f60, *(int *)&((ObjectData *)o)->f64, *(int *)&((ObjectData *)o)->f68);
            call_8c3a944a((Arg0_38 *)(((ObjectData *)o)->f38));
            njPopMatrixEx_8c38ad10();
            call_8c0344f0((void *)(((ObjectData *)o)->f38->f04->f04), 0, (int)(-(int)((ObjectData *)o)->f70), 0);
            reset_state_8c391cc4();
        }
    }
}
