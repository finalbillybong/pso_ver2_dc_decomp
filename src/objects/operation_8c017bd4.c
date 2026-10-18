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
typedef struct S_g8c418258 S_g8c418258;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c41c614 S_g8c41c614;
typedef struct S_g8c467180 S_g8c467180;
typedef struct S_g8c467180_90 S_g8c467180_90;
typedef struct S_g8c467180_90_1c S_g8c467180_90_1c;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_vv5 S_vv5;
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
struct S_vv5 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c418a00 {
    char unknown0[0xa88];
    int fa88;
};
extern Block8 g_8c2e2f64;
extern Block8 g_8c2e2f6c;
extern S_g8c418248 *g_8c418248;
extern S_g8c418258 *g_8c418258;
extern S_g8c418a00 *g_8c418a00;
extern short g_8c41bcdc;
extern short g_8c41bcde;
extern int g_8c41bce0;
extern int g_8c41bce4;
extern int g_8c41bd04;
extern int g_8c41bd10;
extern S_g8c41c614 *g_8c41c614;
extern int g_8c41c728;
extern S_g8c467180 *g_8c467180;
extern S_g8c46fe20 *g_8c46fe20;
extern void call_8c019d64(void *, int, int, void *);
extern void call_8c019a3c(void);
extern void call_8c12b048(void *, void *, ...);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c0dc610(void *, float);
extern void operation_8c119764(int, int, int);
extern int lookup_low_id(int);
extern void operation_8c0246d0(void *);
extern void operation_8c017d7c(void);
extern void call_8c09cbcc(void);
void operation_8c017bd4(void)
{
    Frame frame;
    S_vv5 *v5;
    int t1;
    int t2;
    g_8c41c728 = 0;
    switch (g_8c41bce0) {
    case 1:
    case 2:
        call_8c019d64((void *)((void *)0x8c418a0c), g_8c41bcde, g_8c41bcdc, g_8c418258);
        break;
    case 3:
    case 4:
        call_8c019a3c();
        break;
    case 5:
        call_8c12b048((void *)((void *)0x8c41c7cd), (void *)(g_8c467180->f90->f1c), (void *)((void *)0x8c41bd14));
        if (g_8c41c614 == 0) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2f64;
            *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2f6c;
            t1 = create_fitted_pair_grid_view((void *)(&frame), (void *)(&(&frame)->f08));
            g_8c41c614 = (S_g8c41c614 *)(int)(t1);
            operation_8c0dc610((void *)t1, -19999.0f);
        }
        operation_8c119764((int)g_8c41c614, (int)((void *)0x8c41c7cd), 1);
        t2 = lookup_low_id((int)g_8c418248);
        if (t2 != 0) {
            operation_8c0246d0((void *)t2);
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
    if (g_8c418a00 != 0) {
        g_8c418a00->fa88 = 0;
        call_8c09cbcc();
    }
    g_8c41bce0 = 0;
    g_8c41bcde = 0;
    g_8c41bcdc = 0;
}
