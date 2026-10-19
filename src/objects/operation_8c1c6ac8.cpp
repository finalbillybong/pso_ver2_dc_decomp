typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4e2de0 S_g8c4e2de0;
typedef struct S_g8c4e2de0_42c S_g8c4e2de0_42c;
typedef struct S_x2192 S_x2192;
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
    char unknown3c[0x30];
    float f6c;
    char unknown70[0x38];
    float fa8;
    float fac;
    float fb0;
} ObjectData;
struct S_g8c4e2de0 {
    char unknown0[0x42c];
    S_g8c4e2de0_42c *f42c;
};
struct S_g8c4e2de0_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
struct S_x2192 {
    float f00;
};
extern "C" void call_8c01d1ec(Object *, void *);
extern "C" Object *operation_8c1c6ac8(Object *o, int a1)
{
    Object **home = &o;
    int v1;
    (void)home;
    call_8c01d1ec(o, (void *)(*(S_g8c44be98 **)0x8c44be98));
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c276758;
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c328d54);
    ((ObjectData *)o)->size = 0xb4;
    o->v6(a1);
    ((ObjectData *)o)->f38 = (int)((*(S_g8c4e2de0 **)0x8c4e2de0)->f42c->f08);
    ((ObjectData *)o)->f28 = (int)((*(S_g8c4e2de0 **)0x8c4e2de0)->f42c->f0c);
    ((ObjectData *)o)->fac = 500.0f;
    ((ObjectData *)o)->fb0 = 40.0f;
    ((ObjectData *)o)->f34 |= 0x40000000;
    v1 = (int)0;
    while (4 > v1) {
        ((S_x2192 *)((char *)(int *)((char *)o + 0x94) + (v1 << 2)))->f00 = 0.0f;
        *(char *)((char *)((char *)o + 0xa4) + (v1)) = 0;
        v1 = (int)(v1 + 1);
    }
    ((ObjectData *)o)->fa8 = ((ObjectData *)o)->f6c + -0.98f;
    return o;
}
