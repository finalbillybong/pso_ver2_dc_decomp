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
    char f68;
    char unknown69[0x3];
    int f6c;
    int f70;
    int f74;
    int f78;
    char unknown7c[0x28];
    int fa4;
    int fa8;
    Vector3 fac;
};
extern void initialize_base_8c0db1d0(void *, int);
extern int call_8c011ecc(int);
extern void operation_192b14(void *, signed char, signed char);
extern void call_8c1d5f4c(Object *);
Object *operation_8c1d5b24(Object *o)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c32a040));
    o->dispatch = (void *)0x8c276eb4;
    o->tag = (int)(*(int *)0x8c329a48);
    o->size = 0xb8;
    o->f68 = 0;
    t1 = call_8c011ecc(8);
    if (t1 != 0) {
        operation_192b14((void *)t1, (signed char)0, (signed char)3);
    }
    o->f6c = (int)(t1);
    o->f70 = 0;
    o->f74 = 0;
    o->f78 = 0;
    o->fa4 = -1;
    o->fa8 = -1;
    *(Vector3 *)&o->fac = *(Vector3 *)&*(Vector3 *)0x8c2875c0;
    call_8c1d5f4c(o);
    return o;
}
