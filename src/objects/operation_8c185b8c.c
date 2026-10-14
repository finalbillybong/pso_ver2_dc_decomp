typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_44 Arg0_44;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x28];
    Arg0_44 *f44;
};
extern void call_8c014d64(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c185b8c(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c272090;
        if (o->f44 != 0) {
            call_8c014d64((void *)(o->f44));
            o->f44 = (Arg0_44 *)0;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
