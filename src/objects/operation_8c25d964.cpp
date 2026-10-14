typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c513444 S_g8c513444;
typedef struct S_g8c513444_4 S_g8c513444_4;
typedef struct S_g8c513444_4__4 S_g8c513444_4__4;
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
    char unknown20[0x84];
    int fa4;
    char unknowna8[0x20];
    int fc8;
    char unknowncc[0x4];
    int fd0;
} ObjectData;
struct S_g8c513444 {
    char unknown0[0x4];
    S_g8c513444_4 *f04;
};
extern "C" void call_8c01d1ec(Object *);
extern "C" void call_8c25db38(Object *);
extern "C" void operation_8c25dd0c(void *, int);
extern "C" Object *operation_8c25d964(Object *o, int a1, int a2)
{
    Object **home = &o;
    (void)home;
    call_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c281ca4;
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c340548);
    ((ObjectData *)o)->size = 0xd4;
    o->v6(a2);
    ((ObjectData *)o)->fc8 = 0;
    ((ObjectData *)o)->fa4 = 0;
    call_8c25db38(o);
    if (((ObjectData *)o)->fd0 > 0) {
        operation_8c25dd0c((void *)o, (int)(*(S_g8c513444_4__4 **)((char *)((char *)(*(S_g8c513444 **)0x8c513444)->f04 - 0x4) + (((ObjectData *)o)->fd0 << 2))));
    }
    return o;
}
