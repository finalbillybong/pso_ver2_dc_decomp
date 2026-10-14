typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_f0 Arg0_f0;
typedef struct Arg0_f4 Arg0_f4;
typedef struct S_vv1 S_vv1;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xc0];
    int fdc;
    char unknowne0[0x10];
    Arg0_f0 *ff0;
    Arg0_f4 *ff4;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct S_vv4 {
    char unknown0[0x4];
    short f04;
};
extern void call_8c053f54(Object *);
extern void operation_8c052124(void *);
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1d83a0(Object *o, int a1)
{
    S_vv1 *v1;
    S_vv4 *v4;
    if (o != 0) {
        o->dispatch = (void *)0x8c277120;
        if (o->ff0 != 0) {
            v1 = (S_vv1 *)o->ff0;
            v1->f04 |= 1;
            o->ff0 = (Arg0_f0 *)0;
        }
        if (o->ff4 != 0) {
            v4 = (S_vv4 *)o->ff4;
            v4->f04 |= 1;
            o->ff4 = (Arg0_f4 *)0;
        }
        if (o != 0) {
            o->dispatch = (void *)0x8c277164;
            if (o->fdc != 0) {
                call_8c053f54(o);
                operation_8c052124((void *)o);
            }
            destroy_context_8c051f28((void *)o, (short)0);
        }
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
