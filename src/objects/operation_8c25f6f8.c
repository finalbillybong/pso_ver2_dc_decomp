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
typedef struct S_g8c467180_84 S_g8c467180_84;
typedef struct S_g8c467180_84_0 S_g8c467180_84_0;
struct Frame {
    Block8 f00;
    Block8 f08;
};
struct S_g8c467180 {
    char unknown0[0x84];
    S_g8c467180_84 *f84;
};
struct S_g8c467180_84 {
    S_g8c467180_84_0 *f00;
};
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
int operation_8c25f6f8(void)
{
    Frame frame;
    int t1;
    *(Block8 *)&(&frame)->f08 = *(Block8 *)&*(Block8 *)0x8c340694;
    *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c34069c;
    t1 = create_fitted_pair_grid_view((void *)(&(&frame)->f08), (void *)(&frame));
    operation_8c119764(t1, (int)((*(S_g8c467180 **)0x8c467180)->f84->f00), 1);
    return (int)(t1);
}
