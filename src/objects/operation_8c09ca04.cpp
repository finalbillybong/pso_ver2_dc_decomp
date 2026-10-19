typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
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
    virtual void v6();
};
typedef struct ObjectData {
    char unknown0[0x18];
    void *dispatch;
} ObjectData;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void destroy_virtual_context_8c01116c(void *, short);
extern "C" void call_8c122774(void *, Object *);
extern "C" Object *operation_8c09ca04(Object *o, int a1)
{
    if (o != 0) {
        *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2658d4;
        o->v6();
        destroy_virtual_context_8c01116c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
