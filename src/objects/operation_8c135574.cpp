typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9b00 S_g8c4d9b00;
typedef struct S_g8c4d9b00_42c S_g8c4d9b00_42c;
typedef struct S_g8c4d9b00_430 S_g8c4d9b00_430;
typedef struct S_g8c4d9b04 S_g8c4d9b04;
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
    char unknown3c[0x4c];
    int f88;
    char unknown8c[0x60];
    float fec;
    float ff0;
    Arg0_f4 *ff4;
    char unknownf8[0x14];
    short f10c;
    char unknown10e[0x2];
    int f110;
    int f114;
    int f118;
    int f11c;
} ObjectData;
struct S_g8c4d9b04 {
    int f00;
};
struct S_g8c4d9b00 {
    char unknown0[0x42c];
    S_g8c4d9b00_42c *f42c;
    S_g8c4d9b00_430 *f430;
};
struct S_g8c4d9b00_42c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c4d9b00_430 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_f4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c312d6c;
extern S_g8c4d9b00 *g_8c4d9b00;
extern S_g8c4d9b04 *g_8c4d9b04;
extern "C" void call_8c0eeb90(Object *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *operation_8c135574(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c0eeb90(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26cec4;
    ((ObjectData *)o)->tag = (int)(g_8c312d6c);
    ((ObjectData *)o)->size = 0x120;
    o->v6(a2);
    ((ObjectData *)o)->f28 = (int)(g_8c4d9b04->f00);
    ((ObjectData *)o)->f38 = (int)(g_8c4d9b00->f42c->f08);
    ((ObjectData *)o)->ff4 = (Arg0_f4 *)g_8c4d9b00->f430->f04;
    ((ObjectData *)o)->fec = (float)(unsigned int)((ObjectData *)o)->ff4->f04 - 1.0f;
    ((ObjectData *)o)->ff0 = ((ObjectData *)o)->fec / 30.0f;
    copy_actor_records((void *)o, (void *)((void *)0x8c312d40), 1);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    if (!(((ObjectData *)o)->f88 >= 0)) {
        ((ObjectData *)o)->f88 = 0;
    } else {
        if (((ObjectData *)o)->f88 > 0xfe) {
            ((ObjectData *)o)->f88 = 0xfe;
        }
    }
    o->v21();
    ((ObjectData *)o)->f10c = (int)((ObjectData *)o)->f88 + 1;
    ((ObjectData *)o)->f110 = 0;
    ((ObjectData *)o)->f114 = 0;
    ((ObjectData *)o)->f118 = 0;
    ((ObjectData *)o)->f11c = 0;
    return o;
}
