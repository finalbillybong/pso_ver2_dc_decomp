typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_s9c Arg0_s9c;
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
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x54];
    float f74;
    char unknown78[0x10];
    int f88;
    int f8c;
    char unknown90[0x4];
    float f94;
    int f98;
    int f9c;
} ObjectData;
struct Arg0_s9c {
    char unknown0[0x4];
    int f04;
};
extern int g_8c30affc;
extern "C" void call_8c01d1ec(Object *);
extern "C" int current_effect_mode(void);
typedef struct Pair8 {
    int a;
    int b;
} Pair8;
extern "C" Object *operation_8c100b4c(Object *o, int a1, int a2)
{
    Object **home = &o;
    int v1;
    int t1;
    (void)home;
    call_8c01d1ec(o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c269538;
    ((ObjectData *)o)->tag = (int)(g_8c30affc);
    ((ObjectData *)o)->size = 0xa4;
    o->v6(a2);
    t1 = current_effect_mode();
    v1 = (int)*(int *)((char *)0x8c30afb0 + (t1 << 2));
    if (v1 != 0) {
        *(Pair8 *)((char *)o + 0x9c) = *(Pair8 *)((char *)v1 + ((int)((ObjectData *)o)->f88 << 3));
    } else {
        ((ObjectData *)o)->f04 |= 1;
    }
    ((ObjectData *)o)->f94 = ((ObjectData *)o)->f74;
    if (!(((ObjectData *)o)->f94 > 0.0f)) {
        ((ObjectData *)o)->f94 = 200.0f;
    }
    ((ObjectData *)o)->f98 = (int)(((ObjectData *)o)->f8c);
    if (-0x7f > ((ObjectData *)o)->f98) {
        ((ObjectData *)o)->f98 = -0x7f;
    }
    if (((ObjectData *)o)->f98 > 0) {
        ((ObjectData *)o)->f98 = 0;
    }
    ((ObjectData *)o)->f04 |= 0x10;
    return o;
}
