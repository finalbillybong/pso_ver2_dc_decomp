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
struct Frame {
    Block8 f00;
    Block8 f08;
};
extern Block8 g_8c2e2fd4;
extern Block8 g_8c2e2fdc;
extern int g_8c41bce4;
extern S_g8c41c618 *g_8c41c618;
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
void operation_8c019410(int a0)
{
    Frame frame;
    int t1;
    if (g_8c41c618 == 0) {
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2fd4;
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2fdc;
        t1 = create_fitted_pair_grid_view((void *)(&(&frame)->f08), (void *)(&frame));
        g_8c41c618 = (S_g8c41c618 *)(int)(t1);
    }
    operation_8c119764((int)g_8c41c618, a0, 3);
    g_8c41bce4 = 0x16;
}
