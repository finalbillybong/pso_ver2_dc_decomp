typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_24_0 Arg0_24_0;
class S_g8c505900;
class S_g8c505904;
class S_g8c505908;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    Arg0_24 *f24;
};
class S_g8c505904 {
public:
    char unknown0[0x14];
    virtual void v0(int);
};
typedef struct S_g8c505904Data {

} S_g8c505904Data;
class S_g8c505900 {
public:
    char unknown0[0x14];
    virtual void v0(int);
};
typedef struct S_g8c505900Data {

} S_g8c505900Data;
class S_g8c505908 {
public:
    char unknown0[0x14];
    virtual void v0(int);
};
typedef struct S_g8c505908Data {

} S_g8c505908Data;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c505900 *g_8c505900;
extern S_g8c505904 *g_8c505904;
extern S_g8c505908 *g_8c505908;
extern int g_8c505914;
extern int g_8c505918;
extern "C" void operation_8c2187ac(void *, int);
extern "C" void call_8c011ed8(void *);
extern "C" void call_8c18de08(void *);
extern "C" void destroy_hierarchy_node(void *, short);
extern "C" void call_8c122774(void *, Object *);
extern "C" Object *operation_8c218b3c(Object *o, int a1)
{
    int v5;
    if (o != 0) {
        o->dispatch = (void *)(void *)0x8c278350;
        operation_8c2187ac((void *)(o->f20), 1);
        if (g_8c505904 != 0) {
            g_8c505904->v0(1);
        }
        if (g_8c505900 != 0) {
            g_8c505900->v0(1);
        }
        if (g_8c505908 != 0) {
            g_8c505908->v0(1);
        }
        v5 = (int)0;
        while (v5 != 0x11) {
            call_8c011ed8((void *)(*(Arg0_24_0 **)((char *)((char *)o->f24 + 0x0) + (v5 << 2))));
            v5 = (int)(v5 + 1);
        }
        call_8c18de08((void *)(o->f24));
        o->f20 = (Arg0_20 *)0;
        g_8c505904 = (S_g8c505904 *)0;
        g_8c505900 = (S_g8c505900 *)0;
        g_8c505908 = (S_g8c505908 *)0;
        o->f24 = (Arg0_24 *)0;
        g_8c505914 = 0;
        g_8c505918 = 0;
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
