typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x8];
    int f24;
    int f28;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c248980(int);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c25e73c(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c281d38;
        if (o->f24 != 0 && o->f28 == 0) {
            operation_8c248980(0);
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
