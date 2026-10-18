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
typedef struct S_g8c41c61c S_g8c41c61c;
typedef struct S_g8c41c620 S_g8c41c620;
typedef struct S_g8c41c624 S_g8c41c624;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_90 S_g8c467180_90;
typedef struct S_g8c467180_90_44 S_g8c467180_90_44;
typedef struct S_g8c467180_90_48 S_g8c467180_90_48;
typedef struct S_vv36 S_vv36;
struct Frame {
    Block8 f00;
    Block8 f08;
    Block8 f10;
    Block8 f18;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0x44];
    S_g8c467180_90_44 *f44;
    S_g8c467180_90_48 *f48;
};
struct S_vv36 {
    char unknown0[0x80];
    unsigned short f80;
};
extern Block8 g_8c2e2f54;
extern Block8 g_8c2e2f5c;
extern S_g8c41c614 *g_8c41c614;
extern S_g8c41c61c *g_8c41c61c;
extern S_g8c41c620 *g_8c41c620;
extern S_g8c41c624 *g_8c41c624;
extern int g_8c41c7c8;
extern char g_8c41c7cc;
extern S_g8c467180 *g_8c467180;
extern int operation_8c1571f4(void *);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c0dc610(void *, float);
extern void operation_8c119764(int, int, int);
extern void request_resource_release(void *);
extern void operation_8c017218(int);
extern void operation_8c016950(void);
void operation_8c01640c(void)
{
    Frame frame;
    int v4;
    S_vv36 *v36;
    int t1;
    int t2;
    int t3;
    if (g_8c41c7cc == 0) {
        g_8c41c7c8 = 0;
        g_8c41c7cc = 1;
    }
    if (g_8c41c624 == 0) {
        return;
    }
    t1 = operation_8c1571f4(g_8c41c624);
    v4 = (int)g_8c41c7c8;
    if (v4 != t1) {
        g_8c41c7c8 = (int)(t1);
        switch (t1) {
        case 0:
            if (g_8c41c614 == 0) {
                *(Block8 *)&(&frame)->f10 = *(Block8 *)&g_8c2e2f54;
                *(Block8 *)&(&frame)->f18 = *(Block8 *)&g_8c2e2f5c;
                t2 = create_fitted_pair_grid_view((void *)(&(&frame)->f10), (void *)(&(&frame)->f18));
                g_8c41c614 = (S_g8c41c614 *)(int)(t2);
                operation_8c0dc610((void *)t2, -19999.0f);
            }
            operation_8c119764((int)g_8c41c614, (int)(g_8c467180->f90->f44), 1);
            break;
        case 1:
            if (g_8c41c614 == 0) {
                *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2f54;
                *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2f5c;
                t3 = create_fitted_pair_grid_view((void *)(&frame), (void *)(&(&frame)->f08));
                g_8c41c614 = (S_g8c41c614 *)(int)(t3);
                operation_8c0dc610((void *)t3, -19999.0f);
            }
            operation_8c119764((int)g_8c41c614, (int)(g_8c467180->f90->f48), 1);
        }
    }
    v36 = (S_vv36 *)g_8c41c624;
    if (((v36->f80 & 0xffff & 2)) != 0) {
        request_resource_release((void *)v36);
        g_8c41c624 = (S_g8c41c624 *)0;
        if (g_8c41c614 != 0) {
            request_resource_release(g_8c41c614);
            g_8c41c614 = (S_g8c41c614 *)0;
        }
        if (g_8c41c61c != 0) {
            request_resource_release(g_8c41c61c);
            g_8c41c61c = (S_g8c41c61c *)0;
        }
        if (g_8c41c620 != 0) {
            request_resource_release(g_8c41c620);
            g_8c41c620 = (S_g8c41c620 *)0;
        }
        switch (t1) {
        case 0:
            operation_8c017218(0);
            break;
        case 1:
            operation_8c017218(1);
            break;
        }
        return;
    }
    if (((v36->f80 & 0xffff & 4)) != 0) {
        operation_8c016950();
    }
}
