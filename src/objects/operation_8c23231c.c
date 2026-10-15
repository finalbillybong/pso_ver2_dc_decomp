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
typedef struct S_g8c467180_6c S_g8c467180_6c;
typedef struct S_g8c467180_6c_0 S_g8c467180_6c_0;
typedef struct Object Object;
struct Frame {
    Block8 f00;
    Block8 f08;
};
struct Object {
    char unknown0[0x30];
    int f30;
};
struct S_g8c467180 {
    char unknown0[0x6c];
    S_g8c467180_6c *f6c;
};
struct S_g8c467180_6c {
    S_g8c467180_6c_0 *f00;
};
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
extern void operation_8c2323a0(int);
int operation_8c23231c(Object *o)
{
    Frame frame;
    int t1;
    *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c338c28;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c338c30;
    t1 = create_fitted_pair_grid_view((void *)(&(&frame)->f08), (void *)(&frame));
    if (o->f30 != 0) {
        if (o->f30 == 1) {
            goto L_8c23236a;
        }
    } else {
        operation_8c119764(t1, (int)((*(S_g8c467180 **)0x8c467180)->f6c->f00), 1);
        goto L_8c23237c;
L_8c23236a:;
        operation_8c2323a0((int)o);
        operation_8c119764(t1, (int)(((char *)o + 0x34)), 1);
    }
L_8c23237c:;
    return (int)(t1);
}
