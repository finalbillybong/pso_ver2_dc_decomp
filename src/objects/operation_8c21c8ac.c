typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_98 Arg0_98;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x7c];
    Arg0_98 *f98;
};
extern void operation_192b28(void *, short);
extern void destroy_context_8c1ccd60(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c21c8ac(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2785d0;
        operation_192b28((void *)(o->f98), (short)1);
        destroy_context_8c1ccd60((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
