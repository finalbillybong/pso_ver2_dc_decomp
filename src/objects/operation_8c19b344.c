typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_158 Arg0_158;
typedef struct Arg0_15c Arg0_15c;
typedef struct Arg0_164 Arg0_164;
typedef struct Arg0_54 Arg0_54;
typedef struct S_vv17 S_vv17;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x38];
    Arg0_54 *f54;
    char unknown58[0x100];
    Arg0_158 *f158;
    Arg0_15c *f15c;
    char unknown160[0x4];
    Arg0_164 *f164;
};
struct S_vv17 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void destroy_object_8c10671c(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c19b344(Object *o, int a1)
{
    S_vv17 *v17;
    if (o != 0) {
        o->dispatch = (void *)0x8c2729cc;
        if (o->f158 != 0) {
            request_resource_release((void *)(o->f158));
            o->f158 = (Arg0_158 *)0;
        }
        if (o->f164 != 0) {
            request_resource_release((void *)(o->f164));
            o->f164 = (Arg0_164 *)0;
        }
        if (o->f15c != 0) {
            request_resource_release((void *)(o->f15c));
            o->f15c = (Arg0_15c *)0;
        }
        if (o->f54 != 0) {
            v17 = (S_vv17 *)o->f54;
            v17->f04 |= 1;
            o->f54 = (Arg0_54 *)0;
        }
        destroy_object_8c10671c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
