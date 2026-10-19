typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
};
struct Arg0_20 {
    char unknown0[0x18];
    int f18;
    char unknown1c[0x17];
    char f33;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c3806f6(int, int, int);
extern void call_8c09ab04(Arg0_20 *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c097194(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2657bc;
        call_8c3806f6(0, 0, 0);
        o->f20->f18 = -0x51cb;
        o->f20->f33 = 2;
        call_8c09ab04((Arg0_20 *)(o->f20));
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
