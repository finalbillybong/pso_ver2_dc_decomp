typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_20c S_g8c467180_2c_20c;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x48];
    char f68;
    char f69;
    char f6a;
    char f6b;
    int f6c;
    int f70;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x20c];
    S_g8c467180_2c_20c *f20c;
};
extern void initialize_base_8c0db1d0(void *, int);
extern int call_8c011ecc(int);
extern void operation_8c199b20(int, int);
extern void call_8c1979e8(Object *);
Object *operation_8c197420(Object *o)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c31c60c));
    o->dispatch = (void *)0x8c2728bc;
    o->tag = (int)(*(int *)0x8c31c378);
    o->size = 0x74;
    t1 = call_8c011ecc(0x24);
    if (t1 != 0) {
        operation_8c199b20(t1, (int)((*(S_g8c467180 **)0x8c467180)->f2c->f20c));
    }
    o->f70 = (int)(t1);
    o->f68 = 0;
    o->f69 = 0;
    o->f6a = 0;
    o->f6b = 0;
    o->f6c = 0x9b80;
    call_8c1979e8(o);
    return o;
}
