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
};
extern void initialize_base_8c0db1d0(void *, int);
extern int call_8c011ecc(int);
extern void operation_192b14(void *, signed char, signed char);
extern void call_8c24e1f4(Object *);
Object *operation_8c24e084(Object *o)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c33f418));
    o->dispatch = (void *)0x8c27e47c;
    o->tag = (int)(*(int *)0x8c33f008);
    o->size = 0x6c;
    t1 = call_8c011ecc(8);
    if (t1 != 0) {
        operation_192b14((void *)t1, (signed char)0, (signed char)2);
    }
    o->f68 = (int)(t1);
    call_8c24e1f4(o);
    return o;
}
