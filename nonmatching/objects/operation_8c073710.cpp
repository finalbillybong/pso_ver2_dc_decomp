/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c073710
 * function: operation_8c073710
 * language: c++
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 14 of 113 reference instruction lines
 * differing bytes: 13
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
typedef struct Frame Frame;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct Arg2 Arg2;
class Object;
typedef struct Block_p0_3c {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_3c;
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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31(Frame *);
};
typedef struct ObjectData {
    char unknown0[0x2c];
    short f2c;
    char unknown2e[0xe];
    Block_p0_3c f3c;
    char unknown48[0x18];
    int f60;
    int f64;
    int f68;
    char unknown6c[0x7a];
    unsigned short fe6;
} ObjectData;
struct Arg2 {
    Vector3 f00;
};
struct Frame {
    char unknown0[0x14];
};
extern int g_8c44be04;
extern S_g8c4689e0 *g_8c4689e0;
extern int g_8c4db244;
extern "C" void reparent_hierarchy_node(void *, void *);
extern "C" void operation_8c07484c(void *, int);
extern "C" void operation_194db0(signed char, float, float, short, void *);
extern "C" int operation_8c163958(void);
extern "C" int rand(void);
extern "C" void raise_on_hit_8c073dec(void *);
extern "C" void transform_actor_records(void *);
extern "C" void create_effect_777c(void *, int);
extern "C" void operation_8c073710(Object *o, int a1, Arg2 *a2, int a3)
{
    Frame frame;
    int t1;
    int t2;
    reparent_hierarchy_node((void *)o, g_8c4689e0);
    operation_8c07484c((void *)o, 0);
    {
        Vector3 *d = (Vector3 *)&((ObjectData *)o)->f3c;
        *d = *(Vector3 *)&a2->f00;
    }
    ((ObjectData *)o)->fe6 = 0xffff;
    if (a3 == 0) {
        o->v31((&frame));
        operation_194db0((signed char)a1, ((ObjectData *)o)->f3c.f00, ((ObjectData *)o)->f3c.f08, ((ObjectData *)o)->f2c, (void *)(&frame));
    }
    t1 = operation_8c163958();
    if (t1 == 1 || (short)a1 != g_8c44be04) {
        o->v27();
        return;
    }
    ((ObjectData *)o)->f60 = 0;
    ((ObjectData *)o)->f68 = 0;
    t2 = rand();
    ((ObjectData *)o)->f64 = (int)((float)t2 / 32768.0f * 65536.0f);
    raise_on_hit_8c073dec((void *)o);
    transform_actor_records((void *)o);
    if (g_8c4db244 != 0) {
        create_effect_777c((void *)(((char *)o + 0x3c)), 0x9b);
    }
}
