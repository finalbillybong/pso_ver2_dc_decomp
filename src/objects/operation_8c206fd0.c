typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_9c Arg0_9c;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x80];
    Arg0_9c *f9c;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_192b28(void *, short);
extern void call_8c1567bc(Object *, int);
extern void call_8c122774(void *, Object *);
Object *operation_8c206fd0(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c278090;
        operation_192b28((void *)(o->f9c), (short)1);
        call_8c1567bc(o, 0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
