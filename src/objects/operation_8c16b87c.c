typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_58 Arg0_58;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    char f20;
    char unknown21[0x37];
    Arg0_58 *f58;
};
struct Arg0_58 {
    int f00;
};
struct S_vv1 {
    int f00;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c16b87c(Object *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c27016c;
        *(int *)((char *)o->f58 + (o->f20 << 2) + 0x4) = 0;
        v1 = (S_vv1 *)o->f58;
        if (!(--o->f58->f00 >= 0)) {
            v1->f00 = 0;
        }
        if (o != 0) {
            o->dispatch = (void *)0x8c270188;
            destroy_hierarchy_node((void *)o, (short)0);
        }
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
