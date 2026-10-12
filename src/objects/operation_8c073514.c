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
extern void call_8c07484c(Object *, int);
extern void set_field_8c052174(void *);
extern void call_8c07444c(Object *);
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c073514(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c262fdc;
        call_8c07484c(o, 3);
        set_field_8c052174((void *)o);
        call_8c07444c(o);
        destroy_context_8c051f28((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(*(S_g8c4d97e0 **)0x8c4d97e0, o);
        }
    }
    return o;
}
