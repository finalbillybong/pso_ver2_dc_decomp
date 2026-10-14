typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_54 Arg0_54;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x38];
    Arg0_54 *f54;
};
struct Arg0_54 {
    char unknown0[0x4];
    short f04;
};
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1ac698(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c274874;
        if (o != 0) {
            o->dispatch = (void *)0x8c2748b4;
            if (o != 0) {
                o->dispatch = (void *)0x8c2748d4;
                if (o->f54 != 0) {
                    o->f54->f04 |= 1;
                }
                destroy_hierarchy_node((void *)o, (short)0);
            }
        }
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
