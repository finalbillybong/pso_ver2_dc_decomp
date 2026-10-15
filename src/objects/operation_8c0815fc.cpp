typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_dc Arg0_dc;
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
    char unknown0[0x6c];
    float f6c;
    float f70;
    float f74;
    char unknown78[0x10];
    int f88;
    char unknown8c[0x50];
    Arg0_dc *fdc;
    char unknowne0[0x4];
    int fe4;
    short fe8;
} ObjectData;
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
    float f10;
};
extern "C" char g_8c2fede8[];
extern "C" void call_8c38c5b6(int);
extern "C" void call_8c38cf80(int, void *, ...);
extern "C" void operation_8c0815fc(Object *o)
{
    ((ObjectData *)o)->fe8 = ((ObjectData *)o)->f88;
    ((ObjectData *)o)->fe4 = (int)((ObjectData *)o)->f6c;
    if (!(((ObjectData *)o)->fe4 >= 0)) {
        ((ObjectData *)o)->fe4 = 0;
    }
    if (((ObjectData *)o)->fe4 > 3) {
        ((ObjectData *)o)->fe4 = 3;
    }
    if (0.0f > ((ObjectData *)o)->f70) {
        ((ObjectData *)o)->f70 = 0.0f;
    }
    if (0.0f > ((ObjectData *)o)->f74) {
        ((ObjectData *)o)->f74 = 0.0f;
    }
    ((ObjectData *)o)->fdc->f10 = ((ObjectData *)o)->f70;
    ((ObjectData *)o)->fdc->f0c = ((ObjectData *)o)->f74;
    call_8c38c5b6(-0xff0100);
    call_8c38cf80(0x13001a, (void *)((g_8c2fede8 + 0xbe)));
    call_8c38cf80(0x13001b, (void *)((g_8c2fede8 + 0x104)));
    call_8c38cf80(0x13001c, (void *)((g_8c2fede8 + 0x113)));
    call_8c38cf80(0x13001e, (void *)((g_8c2fede8 + 0xce)), ((ObjectData *)o)->fe8);
    call_8c38cf80(0x130020, (void *)((g_8c2fede8 + 0xe0)));
    call_8c38c5b6(-0xf0f10);
    o->v3();
}
