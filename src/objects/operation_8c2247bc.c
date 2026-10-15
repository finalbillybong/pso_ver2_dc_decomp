typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
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
    char unknown40[0x40];
    char f80;
    char unknown81[0x1];
    char f82;
    char f83;
    char unknown84[0x2];
    short f86;
    char unknown88[0x4];
    int f8c;
    int f90;
    char unknown94[0x4];
    int f98;
    int f9c;
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
struct Frame {
    float f04;
    float f08;
};
extern void initialize_grid_view(void *, void *);
extern void call_8c0dc854(Object *);
extern int call_8c011ecc(int);
extern void operation_8c199b20(int, int);
extern void call_8c199b8c(int, void *);
Object *operation_8c2247bc(Object *o, Arg1 *a1, int a2, int a3)
{
    Frame frame;
    Object **home = &o;
    int t1;
    int t2;
    (void)home;
    initialize_grid_view((void *)o, (void *)((void *)0x8c33757c));
    o->dispatch = (void *)0x8c278aec;
    o->tag = (int)(*(int *)0x8c337510);
    o->size = 0xa0;
    o->f38 = a1->f00;
    o->f3c = a1->f04;
    call_8c0dc854(o);
    o->f80 = 0;
    o->f82 = 0;
    o->f83 = 0;
    o->f86 = 0;
    o->f8c = a2;
    o->f90 = a3;
    t1 = call_8c011ecc(0x24);
    if (t1 != 0) {
        operation_8c199b20(t1, (int)((*(S_g8c467180 **)0x8c467180)->f2c->f24c));
    }
    o->f98 = (int)(t1);
    (&frame)->f04 = 0.0f;
    (&frame)->f08 = 0.0f;
    t2 = call_8c011ecc(8);
    if (t2 != 0) {
        call_8c199b8c(t2, (void *)(&(&frame)->f04));
    }
    o->f9c = (int)(t2);
    return o;
}
