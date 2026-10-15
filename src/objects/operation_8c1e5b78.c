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
typedef struct S_g8c467180_50 S_g8c467180_50;
typedef struct S_g8c467180_50_14 S_g8c467180_50_14;
typedef struct S_g8c467180_50_18 S_g8c467180_50_18;
struct Frame {
    Block8 f00;
    Block8 f08;
};
struct S_g8c467180 {
    char unknown0[0x50];
    S_g8c467180_50 *f50;
};
struct S_g8c467180_50 {
    char unknown0[0x14];
    S_g8c467180_50_14 *f14;
    S_g8c467180_50_18 *f18;
};
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
int operation_8c1e5b78(void)
{
    Frame frame;
    int t1;
    *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c32bb70;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c32bb78;
    t1 = create_fitted_pair_grid_view((void *)(&(&frame)->f08), (void *)(&frame));
    if (*(int *)0x8c461c00 != 0) {
        operation_8c119764(t1, (int)((*(S_g8c467180 **)0x8c467180)->f50->f14), 1);
    } else {
        operation_8c119764(t1, (int)((*(S_g8c467180 **)0x8c467180)->f50->f18), 1);
    }
    return (int)(t1);
}
