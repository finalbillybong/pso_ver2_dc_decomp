typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x1c];
    Arg0_38 *f38;
};
struct Arg0_38 {
    char unknown0[0x4];
    short f04;
};
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0d1140(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c266eec;
        if (o->f38 != 0) {
            o->f38->f04 |= 1;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
