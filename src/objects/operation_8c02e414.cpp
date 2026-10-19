typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
class Object;
struct Arg1 {
    char unknown0[0x2];
    unsigned short f02;
};
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *);
};
typedef struct ObjectData {

} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" void call_8c036c38(void *, int);
extern "C" void operation_8c02e414(Object *o, Arg1 *a1)
{
    o->v4((g_8c2e7ce0 + 0x2a1));
    call_8c036c38((void *)(((char *)a1 + 0x4)), (int)(a1->f02 + -4));
}
