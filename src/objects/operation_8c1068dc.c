typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_390 Arg0_390;
typedef struct Arg0_394 Arg0_394;
typedef struct Arg0_398 Arg0_398;
typedef struct Arg0_39c Arg0_39c;
typedef struct Arg0_3a0 Arg0_3a0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x374];
    Arg0_390 *f390;
    Arg0_394 *f394;
    Arg0_398 *f398;
    Arg0_39c *f39c;
    Arg0_3a0 *f3a0;
};
extern void request_resource_release(void *);
extern void destroy_object_8c10671c(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1068dc(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c269808;
        if (o->f390 != 0) {
            request_resource_release((void *)(o->f390));
            o->f390 = (Arg0_390 *)0;
        }
        if (o->f394 != 0) {
            request_resource_release((void *)(o->f394));
            o->f394 = (Arg0_394 *)0;
        }
        if (o->f398 != 0) {
            request_resource_release((void *)(o->f398));
            o->f398 = (Arg0_398 *)0;
        }
        if (o->f3a0 != 0) {
            request_resource_release((void *)(o->f3a0));
            o->f3a0 = (Arg0_3a0 *)0;
        }
        if (o->f39c != 0) {
            request_resource_release((void *)(o->f39c));
            o->f39c = (Arg0_39c *)0;
        }
        destroy_object_8c10671c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
