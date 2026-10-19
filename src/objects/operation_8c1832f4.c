typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4dbb24;
extern void call_8c011ed8(void *);
extern void call_8c011ec0(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1832f4(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c271fe0;
        if (o->f28 != 0) {
            call_8c011ed8((void *)(o->f28));
        }
        if (o->f24 != 0) {
            call_8c011ed8((void *)(o->f24));
        }
        if (o->f20 != 0) {
            call_8c011ec0((void *)(o->f20));
            o->f20 = (Arg0_20 *)0;
        }
        g_8c4dbb24 = 0;
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
