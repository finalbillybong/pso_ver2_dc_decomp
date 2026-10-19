typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c41c618 S_g8c41c618;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_90 S_g8c467180_90;
typedef struct S_g8c467180_90_34 S_g8c467180_90_34;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_vv5 S_vv5;
struct Frame {
    Block8 f00;
    Block8 f08;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0x34];
    S_g8c467180_90_34 *f34;
};
struct S_vv5 {
    char unknown0[0x20];
    short f20;
};
extern Block8 g_8c2e2f74;
extern Block8 g_8c2e2f7c;
extern S_g8c418248 *g_8c418248;
extern S_g8c418a00 *g_8c418a00;
extern int g_8c41bce4;
extern int g_8c41bd04;
extern int g_8c41bd10;
extern S_g8c41c618 *g_8c41c618;
extern S_g8c467180 *g_8c467180;
extern S_g8c46fe20 *g_8c46fe20;
extern char g_8c2e3014[];
extern void operation_8c011efc(void *);
extern int operation_8c01ba48(void);
extern void call_8c02e7a8(void *, int);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
extern int lookup_low_id(int);
extern void operation_8c0246d0(void *);
extern void operation_8c017d7c(void);
void operation_8c0186b8(int a0)
{
    Frame frame;
    S_vv5 *v5;
    int t1;
    int t2;
    int t3;
    if (a0 != 0) {
        operation_8c011efc((void *)((g_8c2e3014 + 0x82)));
        t1 = operation_8c01ba48();
        call_8c02e7a8(g_8c418a00, t1);
        return;
    }
    operation_8c011efc((void *)((g_8c2e3014 + 0x8c)));
    if (g_8c41c618 == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2f74;
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2f7c;
        t2 = create_fitted_pair_grid_view((void *)(&frame), (void *)(&(&frame)->f08));
        g_8c41c618 = (S_g8c41c618 *)(int)(t2);
    }
    operation_8c119764((int)g_8c41c618, (int)(g_8c467180->f90->f34), 1);
    t3 = lookup_low_id((int)g_8c418248);
    if (t3 != 0) {
        operation_8c0246d0((void *)t3);
    }
    v5 = (S_vv5 *)g_8c46fe20;
    if (v5 != 0) {
        v5->f20 |= 1;
        operation_8c017d7c();
    }
    g_8c41bd04 = 0;
    g_8c41bce4 = 0xc;
    g_8c41bd10 = 1;
}
