typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2853d8 S_L8c2853d8;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_14c Arg0_14c;
typedef struct Arg0_14c_0 Arg0_14c_0;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0xb0];
    int fcc;
    char unknownd0[0x7c];
    Arg0_14c *f14c;
};
struct S_L8c2853d8 {
    char unknown0[0x4];
    int f04;
};
struct Arg0_14c_0 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c2853d8 g_8c2853d8;
extern void call_8c18de08(void *, int);
extern void destroy_context_8c0b9ce8(void *, short);
extern void call_8c122774(void *, Object *);
Object *operation_8c0b1a14(Object *o, int a1)
{
    unsigned int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c265e98;
        v1 = (unsigned int)0;
        while ((unsigned int)*(int *)((char *)&g_8c2853d8.f04 + (o->fcc << 3)) > v1) {
            (*(Arg0_14c_0 **)((char *)((char *)o->f14c + 0x0) + (v1 << 2)))->f04 |= 1;
            v1 = (unsigned int)(v1 + 1);
        }
        call_8c18de08((void *)(o->f14c), v1);
        destroy_context_8c0b9ce8((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
