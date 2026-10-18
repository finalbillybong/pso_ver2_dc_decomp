typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_a4 Arg0_a4;
typedef struct Arg0_a8 Arg0_a8;
typedef struct Arg0_ac Arg0_ac;
typedef struct Arg0_b0 Arg0_b0;
typedef struct Arg0_b4 Arg0_b4;
typedef struct Arg0_b8 Arg0_b8;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x88];
    Arg0_a4 *fa4;
    Arg0_a8 *fa8;
    Arg0_ac *fac;
    Arg0_b0 *fb0;
    Arg0_b4 *fb4;
    Arg0_b8 *fb8;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c18de08(void *);
extern void destroy_shared_object(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1daec0(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2771c4;
        if (o->fa4 != 0) {
            call_8c18de08((void *)(o->fa4));
        }
        if (o->fa8 != 0) {
            call_8c18de08((void *)(o->fa8));
        }
        if (o->fac != 0) {
            call_8c18de08((void *)(o->fac));
        }
        if (o->fb0 != 0) {
            call_8c18de08((void *)(o->fb0));
        }
        if (o->fb4 != 0) {
            call_8c18de08((void *)(o->fb4));
        }
        if (o->fb8 != 0) {
            call_8c18de08((void *)(o->fb8));
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
