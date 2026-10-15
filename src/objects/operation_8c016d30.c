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
typedef struct S_g8c467180_90_1c S_g8c467180_90_1c;
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0x1c];
    S_g8c467180_90_1c *f1c;
};
struct Frame {
    Block8 f00;
    Block8 f08;
};
extern Block8 g_8c2e2f64;
extern Block8 g_8c2e2f6c;
extern int g_8c41bce0;
extern int g_8c41bce4;
extern int g_8c41bd04;
extern int g_8c41bd10;
extern S_g8c41c614 *g_8c41c614;
extern int g_8c41c728;
extern S_g8c467180 *g_8c467180;
extern void call_8c12b048(void *, void *, ...);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c0dc610(void *, float);
extern void operation_8c119764(int, int, int);
extern void operation_8c01787c(void);
void operation_8c016d30(void)
{
    Frame frame;
    int t1;
    if (g_8c41c728 == 0) {
        call_8c12b048((void *)((void *)0x8c41c7cd), (void *)(g_8c467180->f90->f1c), (void *)((void *)0x8c41bd14));
        if (g_8c41c614 == 0) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2f64;
            *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2f6c;
            t1 = create_fitted_pair_grid_view((void *)(&frame), (void *)(&(&frame)->f08));
            g_8c41c614 = (S_g8c41c614 *)(int)(t1);
            operation_8c0dc610((void *)t1, -19999.0f);
        }
        operation_8c119764((int)g_8c41c614, (int)((void *)0x8c41c7cd), 1);
        operation_8c01787c();
        g_8c41bd04 = 0;
        g_8c41bce4 = 0xc;
    } else {
        g_8c41bce0 = 5;
        g_8c41bce4 = 0x17;
    }
    g_8c41bd10 = 1;
}
