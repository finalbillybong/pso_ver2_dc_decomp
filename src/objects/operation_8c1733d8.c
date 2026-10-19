typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_ac Arg0_ac;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x90];
    Arg0_ac *fac;
    char unknownb0[0x4];
    int fb4;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4db520;
extern int g_8c4db524;
extern void operation_03cee8_8c173484(void);
extern void call_8c011ec0(void *);
extern void destroy_hierarchy_node(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1733d8(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c270274;
        if (o->fb4 == 0) {
            g_8c4db520 = 0;
            operation_03cee8_8c173484();
        } else {
            g_8c4db524 = 0;
        }
        call_8c011ec0((void *)(o->fac));
        destroy_hierarchy_node((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
