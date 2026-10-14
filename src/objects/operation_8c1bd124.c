typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x5c];
    Arg0_78 *f78;
};
extern void operation_8c199b40(int, int);
extern void destroy_context_8c0db244(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1bd124(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2754fc;
        if (o->f78 != 0) {
            operation_8c199b40((int)(o->f78), 1);
        }
        destroy_context_8c0db244((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
