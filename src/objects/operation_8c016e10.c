typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c41c614 S_g8c41c614;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_90 S_g8c467180_90;
typedef struct S_g8c467180_90_84 S_g8c467180_90_84;
struct Frame {
    Block8 f00;
    Block8 f08;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0x84];
    S_g8c467180_90_84 *f84;
};
extern Block8 g_8c2e2f54;
extern Block8 g_8c2e2f5c;
extern int g_8c41bce4;
extern int g_8c41bd04;
extern int g_8c41bd10;
extern S_g8c41c614 *g_8c41c614;
extern S_g8c467180 *g_8c467180;
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c0dc610(void *, float);
extern void operation_8c119764(int, int, int);
extern void operation_8c01787c(void);
void operation_8c016e10(void)
{
    Frame frame;
    int t1;
    if (g_8c41c614 == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2f54;
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2f5c;
        t1 = create_fitted_pair_grid_view((void *)(&frame), (void *)(&(&frame)->f08));
        g_8c41c614 = (S_g8c41c614 *)(int)(t1);
        operation_8c0dc610((void *)t1, -19999.0f);
    }
    operation_8c119764((int)g_8c41c614, (int)(g_8c467180->f90->f84), 1);
    operation_8c01787c();
    g_8c41bd04 = 0;
    g_8c41bce4 = 0xc;
    g_8c41bd10 = 1;
}
