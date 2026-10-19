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
typedef struct S_g8c467180_90_0 S_g8c467180_90_0;
typedef struct S_g8c467180_90_4 S_g8c467180_90_4;
typedef struct S_vv9 S_vv9;
struct S_vv9 {
    char unknown0[0x4];
    short f04;
};
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
    S_g8c467180_90_0 *f00;
    S_g8c467180_90_4 *f04;
};
extern Block8 g_8c2e2f54;
extern Block8 g_8c2e2f5c;
extern int g_8c41bce4;
extern S_g8c41c60c *g_8c41c60c;
extern S_g8c41c614 *g_8c41c614;
extern void *g_8c41c8d8;
extern char g_8c41c8dc;
extern void *g_8c41c8e0;
extern char g_8c41c8e4;
extern S_g8c467180 *g_8c467180;
extern char g_8c2e3014[];
extern int call_8c12b114(int, void *, int);
extern int operation_8c19fb18(int);
extern void operation_8c1cd638(void *, int, int);
extern void operation_8c1cdc30(void *);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c0dc610(void *, float);
extern void operation_8c119764(int, int, int);
extern void call_8c12b880(void *, int, int);
extern void call_8c12b154(void *, int, int);
void operation_8c019480(int a0, int a1, int a2)
{
    Frame frame;
    S_vv9 *v9;
    int v8;
    int t1;
    int v12;
    int t2;
    int t3;
    int t4;
    int t5;
    if (g_8c41c8dc == 0) {
        g_8c41c8d8 = (g_8c2e3014 + 0xb2);
        g_8c41c8dc = 1;
    }
    if (g_8c41c8e4 == 0) {
        g_8c41c8e0 = (g_8c2e3014 + 0xbe);
        g_8c41c8e4 = 1;
    }
    t1 = call_8c12b114((int)(a1 + 0xa), (void *)((g_8c2e3014 + 0xcb)), 5);
    if (t1 == 0) {
        v8 = (int)g_8c41c8e0;
    } else {
        v8 = (int)g_8c41c8d8;
    }
    if (g_8c41c60c != 0) {
        v9 = (S_vv9 *)g_8c41c60c;
        v9->f04 |= 1;
        g_8c41c60c = (S_g8c41c60c *)0;
    }
    t2 = operation_8c19fb18(v8);
    g_8c41c60c = (S_g8c41c60c *)(int)(t2);
    v12 = (int)0;
    while (a0 > v12) {
        operation_8c1cd638(g_8c41c60c, (int)(a1 + v12 * 0x1c + 0xa), v12);
        v12 = (int)(v12 + 1);
    }
    operation_8c1cdc30(g_8c41c60c);
    if (t1 == 0) {
        if (g_8c41c614 == 0) {
            *(Block8 *)&(&frame)->f10 = *(Block8 *)&g_8c2e2f54;
            *(Block8 *)&(&frame)->f18 = *(Block8 *)&g_8c2e2f5c;
            t3 = create_fitted_pair_grid_view((void *)(&(&frame)->f10), (void *)(&(&frame)->f18));
            g_8c41c614 = (S_g8c41c614 *)(int)(t3);
            operation_8c0dc610((void *)t3, -19999.0f);
        }
        operation_8c119764((int)g_8c41c614, (int)(g_8c467180->f90->f04), 1);
        g_8c41bce4 = 1;
    } else {
        if (g_8c41c614 == 0) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2f54;
            *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2f5c;
            t4 = create_fitted_pair_grid_view((void *)(&frame), (void *)(&(&frame)->f08));
            g_8c41c614 = (S_g8c41c614 *)(int)(t4);
            operation_8c0dc610((void *)t4, -19999.0f);
        }
        operation_8c119764((int)g_8c41c614, (int)(g_8c467180->f90->f00), 1);
        g_8c41bce4 = 1;
    }
    t5 = call_8c12b114((int)(a2 + 0xa), (void *)((g_8c2e3014 + 0xcb)), 5);
    if (t5 != 0) {
        call_8c12b880((void *)((void *)0x8c41c634), 0, 0x11);
        call_8c12b154((void *)((void *)0x8c41c634), (int)(a2 + 0xa), 0x10);
    }
}
