typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
class Arg0_42c;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x3d8];
    int f3f4;
    char unknown3f8[0x34];
    Arg0_42c *f42c;
};
class Arg0_42c {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct Arg0_42cData {

} Arg0_42cData;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" char g_8c4688c8[];
extern "C" char g_8c4688dc[];
extern "C" void operation_8c052124(void *);
extern "C" void detach_effect_node(void *, void *, void *);
extern "C" void destroy_color_rise_8c05bd84(void *, short);
extern "C" void call_8c122774(void *, Object *);
extern "C" Object *operation_8c060d94(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)(void *)0x8c262bfc;
        if (o->f42c != 0) {
            operation_8c052124((void *)(o->f42c));
            if (o->f42c != 0) {
                o->f42c->v0(1);
            }
            o->f42c = (Arg0_42c *)0;
        }
        detach_effect_node((void *)(((char *)o + 0x3dc)), (void *)((void *)g_8c4688c8), (void *)((g_8c4688c8 + 0x4)));
        if (o->f3f4 != 0) {
            detach_effect_node((void *)(((char *)o + 0x3e8)), (void *)((void *)g_8c4688dc), (void *)((g_8c4688dc + 0x4)));
        }
        operation_8c052124((void *)o);
        destroy_color_rise_8c05bd84((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
