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
struct Frame {
    Block8 f00;
    Block8 f08;
};
extern Block8 g_8c2e2fc4;
extern Block8 g_8c2e2fcc;
extern S_g8c41c608 *g_8c41c608;
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
void operation_8c0193b4(int a0)
{
    Frame frame;
    int t1;
    if (g_8c41c608 == 0) {
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2fc4;
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2fcc;
        t1 = create_fitted_pair_grid_view((void *)(&(&frame)->f08), (void *)(&frame));
        g_8c41c608 = (S_g8c41c608 *)(int)(t1);
    }
    operation_8c119764((int)g_8c41c608, a0, 3);
}
