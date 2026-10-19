typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_3d0 Arg0_3d0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x384];
    int f3a0;
    char unknown3a4[0x2c];
    Arg0_3d0 *f3d0;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c052124(void *);
extern void mark_effect_for_release(void *);
extern void operation_8c0120f4(void *, int);
extern void call_8c122774(void *, Object *);
Object *operation_8c1bc99c(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c275098;
        if (o != 0) {
            o->dispatch = (void *)0x8c275370;
            operation_8c052124((void *)o);
            o->f3a0 = 0;
            if (o->f3d0 != 0) {
                mark_effect_for_release((void *)(o->f3d0));
                o->f3d0 = (Arg0_3d0 *)0;
            }
            operation_8c0120f4((void *)o, 0);
        }
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
