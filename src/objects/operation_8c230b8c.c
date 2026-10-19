typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_150 Arg0_150;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x134];
    Arg0_150 *f150;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void operation_8c0a21a4(void);
extern void destroy_shared_object(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c230b8c(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c278f58;
        if (o->f150 != 0) {
            request_resource_release((void *)(o->f150));
            o->f150 = (Arg0_150 *)0;
        }
        operation_8c0a21a4();
        destroy_shared_object((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
