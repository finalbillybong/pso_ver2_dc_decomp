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
};
struct Arg0_6c {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void destroy_context_8c0db244(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c22cb18(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c278e84;
        o->f6c->f04 |= 1;
        destroy_context_8c0db244((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
