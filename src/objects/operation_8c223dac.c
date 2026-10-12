typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_250 S_g8c467180_2c_250;
typedef struct S_g8c5059a0 S_g8c5059a0;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x14];
    int f34;
    char unknown38[0x38];
    char f70;
    char unknown71[0x1];
    short f72;
    short f74;
    short f76;
    int f78;
    char unknown7c[0x8];
    int f84;
    int f88;
    char unknown8c[0x4];
    int f90;
    float f94;
    float f98;
    float f9c;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x250];
    S_g8c467180_2c_250 *f250;
};
extern void call_8c1a62a8(int, int, void *);
extern void call_8c0dc610(Object *, float);
extern int call_8c011ecc(int);
extern void call_8c199b20(int, void *);
extern void call_8c1a6460(Object *, void *);
Object *operation_8c223dac(Object *o, int a1, int a2, int a3, int a4)
{
    Object **home = &o;
    int t1;
    (void)home;
    call_8c1a62a8((int)o, a1, (void *)0x8c2e19a0);
    o->dispatch = (void *)0x8c278acc;
    o->tag = *(int *)0x8c3374e8;
    o->size = 0xa0;
    call_8c0dc610(o, 30.0f);
    o->f70 = 0;
    o->f72 = 0;
    o->f74 = 0;
    o->f76 = a2;
    o->f78 = 0;
    o->f84 = a3;
    o->f88 = a4;
    t1 = call_8c011ecc(0x24);
    if (t1 != 0) {
        call_8c199b20(t1, (*(S_g8c467180 **)0x8c467180)->f2c->f250);
    }
    o->f90 = t1;
    o->f94 = 22.5f;
    o->f98 = 46.0f;
    o->f9c = 1.0f;
    o->f34 |= 0x40;
    call_8c1a6460(o, *(S_g8c5059a0 **)0x8c5059a0);
    return o;
}
