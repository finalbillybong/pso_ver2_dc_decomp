typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db140 S_g8c4db140;
typedef struct S_g8c4db140_42c S_g8c4db140_42c;
typedef struct S_g8c4db140_430 S_g8c4db140_430;
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
    char unknown20[0x18];
    Arg0_38 *f38;
    char unknown3c[0x30];
    float f6c;
    char unknown70[0x1c];
    int f8c;
    int f90;
    char unknown94[0x58];
    float fec;
    float ff0;
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
    char unknown100[0x4];
    float f104;
    int f108;
    char unknown10c[0x10];
    int f11c;
    int f120;
    float f124;
    int f128;
} ObjectData;
struct S_g8c4db140 {
    char unknown0[0x42c];
    S_g8c4db140_42c *f42c;
    S_g8c4db140_430 *f430;
};
struct S_g8c4db140_42c {
    char unknown0[0x8];
    int f08;
};
struct S_g8c4db140_430 {
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
extern int g_8c3166d8;
extern S_g8c4db140 *g_8c4db140;
extern "C" void call_8c15c7cc(Object *);
extern "C" void operation_8c112f78(void *);
extern "C" Object *operation_8c15cb78(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c15c7cc(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26ef38;
    ((ObjectData *)o)->tag = (int)(g_8c3166d8);
    ((ObjectData *)o)->size = 0x12c;
    o->v6(a2);
    operation_8c112f78((void *)o);
    if (!(((ObjectData *)o)->f90 >= 0)) {
        ((ObjectData *)o)->f90 = 0;
    } else {
        if (((ObjectData *)o)->f90 >= 2) {
            ((ObjectData *)o)->f90 = 1;
        }
    }
    ((ObjectData *)o)->f38 = (Arg0_38 *)g_8c4db140->f42c->f08;
    ((ObjectData *)o)->ff4 = (Arg0_f4 *)g_8c4db140->f430->f04;
    ((ObjectData *)o)->fec = (float)(unsigned int)((ObjectData *)o)->ff4->f04 - 1.0f;
    ((ObjectData *)o)->ff0 = 1.0f;
    ((ObjectData *)o)->ff8 = 400.0f;
    ((ObjectData *)o)->ffc = ((ObjectData *)o)->f38->f04->f14;
    ((ObjectData *)o)->f104 = ((ObjectData *)o)->f6c + 50.0f;
    if (0.0f > ((ObjectData *)o)->f104) {
        ((ObjectData *)o)->f104 = 0.0f;
    }
    if (!(((ObjectData *)o)->f8c >= 0)) {
        ((ObjectData *)o)->f108 = 2;
    } else {
        ((ObjectData *)o)->f108 = 1;
    }
    ((ObjectData *)o)->f11c = 0x78;
    ((ObjectData *)o)->f120 = 0;
    ((ObjectData *)o)->f124 = 0.0f;
    ((ObjectData *)o)->f128 = 0;
    return o;
}
