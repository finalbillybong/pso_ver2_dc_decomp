typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c41c608 S_g8c41c608;
typedef struct S_g8c505960 S_g8c505960;
typedef struct S_g8c505960_s4 S_g8c505960_s4;
struct Frame {
    Block8 f00;
    Block8 f08;
};
struct S_g8c505960_s4 {
    char unknown0[0x24];
    int f24;
};
extern Block8 g_8c2e2fb4;
extern Block8 g_8c2e2fbc;
extern int g_8c41bce4;
extern S_g8c41c608 *g_8c41c608;
extern S_g8c505960 *g_8c505960;
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
void operation_8c01792c(int a0)
{
    Frame frame;
    int t1;
    if (g_8c41c608 == 0) {
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2fb4;
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2fbc;
        t1 = create_fitted_pair_grid_view((void *)(&(&frame)->f08), (void *)(&frame));
        g_8c41c608 = (S_g8c41c608 *)(int)(t1);
    }
    operation_8c119764((int)g_8c41c608, a0, 3);
    g_8c41bce4 = 0x14;
    if (g_8c505960 != 0) {
        ((S_g8c505960_s4 *)((char *)g_8c505960 + 0x4))->f24 = 0xb;
    }
}
