typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
class Arg0_20;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    char unknown24[0x14];
    Arg0_38 *f38;
    char unknown3c[0x2c];
    int f68;
};
class Arg0_20 {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
};
typedef struct Arg0_20Data {

} Arg0_20Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void call_8c380516(void);
extern "C" void call_8c011ec0(void *);
extern "C" void call_8c35e6ee(void);
extern "C" void destroy_hierarchy_node(void *, short);
extern "C" void call_8c122774(void *, Object *);
extern "C" Object *operation_8c08b22c(Object *o, int a1)
{
    char *v20;
    if (o != 0) {
        o->dispatch = (void *)(void *)0x8c265288;
        if (o->f20 != 0) {
            o->f20->v5();
            call_8c380516();
            call_8c380516();
            call_8c380516();
            o->f20->v3();
            call_8c380516();
            call_8c380516();
            call_8c380516();
        }
        if (o->f38 != 0) {
            call_8c011ec0((void *)(o->f38));
        }
        v20 = (char *)o->f68;
        if (v20 != 0) {
            ((void (*)(Object *))(v20))(o);
        }
        call_8c35e6ee();
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
