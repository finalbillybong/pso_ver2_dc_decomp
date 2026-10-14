typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_24c S_g8c467180_2c_24c;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x18];
    float f38;
    float f3c;
    char unknown40[0x28];
    char f68;
    char f69;
    char f6a;
    char unknown6b[0x1];
    int f6c;
    int f70;
};
struct Arg1 {
    float f00;
    float f04;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x24c];
    S_g8c467180_2c_24c *f24c;
};
extern void initialize_base_8c0db1d0(void *, int);
extern void call_8c0dc854(Object *);
extern int call_8c011ecc(int);
extern void operation_8c199b20(int, int);
Object *operation_8c21ff00(Object *o, Arg1 *a1, int a2)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c336acc));
    o->dispatch = (void *)0x8c278840;
    o->tag = (int)(*(int *)0x8c336a00);
    o->size = 0x74;
    o->f38 = a1->f00;
    o->f3c = a1->f04;
    call_8c0dc854(o);
    o->f68 = 0;
    o->f69 = 0;
    o->f6a = 0;
    o->f6c = a2;
    t1 = call_8c011ecc(0x24);
    if (t1 != 0) {
        operation_8c199b20(t1, (int)((*(S_g8c467180 **)0x8c467180)->f2c->f24c));
    }
    o->f70 = (int)(t1);
    return o;
}
