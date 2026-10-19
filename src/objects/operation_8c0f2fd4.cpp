typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4705e0 S_g8c4705e0;
typedef struct S_g8c4705e0_42c S_g8c4705e0_42c;
typedef struct S_g8c4705e0_430 S_g8c4705e0_430;
typedef struct S_g8c4705e4 S_g8c4705e4;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_4 Arg0_38_4;
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
    char unknown3c[0x4c];
    int f88;
    int f8c;
    char unknown90[0x5c];
    float fec;
    char unknownf0[0x4];
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
    int f100;
    int f104;
    char unknown108[0x4];
    int f10c;
} ObjectData;
struct S_g8c4705e0 {
    char unknown0[0x42c];
    S_g8c4705e0_42c *f42c;
    S_g8c4705e0_430 *f430;
};
struct S_g8c4705e0_42c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c4705e0_430 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_f4 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
};
struct Arg0_38_4 {
    char unknown0[0x14];
    float f14;
};
extern int g_8c309d88;
extern S_g8c4705e0 *g_8c4705e0;
extern S_g8c4705e4 *g_8c4705e4;
extern "C" void operation_8c0f22ac(void *);
extern "C" void copy_actor_records(void *, void *, int);
extern "C" void transform_actor_records(void *);
extern "C" void attach_and_insert_object(void *);
extern "C" Object *operation_8c0f2fd4(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    operation_8c0f22ac((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c268780;
    ((ObjectData *)o)->tag = (int)(g_8c309d88);
    ((ObjectData *)o)->size = 0x110;
    o->v6(a2);
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c4705e0->f42c->f08;
    ((ObjectData *)o)->f10c = (int)(((ObjectData *)o)->f8c);
    if (!(((ObjectData *)o)->f10c >= 0)) {
        ((ObjectData *)o)->f10c = 0;
    } else {
        if (((ObjectData *)o)->f10c >= 4) {
            ((ObjectData *)o)->f10c = 3;
        }
    }
    ((ObjectData *)o)->f28 = (int)(*(int *)((char *)((char *)g_8c4705e4 + 0x0) + (((ObjectData *)o)->f10c << 2)));
    ((ObjectData *)o)->ff4 = (Arg0_f4 *)g_8c4705e0->f430->f04;
    ((ObjectData *)o)->fec = (float)(unsigned int)((ObjectData *)o)->ff4->f04 - 1.0f;
    copy_actor_records((void *)o, (void *)((void *)0x8c309c28), 8);
    transform_actor_records((void *)o);
    attach_and_insert_object((void *)o);
    ((ObjectData *)o)->f104 = (int)(((ObjectData *)o)->f88);
    if (((ObjectData *)o)->f104 > 0x100) {
        ((ObjectData *)o)->f100 = 0;
    } else {
        if (!(((ObjectData *)o)->f104 >= 0)) {
            ((ObjectData *)o)->f100 = 1;
        } else {
            ((ObjectData *)o)->f100 = 2;
        }
    }
    ((ObjectData *)o)->ff8 = 400.0f;
    ((ObjectData *)o)->ffc = ((ObjectData *)o)->f38->f04->f14;
    return o;
}
