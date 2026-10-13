typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x78];
    Arg0_94 *f94;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c09e6f4(void *, int);
extern void destroy_shared_object(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c080680(Object *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c2643b0;
        if (o->f94 != 0) {
            v1 = (S_vv1 *)o->f94;
            v1->f04 |= 1;
            o->f94 = (Arg0_94 *)0;
        }
        operation_8c09e6f4((void *)o, -3);
        destroy_shared_object((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
