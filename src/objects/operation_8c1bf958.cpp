typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4e2c20 S_g8c4e2c20;
typedef struct S_g8c4e2c20_42c S_g8c4e2c20_42c;
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
    char unknown2c[0x8];
    int f34;
    int f38;
    char unknown3c[0x4c];
    int f88;
    char unknown8c[0x58];
    int fe4;
    char unknowne8[0x10];
    float ff8;
    float ffc;
    char unknown100[0x4];
    float f104;
    float f108;
    float f10c;
} ObjectData;
struct S_g8c4e2c20 {
    char unknown0[0x42c];
    S_g8c4e2c20_42c *f42c;
};
struct S_g8c4e2c20_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
extern int g_8c328614;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4e2c20 *g_8c4e2c20;
extern "C" void operation_8c0ee870(void *, void *);
extern "C" Object *operation_8c1bf958(Object *o, int a1)
{
    Object **home = &o;
    ObjectData *pm1;
    operation_8c0ee870((void *)o, g_8c44be98);
    *(void **)(0x18 + (char *)o) = (void *)0x8c275738;
    (void)home;
    ((ObjectData *)o)->tag = (int)(g_8c328614);
    ((ObjectData *)o)->size = 0x110;
    o->v6(a1);
    a1 = g_8c4e2c20->f42c->f08;
    ((ObjectData *)o)->f38 = (int)(a1);
    ((ObjectData *)o)->f28 = (g_8c4e2c20->f42c->f0c);
    ((ObjectData *)o)->ff8 = 500.0f;
    ((ObjectData *)o)->ffc = 15.0f;
    ((ObjectData *)o)->f34 |= 0x40000000;
    ((ObjectData *)o)->fe4 = 0;
    ((ObjectData *)o)->f104 = 0.0f;
    ((ObjectData *)o)->f108 = 0.0f;
    ((ObjectData *)o)->f10c = 0.0f;
    if (!(((ObjectData *)o)->f88 >= 0)) {
        ((ObjectData *)o)->f88 = 0;
    } else {
        pm1 = (ObjectData *)o;
        if ((pm1)->f88 >= 4) {
            ((ObjectData *)o)->f88 = 3;
        }
    }
    return o;
}
