typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
class Arg0_44;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x28];
    Arg0_44 *f44;
};
class Arg0_44 {
public:
    char unknown0[0x8];
    virtual void v0(int);
};
typedef struct Arg0_44Data {

} Arg0_44Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void destroy_object_8c03ca10(void *, short);
extern "C" void call_8c122774(void *, Object *);
extern "C" Object *operation_8c1a769c(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)(void *)0x8c2745f8;
        if (o->f44 != 0) {
            if (o->f44 != 0) {
                o->f44->v0(1);
            }
            o->f44 = (Arg0_44 *)0;
        }
        destroy_object_8c03ca10((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
