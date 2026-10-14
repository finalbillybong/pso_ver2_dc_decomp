typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x48];
    int f68;
    char unknown6c[0x28];
    float f94;
    float f98;
    int f9c;
    int fa0;
    int fa4;
    int fa8;
    int fac;
};
extern void call_8c01d1ec(Object *);
extern void call_8c1c11a8(Object *);
Object *operation_8c1c108c(Object *o, int a1, int a2, int a3, float f0)
{
    Object **home = &o;
    (void)home;
    call_8c01d1ec(o);
    o->dispatch = (void *)0x8c2758dc;
    o->tag = (int)(*(int *)0x8c3288ec);
    o->size = 0xb0;
    o->f94 = 0.0f;
    o->f9c = a2;
    o->fa0 = a3;
    o->f98 = f0;
    o->fa4 = 0;
    o->fa8 = 0;
    o->fac = 0;
    call_8c1c11a8(o);
    o->f68 = 0;
    return o;
}
