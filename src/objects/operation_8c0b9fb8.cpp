typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct Frame Frame;
class Object;
typedef struct Block_p0_24 {
    float f00;
    float f04;
    float f08;
} Block_p0_24;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
};
typedef struct ObjectData {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    Block_p0_24 f24;
    char unknown30[0x4c];
    float f7c;
    float f80;
    float f84;
} ObjectData;
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_c8c011214_4 {
    Vector3 f00;
};
extern "C" S_c8c011214 *call_8c011214(Frame *, void *, int);
extern "C" void operation_8c0b9fb8(Object *o)
{
    Frame frame;
    S_c8c011214 *t1;
    (&frame)->f00 = ((ObjectData *)o)->f7c;
    (&frame)->f04 = ((ObjectData *)o)->f80;
    (&frame)->f08 = ((ObjectData *)o)->f84;
    (&frame)->f0c = ((ObjectData *)o)->f24.f00;
    (&frame)->f10 = ((ObjectData *)o)->f24.f04;
    (&frame)->f14 = ((ObjectData *)o)->f24.f08;
    t1 = call_8c011214((Frame *)((&frame)), (void *)(&(&frame)->f0c), 0x100);
    if (t1 != 0) {
        *(Vector3 *)&((ObjectData *)o)->f24 = *(Vector3 *)&t1->f04->f00;
        o->v5();
        ((ObjectData *)o)->f04 |= 1;
    }
}
