typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct S_vv1 S_vv1;
typedef struct S_vv5 S_vv5;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x10];
    Arg0_2c *f2c;
    Arg0_30 *f30;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_vv5 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c25b4ec(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv5 *v5;
    if (o != 0) {
        o->dispatch = (void *)0x8c281bc4;
        if (o->f2c != 0) {
            v1 = (S_vv1 *)o->f2c;
            v1->f04 |= 1;
            o->f2c = (Arg0_2c *)0;
        }
        if (o->f30 != 0) {
            v5 = (S_vv5 *)o->f30;
            v5->f04 |= 1;
            o->f30 = (Arg0_30 *)0;
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
