typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_10c Arg0_10c;
typedef struct Arg0_94 Arg0_94;
typedef struct Arg0_f0 Arg0_f0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xd4];
    Arg0_f0 *ff0;
    char unknownf4[0x18];
    Arg0_10c *f10c;
};
extern void operation_8c161c38(int);
extern void mark_effect_for_release(void *);
extern int operation_8c01c25c(void);
extern void call_8c0a21a4(void);
extern void destroy_shared_object(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c22a3ec(Object *o, int a1)
{
    int v41;
    int v42;
    int t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c278d18;
        if (o->ff0 != 0) {
            operation_8c161c38((int)(o->ff0));
            o->ff0 = (Arg0_f0 *)0;
        }
        if (o->f10c != 0) {
            operation_8c161c38((int)(o->f10c));
            o->f10c = (Arg0_10c *)0;
        }
        v41 = (int)0;
        while (5 > v41) {
            v42 = (int)(v41 << 2);
            if (*(int *)((char *)((char *)o + 0x94) + (v42)) != 0) {
                mark_effect_for_release((void *)(*(Arg0_94 **)((char *)((char *)o + 0x94) + (v42))));
                *(int *)((char *)((char *)o + 0x94) + (v42)) = 0;
            }
            v41 = (int)(v41 + 1);
        }
        t1 = operation_8c01c25c();
        if (t1 != 0x10) {
            call_8c0a21a4();
        }
        destroy_shared_object((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
