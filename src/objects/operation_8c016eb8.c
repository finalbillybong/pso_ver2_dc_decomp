typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c41c618 S_g8c41c618;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_90 S_g8c467180_90;
typedef struct S_g8c467180_90_0 S_g8c467180_90_0;
struct Frame {
    Block8 f00;
    Block8 f08;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
extern Block8 g_8c2e2f74;
extern Block8 g_8c2e2f7c;
extern int g_8c41bce4;
extern int g_8c41bd04;
extern int g_8c41bd10;
extern S_g8c41c618 *g_8c41c618;
extern S_g8c467180 *g_8c467180;
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
extern void operation_8c01787c(void);
void operation_8c016eb8(int a0)
{
    Frame frame;
    int t1;
    if (g_8c41c618 == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2f74;
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2f7c;
        t1 = create_fitted_pair_grid_view((void *)(&frame), (void *)(&(&frame)->f08));
        g_8c41c618 = (S_g8c41c618 *)(int)(t1);
    }
    operation_8c119764((int)g_8c41c618, (int)(*(S_g8c467180_90_0 **)((char *)((char *)g_8c467180->f90 + 0x0) + (a0 << 2))), 1);
    operation_8c01787c();
    g_8c41bd04 = 0;
    g_8c41bce4 = 0xc;
    g_8c41bd10 = 1;
}
