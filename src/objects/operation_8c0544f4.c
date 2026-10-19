typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_134 Arg0_134;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x118];
    Arg0_134 *f134;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c18de08(void *);
extern void destroy_object_8c01c500(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0544f4(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26220c;
        call_8c18de08((void *)(o->f134));
        destroy_object_8c01c500((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
