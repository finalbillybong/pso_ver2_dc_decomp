typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_5c Arg0_5c;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x68];
    int f84;
};
extern void mark_effect_for_release(void *);
extern void operation_1abb78(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c1c55e0(Object *o, int a1)
{
    int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c27662c;
        v1 = (int)0;
        while (v1 != o->f84) {
            mark_effect_for_release((void *)(*(Arg0_5c **)((char *)((char *)o + 0x5c) + (v1 << 2))));
            v1 = (int)(v1 + 1);
        }
        operation_1abb78((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
