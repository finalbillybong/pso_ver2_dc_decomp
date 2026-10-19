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
    char unknown1c[0x2c];
    void *f48;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c16a11c(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2701a4;
        if (((char *)o + 0x24) != 0) {
            o->f48 = (void *)0x8c2701c0;
            if (((char *)o + 0x24) != 0) {
                o->f48 = (void *)0x8c266048;
                if (((char *)o + 0x24) != 0) {
                    o->f48 = (void *)0x8c266054;
                }
            }
        }
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
