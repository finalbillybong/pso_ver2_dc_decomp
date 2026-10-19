typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2300 S_g8c4e2300;
typedef struct S_g8c4e2300_42c S_g8c4e2300_42c;
typedef struct S_g8c4e2300_430 S_g8c4e2300_430;
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
    int f38;
    char unknown3c[0xb0];
    float fec;
    float ff0;
    Arg0_f4 *ff4;
    char unknownf8[0x14];
    float f10c;
    float f110;
    float f114;
    float f118;
} ObjectData;
struct S_g8c4e2300 {
    char unknown0[0x42c];
    S_g8c4e2300_42c *f42c;
    S_g8c4e2300_430 *f430;
};
struct S_g8c4e2300_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct S_g8c4e2300_430 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_f4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c325e7c;
extern S_g8c4e2300 *g_8c4e2300;
extern "C" void call_8c0eeb90(Object *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *operation_8c1aeea4(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c0eeb90(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c274ac0;
    ((ObjectData *)o)->tag = (int)(g_8c325e7c);
    ((ObjectData *)o)->size = 0x11c;
    o->v6(a2);
    ((ObjectData *)o)->f38 = (int)(g_8c4e2300->f42c->f08);
    ((ObjectData *)o)->f28 = (int)(g_8c4e2300->f42c->f0c);
    ((ObjectData *)o)->ff4 = (Arg0_f4 *)g_8c4e2300->f430->f04;
    ((ObjectData *)o)->fec = (float)(unsigned int)((ObjectData *)o)->ff4->f04 - 1.0f;
    ((ObjectData *)o)->ff0 = 0.5f;
    copy_actor_records((void *)o, (void *)((void *)0x8c325e50), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    o->v21();
    ((ObjectData *)o)->f10c = 1.0f;
    ((ObjectData *)o)->f110 = 1.0f;
    ((ObjectData *)o)->f114 = 1.0f;
    ((ObjectData *)o)->f118 = 1.0f;
    return o;
}
