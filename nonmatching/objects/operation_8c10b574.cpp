/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c10b574
 * function: operation_8c10b574
 * language: c++
 * reference size: 288 bytes
 * compiled size: 288 bytes (+0.0%)
 * differing lines: 12 of 103 reference instruction lines
 * differing bytes: 37
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
typedef struct S_g8c4d7cc0 S_g8c4d7cc0;
typedef struct S_g8c4d7cc0_42c S_g8c4d7cc0_42c;
typedef struct S_g8c4d7cc0_430 S_g8c4d7cc0_430;
typedef struct S_g8c4d7cc4 S_g8c4d7cc4;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_4 Arg0_38_2c_4;
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
    virtual void v6(int);
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
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0xb0];
    float fec;
    float ff0;
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
} ObjectData;
struct S_g8c4d7cc0 {
    char unknown0[0x42c];
    S_g8c4d7cc0_42c *f42c;
    S_g8c4d7cc0_430 *f430;
};
struct S_g8c4d7cc0_42c {
    char unknown0[0x18];
    int f18;
};
struct S_g8c4d7cc4 {
    int f00;
};
struct S_g8c4d7cc0_430 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_f4 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    char unknown0[0x4];
    Arg0_38_2c_4 *f04;
};
struct Arg0_38_2c_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c30be00;
extern S_g8c4d7cc0 *g_8c4d7cc0;
extern S_g8c4d7cc4 *g_8c4d7cc4;
extern "C" void operation_8c0eeb90(Object *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *operation_8c10b574(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    operation_8c0eeb90(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c269ad8;
    ((ObjectData *)o)->tag = (int)(g_8c30be00);
    ((ObjectData *)o)->size = 0x10c;
    o->v6(a2);
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c4d7cc0->f42c->f18;
    ((ObjectData *)o)->f28 = (int)(g_8c4d7cc4->f00);
    ((ObjectData *)o)->ff4 = (Arg0_f4 *)g_8c4d7cc0->f430->f04;
    ((ObjectData *)o)->fec = (float)(unsigned int)((ObjectData *)o)->ff4->f04 - 1.0f;
    ((ObjectData *)o)->ff0 = 2.0f;
    copy_actor_records((void *)o, (void *)((void *)0x8c30bdd4), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    o->v21();
    ((ObjectData *)o)->ff8 = 400.0f;
    ((ObjectData *)o)->ffc = ((ObjectData *)o)->f38->f2c->f04->f14;
    return o;
}
