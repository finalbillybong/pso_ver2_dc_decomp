/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d8734
 * function: operation_8c1d8734
 * language: c++
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 6 of 57 reference instruction lines
 * differing bytes: 14
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
typedef struct S_L8c4e2ef4 S_L8c4e2ef4;
typedef struct S_L8c4e2ef4_4 S_L8c4e2ef4_4;
typedef struct S_g8c4e2edc S_g8c4e2edc;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_42c S_vv1_42c;
typedef struct S_vv1_42c_28 S_vv1_42c_28;
typedef struct S_vv1_430 S_vv1_430;
typedef struct S_vv1_430_14 S_vv1_430_14;
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
    char unknown0[0x4];
    S_L8c4e2ef4_4 *f04;
};
struct S_vv1 {
    char unknown0[0x42c];
    S_vv1_42c *f42c;
    S_vv1_430 *f430;
};
struct S_vv1_42c {
    char unknown0[0x28];
    S_vv1_42c_28 *f28;
};
struct S_vv1_430 {
    char unknown0[0x14];
    S_vv1_430_14 *f14;
};
extern S_L8c4e2ef4 g_8c4e2ef4;
extern "C" void operation_8c1d8734(Object *o)
{
    S_vv1 *v1;
    int t1;
    v1 = (S_vv1 *)*(S_g8c4e2edc **)((char *)0x8c4e2edc + (((ObjectData *)o)->fe4 << 2));
    if (0 != v1) {
        t1 = o->v11(800.0f, 50.0f);
        if (t1 != 0) {
            S_vv1_430_14 *pm2;
            ((void ( *) ( void *))0x8c3827d8)((&g_8c4e2ef4)->f04);
            ((void ( *) ( void ))0x8c38ae68)();
            ((void ( *) ( void *))0x8c382a40)(((char *)o + 0x3c));
            ((void ( *) ( int , void *))0x8c37df90)(0, ((ObjectData *)o)->f64);
            pm2 = v1->f430->f14;
            ((void ( *) ( void *, void *, float ))0x8c3addea)(v1->f42c->f28, pm2, ((ObjectData *)o)->fe8);
            ((void ( *) ( void ))0x8c38ad10)();
        }
    }
}
