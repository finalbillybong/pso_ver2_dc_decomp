/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d899c
 * function: TObjCity_Season_XmasTree_render_8c1d899c
 * language: c++
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 38 of 84 reference instruction lines
 * differing bytes: 86
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * class header: src/include/classes/TObjCity_Season_XmasTree.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4e2ef4 S_L8c4e2ef4;
typedef struct S_L8c4e2ef4_8 S_L8c4e2ef4_8;
typedef struct S_g8c4e2edc S_g8c4e2edc;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_42c S_vv1_42c;
typedef struct S_vv1_42c_68 S_vv1_42c_68;
typedef struct S_vv1_42c_78 S_vv1_42c_78;
typedef struct S_vv1_42c_88 S_vv1_42c_88;
typedef struct S_vv1_42c_98 S_vv1_42c_98;
typedef struct S_vv1_430 S_vv1_430;
typedef struct S_vv1_430_4 S_vv1_430_4;
typedef struct S_vv1_430_c S_vv1_430_c;
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
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x7c];
    int fe4;
    float fe8;
} ObjectData;
struct S_L8c4e2ef4 {
    char unknown0[0x8];
    S_L8c4e2ef4_8 *f08;
};
struct S_vv1 {
    char unknown0[0x42c];
    S_vv1_42c *f42c;
    S_vv1_430 *f430;
};
struct S_vv1_42c {
    char unknown0[0x68];
    S_vv1_42c_68 *f68;
    char unknown6c[0xc];
    S_vv1_42c_78 *f78;
    char unknown7c[0xc];
    S_vv1_42c_88 *f88;
    char unknown8c[0xc];
    S_vv1_42c_98 *f98;
};
struct S_vv1_430 {
    char unknown0[0x4];
    S_vv1_430_4 *f04;
    char unknown8[0x4];
    S_vv1_430_c *f0c;
};
extern S_L8c4e2ef4 g_8c4e2ef4;
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3ac53a(void *, float, void *);
extern "C" void call_8c3aa716(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void TObjCity_Season_XmasTree_render_8c1d899c(Object *o)
{
    S_vv1 *v1;
    int t1;
    v1 = (S_vv1 *)*(S_g8c4e2edc **)((char *)0x8c4e2edc + (((ObjectData *)o)->fe4 << 2));
    if (v1 != 0) {
        t1 = o->v11(800.0f, 50.0f);
        if (t1 != 0) {
            call_8c3827d8((void *)((&g_8c4e2ef4)->f08));
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
            njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            call_8c3ac53a((void *)(v1->f42c->f68), ((ObjectData *)o)->fe8, (void *)(v1->f430->f04));
            call_8c3ac53a((void *)(v1->f42c->f78), ((ObjectData *)o)->fe8, (void *)(v1->f430->f0c));
            call_8c3aa716((void *)(v1->f42c->f88));
            call_8c3aa716((void *)(v1->f42c->f98));
            njPopMatrixEx_8c38ad10();
        }
    }
}
