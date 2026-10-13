typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_134 Arg0_134;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x118];
    Arg0_134 *f134;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern void destroy_context_8c0f34a0(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c05e960(Object *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c262b3c;
        if (o->f134 != 0) {
            v1 = (S_vv1 *)o->f134;
            v1->f04 |= 1;
            o->f134 = (Arg0_134 *)0;
        }
        destroy_context_8c0f34a0((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
