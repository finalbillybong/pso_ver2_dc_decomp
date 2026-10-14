typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_108 Arg0_108;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xec];
    Arg0_108 *f108;
};
struct Arg0_108 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c052124(void *);
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c18f8a0(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2726b8;
        operation_8c052124((void *)o);
        if (o->f108 != 0) {
            o->f108->f04 |= 1;
        }
        destroy_context_8c051f28((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
