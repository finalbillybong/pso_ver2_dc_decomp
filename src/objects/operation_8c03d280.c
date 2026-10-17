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
};
extern short g_8c462c80;
extern short g_8c462c82;
extern char g_8c462c84;
extern char g_8c462c85;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c03d280(Object *o, int a1)
{
    int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c261b9c;
        g_8c462c80 = 0;
        g_8c462c82 = 0;
        g_8c462c84 = 0;
        g_8c462c85 = 0;
        v1 = (int)0;
        while (0x10 > v1) {
            *(int *)((char *)0x8c462c88 + (v1 << 2)) = 0;
            v1 = (int)(v1 + 1);
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
