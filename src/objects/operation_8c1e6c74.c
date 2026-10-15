typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_60 S_g8c467180_60;
typedef struct S_g8c467180_60_0 S_g8c467180_60_0;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x2c];
    Arg0_2c *f2c;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    Block8 f00;
    Block8 f08;
};
struct S_g8c467180 {
    char unknown0[0x60];
    S_g8c467180_60 *f60;
};
struct S_g8c467180_60 {
    S_g8c467180_60_0 *f00;
};
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
void operation_8c1e6c74(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int t1;
    if (o->f2c != 0) {
        v1 = (S_vv1 *)o->f2c;
        v1->f04 |= 1;
        o->f2c = (Arg0_2c *)0;
    }
    *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c32c12c;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c32c134;
    t1 = create_fitted_pair_grid_view((void *)(&(&frame)->f08), (void *)(&frame));
    o->f2c = (Arg0_2c *)t1;
    if (o->f2c != 0) {
        operation_8c119764((int)(o->f2c), (int)((*(S_g8c467180 **)0x8c467180)->f60->f00), 1);
    }
}
