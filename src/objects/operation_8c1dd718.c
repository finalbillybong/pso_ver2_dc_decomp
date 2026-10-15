typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c44be88 S_g8c44be88;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_54 S_g8c467180_54;
typedef struct S_g8c467180_54_8 S_g8c467180_54_8;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_50 Arg0_50;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x4];
    int f20;
    int f24;
    int f28;
    unsigned char f2c;
    char unknown2d[0x3];
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    Arg0_50 *f50;
};
struct Frame {
    Block8 f04;
    Block8 f0c;
};
struct S_g8c467180 {
    char unknown0[0x54];
    S_g8c467180_54 *f54;
};
struct S_g8c467180_54 {
    char unknown0[0x8];
    S_g8c467180_54_8 *f08;
};
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c198294(int, Object *);
extern void call_8c199688(int, Object *, int);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
extern void call_8c05fbf8(int, int, int, int);
Object *operation_8c1dd718(Object *o)
{
    Frame frame;
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)(*(S_g8c44be88 **)0x8c44be88));
    o->dispatch = (void *)0x8c277370;
    o->f24 = 0;
    o->f28 = 0;
    o->f2c = 0xff;
    o->f20 = 0;
    o->f30 = 192.0f;
    o->f34 = 376.0f;
    o->f38 = 448.0f;
    o->f3c = 404.0f;
    o->f40 = 0.0f;
    o->f44 = 0.765625f;
    o->f48 = 1.0f;
    o->f4c = 0.875f;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x40);
    if (t1 != 0) {
        call_8c198294(t1, o);
    }
    if (*(int *)0x8c4e3044 == 0) {
        t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xac);
        if (t2 != 0) {
            call_8c199688(t2, o, 1);
        }
    }
    *(Block8 *)&(&frame)->f0c = *(Block8 *)&*(Block8 *)0x8c32af68;
    *(Block8 *)&(&frame)->f04 = *(Block8 *)&*(Block8 *)0x8c32af70;
    t3 = create_fitted_pair_grid_view((void *)(&(&frame)->f0c), (void *)(&(&frame)->f04));
    o->f50 = (Arg0_50 *)t3;
    operation_8c119764((int)(o->f50), (int)((*(S_g8c467180 **)0x8c467180)->f54->f08), 1);
    call_8c05fbf8(0x50006, 0, 0, 0);
    return o;
}
