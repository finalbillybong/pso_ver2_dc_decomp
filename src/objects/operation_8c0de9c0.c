typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_88 Arg0_88;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x65];
    unsigned char f81;
    char unknown82[0x6];
    Arg0_88 *f88;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c0ddef0(void *);
extern void call_8c18de08(void *);
extern void destroy_object_8c11924c(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0de9c0(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c267748;
        if (((o->f81 & 1)) != 0) {
            o->f81 = (unsigned int)o->f81 >> 1 << 1;
            operation_8c0ddef0((void *)(((char *)o + 0x83)));
        }
        if (o->f88 != 0) {
            call_8c18de08((void *)(o->f88));
            o->f88 = (Arg0_88 *)0;
        }
        destroy_object_8c11924c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
