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
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_vv11 S_vv11;
typedef struct S_vv39 S_vv39;
typedef struct S_vv5 S_vv5;
struct Frame {
    Block8 f00;
    Block8 f08;
    Block8 f10;
    Block8 f18;
    Block8 f20;
    Block8 f28;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0x4c];
    int f4c;
    int f50;
    char unknown54[0x2c];
    int f80;
};
struct S_vv5 {
    char unknown0[0x20];
    short f20;
};
struct S_vv11 {
    char unknown0[0x20];
    short f20;
};
struct S_vv39 {
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
extern void call_8c17e6f0(void);
extern int operation_8c036684(void);
extern void operation_8c02faac(void *);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
extern int lookup_low_id(int);
extern void operation_8c0246d0(void *);
extern void operation_8c017d7c(void);
extern void operation_8c17ede4(void);
void operation_8c01919c(int a0)
{
    Frame frame;
    S_vv5 *v5;
    S_vv11 *v11;
    S_vv39 *v39;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    if (a0 == 0) {
    } else {
        call_8c17e6f0();
        t1 = operation_8c036684();
        if (t1 != 0) {
            if (t1 == 1) {
                goto L_8c0191d2;
            }
            if (t1 == 2) {
                goto L_8c01924e;
            }
            return;
        }
        operation_8c02faac(g_8c418a00);
        return;
L_8c0191d2:;
        if (g_8c41c618 == 0) {
            *(Block8 *)&(&frame)->f20 = *(Block8 *)&g_8c2e2f74;
            *(Block8 *)&(&frame)->f28 = *(Block8 *)&g_8c2e2f7c;
            t2 = create_fitted_pair_grid_view((void *)(&(&frame)->f20), (void *)(&(&frame)->f28));
            g_8c41c618 = (S_g8c41c618 *)(int)(t2);
        }
        operation_8c119764((int)g_8c41c618, (int)(g_8c467180->f90->f4c), 1);
        t3 = lookup_low_id((int)g_8c418248);
        if (t3 != 0) {
            operation_8c0246d0((void *)t3);
        }
        v5 = (S_vv5 *)g_8c46fe20;
        if (v5 != 0) {
            v5->f20 |= 1;
            operation_8c017d7c();
        }
        g_8c41bce4 = 0xd;
        return;
L_8c01924e:;
        if (g_8c41c618 == 0) {
            *(Block8 *)&(&frame)->f10 = *(Block8 *)&g_8c2e2f74;
            *(Block8 *)&(&frame)->f18 = *(Block8 *)&g_8c2e2f7c;
            t4 = create_fitted_pair_grid_view((void *)(&(&frame)->f10), (void *)(&(&frame)->f18));
            g_8c41c618 = (S_g8c41c618 *)(int)(t4);
        }
        operation_8c119764((int)g_8c41c618, (int)(g_8c467180->f90->f50), 1);
        t5 = lookup_low_id((int)g_8c418248);
        if (t5 != 0) {
            operation_8c0246d0((void *)t5);
        }
        v11 = (S_vv11 *)g_8c46fe20;
        if (v11 != 0) {
            v11->f20 |= 1;
            operation_8c017d7c();
        }
        g_8c41bce4 = 0xd;
        return;
    }
    if (g_8c41c618 == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2f74;
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2f7c;
        t6 = create_fitted_pair_grid_view((void *)(&frame), (void *)(&(&frame)->f08));
        g_8c41c618 = (S_g8c41c618 *)(int)(t6);
    }
    operation_8c119764((int)g_8c41c618, (int)(g_8c467180->f90->f80), 1);
    t7 = lookup_low_id((int)g_8c418248);
    if (t7 != 0) {
        operation_8c0246d0((void *)t7);
    }
    v39 = (S_vv39 *)g_8c46fe20;
    if (v39 != 0) {
        v39->f20 |= 1;
        operation_8c017d7c();
    }
    g_8c41bd04 = 0;
    g_8c41bce4 = 0xc;
    g_8c41bd10 = 1;
    operation_8c17ede4();
    call_8c17e6f0();
}
