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
    char unknown0[0x4];
    short f04;
};
struct Arg0_24 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void clear_global_render_resources(void);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0ea148(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c267f94;
        clear_global_render_resources();
        if (o->f28 != 0) {
            o->f28->f04 |= 1;
        }
        if (o->f24 != 0) {
            o->f24->f04 |= 1;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
