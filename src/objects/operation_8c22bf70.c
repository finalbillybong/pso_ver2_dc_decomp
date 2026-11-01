typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    Arg0_20 *f20;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c22c190(void *);
extern void operator_delete_8c18de08(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c22bf70(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c278e30;
        operation_8c22c190((void *)o);
        operator_delete_8c18de08((void *)(o->f20));
        o->f20 = (Arg0_20 *)0;
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
