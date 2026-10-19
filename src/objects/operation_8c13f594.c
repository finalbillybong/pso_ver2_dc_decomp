typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_6c Arg0_6c;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x50];
    Arg0_6c *f6c;
    int f70;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4d9e58;
extern void call_8c03dc40(void *, int);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c13f594(Object *o, int a1)
{
    int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c26dc24;
        v1 = (int)g_8c4d9e58;
        if (v1 >= 0 && !(v1 > 1) && o->f70 != 0) {
            g_8c4d9e58 = v1 + -1;
            o->f70 = 0;
        }
        if (o->f6c != 0) {
            call_8c03dc40((void *)(o->f6c), 1);
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
