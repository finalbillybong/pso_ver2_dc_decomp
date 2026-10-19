typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_74 Arg0_74;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x58];
    Arg0_74 *f74;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c011ec0(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c087e18(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c264f98;
        if (o->f74 != 0) {
            call_8c011ec0((void *)(o->f74));
            o->f74 = (Arg0_74 *)0;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
