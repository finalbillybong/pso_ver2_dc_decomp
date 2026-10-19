typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_3a4 Arg0_3a4;
typedef struct Arg0_404 Arg0_404;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x388];
    Arg0_3a4 *f3a4;
    int f3a8;
    char unknown3ac[0x58];
    Arg0_404 *f404;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c052124(void *);
extern void mark_effect_for_release(void *);
extern void destroy_motion_profile_8c0ffdcc(void *, short);
extern void operation_8c0120f4(void *, int);
extern void call_8c122774(void *, Object *);
Object *operation_8c0f8760(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c268d28;
        operation_8c052124((void *)o);
        o->f3a8 = 0;
        if (o->f404 != 0) {
            mark_effect_for_release((void *)(o->f404));
            o->f404 = (Arg0_404 *)0;
        }
        destroy_motion_profile_8c0ffdcc((void *)(o->f3a4), (short)1);
        o->f3a4 = (Arg0_3a4 *)0;
        operation_8c0120f4((void *)o, 0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
