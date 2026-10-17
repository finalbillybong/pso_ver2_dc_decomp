typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
class Arg0_44;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Arg0_3c *f3c;
    char unknown40[0x4];
    Arg0_44 *f44;
};
class Arg0_44 {
public:
    char unknown0[0x8];
    virtual void v0();
    virtual void v1();
    virtual void v2(int);
    virtual void v3(int);
    virtual void v4();
    virtual void v5(int, int, int, int);
};
typedef struct Arg0_44Data {

} Arg0_44Data;
extern "C" char g_8c323e1c[];
extern "C" char g_8c41cba0[];
extern "C" void configure_integer_field(void *, void *, int);
extern "C" int operation_8c01d844(int, int, int, int);
extern "C" void create_loader_8c1735f8(int);
extern "C" void call_8c38c5aa(int);
extern "C" void call_8c38c5b6(int);
extern "C" void call_8c38cf80(int, void *, ...);
extern "C" void operation_8c1a779c(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    configure_integer_field((void *)(o->f44), (void *)(&o->f3c), 8);
    t1 = operation_8c01d844((int)((int)(o->f34 * 0x3c + g_8c41cba0) + 0x20), 0x80, 6, 1);
    if (t1 != 0) {
        o->f44->v2(-1);
    }
    t2 = operation_8c01d844((int)((int)(o->f34 * 0x3c + g_8c41cba0) + 0x20), 0x40, 6, 1);
    if (t2 != 0) {
        o->f44->v2(1);
    }
    t3 = operation_8c01d844((int)((int)(o->f34 * 0x3c + g_8c41cba0) + 0x20), 0x10, 6, 1);
    if (t3 != 0) {
        o->f44->v3(1);
    }
    t4 = operation_8c01d844((int)((int)(o->f34 * 0x3c + g_8c41cba0) + 0x20), 0x20, 6, 1);
    if (t4 != 0) {
        o->f44->v3(-1);
    }
    if (!((int)(o->f3c) >= 0)) {
        o->f3c = (Arg0_3c *)0;
    }
    if (((*(int *)((char *)(g_8c41cba0 + 0x28) + (o->f34 * 0x3c)) & 4)) != 0) {
        create_loader_8c1735f8((int)(o->f3c));
    }
    call_8c38c5aa(0xe);
    call_8c38c5b6(-0xf0f10);
    call_8c38cf80(0x4000a, (void *)((g_8c323e1c + 0x14)));
    o->f44->v5(0xe, 0xa, -0xf0f10, -0xff0001);
    call_8c38c5aa(0xc);
}
