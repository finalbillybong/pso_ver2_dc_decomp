typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_c0 Arg0_c0;
typedef struct Arg0_c4 Arg0_c4;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xa4];
    Arg0_c0 *fc0;
    Arg0_c4 *fc4;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c18de08(void *);
extern void destroy_shared_object(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1da574(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c277244;
        if (o->fc0 != 0) {
            call_8c18de08((void *)(o->fc0));
        }
        if (o->fc4 != 0) {
            call_8c18de08((void *)(o->fc4));
        }
        if (o != 0) {
            o->dispatch = (void *)0x8c277284;
            destroy_shared_object((void *)o, (short)0);
        }
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
