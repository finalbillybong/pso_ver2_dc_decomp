typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_254 S_g8c467180_2c_254;
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
    int f68;
    int f6c;
    int f70;
    int f74;
    int f78;
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
    char unknown0[0x254];
    S_g8c467180_2c_254 *f254;
};
extern void initialize_base_8c0db1d0(void *, int);
extern void call_8c0dc854(Object *);
extern int call_8c011ecc(int);
extern void call_8c199b20(int, void *);
extern void call_8c21cd98(Object *, int, int);
Object *operation_8c21cbc0(Object *o, Arg1 *a1, int a2, int a3)
{
    Object **home = &o;
    int t1;
    (void)home;
    initialize_base_8c0db1d0((void *)o, (int)(void *)0x8c33665c);
    o->dispatch = (void *)0x8c2785f0;
    o->tag = *(int *)0x8c3364e0;
    o->size = 0x7c;
    o->f38 = a1->f00;
    o->f3c = a1->f04;
    call_8c0dc854(o);
    t1 = call_8c011ecc(0x24);
    if (t1 != 0) {
        call_8c199b20(t1, (*(S_g8c467180 **)0x8c467180)->f2c->f254);
    }
    o->f68 = t1;
    o->f6c = 0;
    o->f70 = 0;
    o->f74 = a2;
    o->f78 = a3;
    call_8c21cd98(o, a2, a3);
    return o;
}
