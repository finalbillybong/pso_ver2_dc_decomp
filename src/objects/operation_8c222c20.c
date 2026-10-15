typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_22c4 Arg0_22c4;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x228c];
    int f22b4;
    char unknown22b8[0x4];
    int f22bc;
    char unknown22c0[0x4];
    Arg0_22c4 *f22c4;
};
struct Frame {
    Block8 f00;
    Block8 f08;
    Block8 f10;
};
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
extern void operation_8c0dc610(void *, float);
extern int operation_8c156c6c(int);
extern void call_8c220c40(int, int);
void operation_8c222c20(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    if (o->f22c4 == 0) {
        *(Block8 *)&(&frame)->f10 = *(Block8 *)&*(Block8 *)0x8c33748c;
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c337494;
        t1 = create_fitted_pair_grid_view((void *)(&(&frame)->f10), (void *)(&(&frame)->f08));
        o->f22c4 = (Arg0_22c4 *)t1;
        operation_8c119764((int)(o->f22c4), (int)(*(int *)0x8c506060 + 0xb4), 1);
        operation_8c0dc610((void *)(o->f22c4), -13000.0f);
    }
    if (o->f22c4 != 0) {
        if (o->f22b4 != 0xa) {
            o->f24 = (int)(o->f22b4);
            return;
        }
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c33749c;
        t2 = operation_8c156c6c((int)(&frame));
        o->f22bc = (int)(t2);
        call_8c220c40(5, 1);
        o->f24 = (int)(o->f22b4);
    }
}
