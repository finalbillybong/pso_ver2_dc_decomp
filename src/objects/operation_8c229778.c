typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct Arg0_bc Arg0_bc;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xa0];
    Arg0_bc *fbc;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c161c38(int);
extern void mark_effect_for_release(void *);
extern int operation_8c01c25c(void);
extern void operation_8c0a21a4(void);
extern void destroy_shared_object(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c229778(Object *o, int a1)
{
    int v8;
    int v7;
    int t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c278c98;
        if (o->fbc != 0) {
            operation_8c161c38((int)(o->fbc));
            o->fbc = (Arg0_bc *)0;
        }
        v7 = (int)0;
        while (1 > v7) {
            v8 = (int)(v7 << 2);
            if (*(int *)((char *)((char *)o + 0x94) + (v8)) != 0) {
                mark_effect_for_release((void *)(*(Arg0_94 **)((char *)((char *)o + 0x94) + (v8))));
                *(int *)((char *)((char *)o + 0x94) + (v8)) = 0;
            }
            v7 = (int)(v7 + 1);
        }
        t1 = operation_8c01c25c();
        if (t1 != 0x10) {
            operation_8c0a21a4();
        }
        destroy_shared_object((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
