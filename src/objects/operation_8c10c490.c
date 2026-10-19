typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_7c Arg0_7c;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x5c];
    Arg0_78 *f78;
    Arg0_7c *f7c;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c10ecd0(void *, int);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c10c490(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c269b54;
        if (o->f78 != 0) {
            operation_8c10ecd0((void *)(o->f78), 1);
        }
        if (o->f7c != 0) {
            operation_8c10ecd0((void *)(o->f7c), 1);
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
