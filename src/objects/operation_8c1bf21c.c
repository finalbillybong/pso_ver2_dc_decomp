typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern void operation_8c052124(void *);
extern void call_8c053f54(Object *);
extern void destroy_object_8c0f1100(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1bf21c(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2756a0;
        operation_8c052124((void *)o);
        call_8c053f54(o);
        destroy_object_8c0f1100((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
