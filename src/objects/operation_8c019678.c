typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c41c60c S_g8c41c60c;
typedef struct S_g8c41c614 S_g8c41c614;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_90 S_g8c467180_90;
typedef struct S_g8c467180_90_8 S_g8c467180_90_8;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
struct Frame {
    Block8 f00;
    Block8 f08;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0x8];
    S_g8c467180_90_8 *f08;
};
extern Block8 g_8c2e2f54;
extern Block8 g_8c2e2f5c;
extern int g_8c41bce4;
extern S_g8c41c60c *g_8c41c60c;
extern S_g8c41c614 *g_8c41c614;
extern S_g8c467180 *g_8c467180;
extern char g_8c2e3014[];
extern int operation_8c19fb18(int);
extern void operation_8c1cd638(void *, int, int);
extern void operation_8c1cdc30(void *);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c0dc610(void *, float);
extern void operation_8c119764(int, int, int);
void operation_8c019678(int a0, int a1)
{
    Frame frame;
    S_vv1 *v1;
    int v5;
    int t1;
    int t2;
    int name = (int)(g_8c2e3014 + 0xd1);
    if (g_8c41c60c != 0) {
        v1 = (S_vv1 *)g_8c41c60c;
        v1->f04 |= 1;
        g_8c41c60c = (S_g8c41c60c *)0;
    }
    t1 = operation_8c19fb18(name);
    g_8c41c60c = (S_g8c41c60c *)(int)(t1);
    v5 = (int)0;
    while (a0 > v5) {
        operation_8c1cd638(g_8c41c60c, (int)(a1 + v5 * 0x1c + 0xa), v5);
        v5 = (int)(v5 + 1);
    }
    operation_8c1cdc30(g_8c41c60c);
    if (g_8c41c614 == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2f54;
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2f5c;
        t2 = create_fitted_pair_grid_view((void *)(&frame), (void *)(&(&frame)->f08));
        g_8c41c614 = (S_g8c41c614 *)(int)(t2);
        operation_8c0dc610((void *)t2, -19999.0f);
    }
    operation_8c119764((int)g_8c41c614, (int)(g_8c467180->f90->f08), 1);
    g_8c41bce4 = 0x15;
}
