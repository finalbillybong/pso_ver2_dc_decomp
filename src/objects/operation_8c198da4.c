typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8_s7e4 S_c8c021ef8_s7e4;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_2c S_g8c467180_2c;
typedef struct S_g8c467180_2c_208 S_g8c467180_2c_208;
typedef struct Object Object;
typedef struct S_vv5 S_vv5;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x60];
    char f80;
    char f81;
    char f82;
    char f83;
    void *f84;
    int f88;
    int f8c;
};
struct S_c8c021ef8_s7e4 {
    char unknown0[0x34];
    int f34;
};
struct S_vv5 {
    unsigned short f00;
};
struct S_g8c467180 {
    char unknown0[0x2c];
    S_g8c467180_2c *f2c;
};
struct S_g8c467180_2c {
    char unknown0[0x208];
    S_g8c467180_2c_208 *f208;
};
struct Frame {
    float f04;
    float f08;
};
extern void initialize_grid_view(void *, void *);
extern int lookup_low_id(int);
extern int call_8c011ecc(int);
extern void operation_8c199b20(int, int);
extern void call_8c199b8c(int, void *);
Object *operation_8c198da4(Object *o)
{
    Frame frame;
    Object **home = &o;
    int v4;
    S_vv5 *v5;
    int t1;
    int t2;
    int t3;
    (void)home;
    initialize_grid_view((void *)o, (void *)((void *)0x8c31ca98));
    o->dispatch = (void *)0x8c272974;
    o->tag = (int)(*(int *)0x8c31ca10);
    o->size = 0x90;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 == 0) {
        return o;
    }
    if ((t1 + 0x7e4) == 0) {
        return o;
    }
    if (((((S_c8c021ef8_s7e4 *)((char *)t1 + 0x7e4))->f34 & 0x10)) != 0) {
        o->f84 = (void *)0x8c2879a0;
    } else {
        o->f84 = (void *)0x8c287900;
    }
    o->f83 = 0;
    o->f80 = 0;
    o->f81 = 0;
    v4 = (int)o->f84;
    o->f82 = 0;
    v5 = (S_vv5 *)v4;
    while (v5->f00 != 8) {
        o->f82 += 1;
        v5 = (S_vv5 *)((char *)v5 + 12);
    }
    t2 = call_8c011ecc(0x24);
    if (t2 != 0) {
        operation_8c199b20(t2, (int)((*(S_g8c467180 **)0x8c467180)->f2c->f208));
    }
    o->f88 = (int)(t2);
    (&frame)->f04 = 196.0f;
    (&frame)->f08 = (float)o->f82 * 51.0f + 18.0f;
    t3 = call_8c011ecc(8);
    if (t3 != 0) {
        call_8c199b8c(t3, (void *)(&(&frame)->f04));
    }
    o->f8c = (int)(t3);
    return o;
}
