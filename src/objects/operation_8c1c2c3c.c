typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_118 Arg0_118;
typedef struct Arg0_184 Arg0_184;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xfc];
    Arg0_118 *f118;
    char unknown11c[0x68];
    Arg0_184 *f184;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c18de08(void *);
extern void operation_8c0355fc(void *, int);
extern void destroy_object_8c01c500(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1c2c3c(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c275bc0;
        if (o->f118 != 0) {
            call_8c18de08((void *)(o->f118));
            o->f118 = (Arg0_118 *)0;
        }
        if (o->f184 != 0) {
            operation_8c0355fc((void *)(o->f184), 1);
            o->f184 = (Arg0_184 *)0;
        }
        destroy_object_8c01c500((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
