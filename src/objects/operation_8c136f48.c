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
extern void destroy_shared_object(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c136f48(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26cfac;
        if (o != 0) {
            o->dispatch = (void *)0x8c26cff4;
            if (o != 0) {
                o->dispatch = (void *)0x8c26d03c;
                destroy_shared_object((void *)o, (short)0);
            }
        }
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
