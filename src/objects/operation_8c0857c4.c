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
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c053f54(Object *);
extern void operation_8c052124(void *);
extern void destroy_field_8c1f1460(void *, short);
extern void destroy_object_state(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0857c4(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c264600;
        call_8c053f54(o);
        operation_8c052124((void *)o);
        if (o != 0) {
            o->dispatch = (void *)0x8c264d1c;
            destroy_field_8c1f1460((void *)(((char *)o + 0x35c)), (short)-1);
            destroy_object_state((void *)o, (short)0);
        }
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
