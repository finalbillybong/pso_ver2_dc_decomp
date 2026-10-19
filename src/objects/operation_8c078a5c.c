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
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c0f3384(int, int);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c078a5c(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c263e00;
        operation_8c0f3384((int)(o->f38), 1);
        o->f38 = (Arg0_38 *)0;
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
