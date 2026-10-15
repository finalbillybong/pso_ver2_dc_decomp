typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c41c614 S_g8c41c614;
typedef struct S_g8c41c61c S_g8c41c61c;
typedef struct S_g8c41c620 S_g8c41c620;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_90 S_g8c467180_90;
typedef struct S_g8c467180_90_18 S_g8c467180_90_18;
struct Frame {
    Block8 f00;
    Block8 f08;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0x18];
    S_g8c467180_90_18 *f18;
};
struct S_g8c418a00 {
    char unknown0[0xb130];
    void *fb130;
};
extern Block8 g_8c2e2f54;
extern Block8 g_8c2e2f5c;
extern S_g8c418a00 *g_8c418a00;
extern int g_8c41bce4;
extern S_g8c41c614 *g_8c41c614;
extern S_g8c41c61c *g_8c41c61c;
extern S_g8c41c620 *g_8c41c620;
extern S_g8c467180 *g_8c467180;
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c0dc610(void *, float);
extern void operation_8c119764(int, int, int);
extern void request_resource_release(void *);
extern void call_8c02f888(S_g8c418a00 *);
void operation_8c017454(void)
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
    operation_8c119764((int)g_8c41c614, (int)(g_8c467180->f90->f18), 1);
    request_resource_release(g_8c41c61c);
    g_8c41c61c = (S_g8c41c61c *)0;
    request_resource_release(g_8c41c620);
    g_8c41c620 = (S_g8c41c620 *)0;
    g_8c418a00->fb130 = (void *)0x8c019480;
    call_8c02f888(g_8c418a00);
    g_8c41bce4 = 8;
}
