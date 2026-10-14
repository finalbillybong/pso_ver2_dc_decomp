typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dc5e0 S_g8c4dc5e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x2b8];
    int f2d4;
};
extern void call_8c1a19fc(void *, void *);
extern void destroy_shared_object(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1c23b0(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c275938;
        if (o->f2d4 != 0 && *(int *)0x8c4dc5e0 != 0) {
            call_8c1a19fc((void *)(*(S_g8c4dc5e0 **)0x8c4dc5e0), (void *)(((char *)o + 0x94)));
        }
        destroy_shared_object((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
