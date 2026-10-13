typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_120 Arg0_120;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x104];
    Arg0_120 *f120;
};
extern void mark_effect_for_release(void *);
extern void call_8c053f54(Object *);
extern void operation_8c052124(void *);
extern void destroy_object_8c0ee900(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0f1a2c(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2685a8;
        mark_effect_for_release((void *)(o->f120));
        call_8c053f54(o);
        operation_8c052124((void *)o);
        destroy_object_8c0ee900((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
