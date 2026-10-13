typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_12c Arg0_12c;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x110];
    Arg0_12c *f12c;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern void call_8c053f54(void);
extern void operation_8c052124(void *);
extern void destroy_object_8c112efc(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c081be0(Object *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c264504;
        call_8c053f54();
        operation_8c052124((void *)o);
        if (o->f12c != 0) {
            v1 = (S_vv1 *)o->f12c;
            v1->f04 |= 1;
            o->f12c = (Arg0_12c *)0;
        }
        destroy_object_8c112efc((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
