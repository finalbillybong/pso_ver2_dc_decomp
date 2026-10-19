typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x74];
    Arg0_90 *f90;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c199b40(int, int);
extern void destroy_object_8c1a632c(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c223ec4(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c278acc;
        operation_8c199b40((int)(o->f90), 1);
        destroy_object_8c1a632c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
