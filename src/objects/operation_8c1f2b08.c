typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x8];
    Arg0_24 *f24;
    Arg0_28 *f28;
};
struct Arg0_28 {
    char unknown0[0x68];
    int f68;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void mark_effect_for_release(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1f2b08(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c278020;
        mark_effect_for_release((void *)(o->f24));
        if (o->f28 != 0) {
            o->f28->f68 &= -0x41;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
