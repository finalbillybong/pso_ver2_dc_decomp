typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_88 Arg0_88;
typedef struct Arg0_98 Arg0_98;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
typedef struct ObjectData {
    char unknown0[0x74];
    float f74;
    char unknown78[0x10];
    Arg0_88 *f88;
    int f8c;
    char unknown90[0x4];
    float f94;
    Arg0_98 *f98;
} ObjectData;
extern "C" char g_8c30b000[];
extern "C" void call_8c38c5b6(int);
extern "C" void call_8c38cf80(int, void *, ...);
extern "C" void operation_8c100cf4(Object *o)
{
    ((ObjectData *)o)->f98 = (Arg0_98 *)((ObjectData *)o)->f8c;
    if (-0x7f > (int)(((ObjectData *)o)->f98)) {
        ((ObjectData *)o)->f98 = (Arg0_98 *)-0x7f;
    }
    if ((int)(((ObjectData *)o)->f98) > 0x7f) {
        ((ObjectData *)o)->f98 = (Arg0_98 *)0x7f;
    }
    ((ObjectData *)o)->f94 = ((ObjectData *)o)->f74;
    if (!(((ObjectData *)o)->f94 > 0.0f)) {
        ((ObjectData *)o)->f94 = 200.0f;
    }
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001c, (void *)((g_8c30b000 + 0xd)), 200.0f);
    call_8c38cf80(0x13001e, (void *)((g_8c30b000 + 0x28)), (int)(((ObjectData *)o)->f88));
    call_8c38cf80(0x13001f, (void *)((g_8c30b000 + 0x33)), (int)(((ObjectData *)o)->f98));
    call_8c38c5b6(-0xf0f10);
    o->v3();
}
