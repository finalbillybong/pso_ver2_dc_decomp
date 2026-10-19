typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e3060 S_g8c4e3060;
typedef struct S_g8c4e3064 S_g8c4e3064;
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
    int f38;
    char unknown3c[0x54];
    int f90;
    char unknown94[0x50];
    int fe4;
    char unknowne8[0x4];
    float fec;
    float ff0;
    Arg0_f4 *ff4;
    float ff8;
    float ffc;
} ObjectData;
struct S_g8c4e3060 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Arg0_f4 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c32afa8;
extern S_g8c4e3060 *g_8c4e3060;
extern S_g8c4e3064 *g_8c4e3064;
extern "C" void call_8c1318a4(Object *);
extern "C" Object *operation_8c1ddec8(Object *o, int a1)
{
    Object **home = &o;
    (void)home;
    call_8c1318a4(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2773ec;
    ((ObjectData *)o)->tag = (int)(g_8c32afa8);
    ((ObjectData *)o)->size = 0x138;
    o->v6(a1);
    ((ObjectData *)o)->f38 = (int)(g_8c4e3060->f04);
    if (!(((ObjectData *)o)->f90 >= 0)) {
        ((ObjectData *)o)->f90 = 0;
    } else {
        if (((ObjectData *)o)->f90 >= 2) {
            ((ObjectData *)o)->f90 = 2;
        }
    }
    ((ObjectData *)o)->f28 = (int)(*(int *)((char *)((char *)g_8c4e3064 + 0x0) + (((ObjectData *)o)->f90 << 2)));
    ((ObjectData *)o)->ff4 = (Arg0_f4 *)g_8c4e3060->f08;
    ((ObjectData *)o)->fec = (float)(unsigned int)((ObjectData *)o)->ff4->f04 - 1.0f;
    ((ObjectData *)o)->ff0 = 1.0f;
    ((ObjectData *)o)->ff8 = 500.0f;
    ((ObjectData *)o)->ffc = 10.0f;
    ((ObjectData *)o)->fe4 = 0;
    return o;
}
