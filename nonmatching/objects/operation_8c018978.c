/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c018978
 * function: operation_8c018978
 * language: c
 * reference size: 1664 bytes
 * compiled size: 1664 bytes (+0.0%)
 * differing lines: 44 of 562 reference instruction lines
 * differing bytes: 39
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
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
typedef struct S_vv19 S_vv19;
typedef struct S_vv29 S_vv29;
typedef struct S_vv39 S_vv39;
typedef struct S_vv49 S_vv49;
typedef struct S_vv59 S_vv59;
typedef struct S_vv69 S_vv69;
typedef struct S_vv9 S_vv9;
struct Frame {
    Block8 f00;
    Block8 f08;
    Block8 f10;
    Block8 f18;
    Block8 f20;
    Block8 f28;
    Block8 f30;
    Block8 f38;
    Block8 f40;
    Block8 f48;
    Block8 f50;
    Block8 f58;
    Block8 f60;
    Block8 f68;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    int f28;
    int f2c;
    char unknown30[0x4];
    int f34;
    int f38;
    int f3c;
    char unknown40[0x194];
    int f1d4;
};
struct S_vv9 {
    char unknown0[0x20];
    short f20;
};
struct S_vv19 {
    char unknown0[0x20];
    short f20;
};
struct S_vv29 {
    char unknown0[0x20];
    short f20;
};
struct S_vv39 {
    char unknown0[0x20];
    short f20;
};
struct S_vv49 {
    char unknown0[0x20];
    short f20;
};
struct S_vv59 {
    char unknown0[0x20];
    short f20;
};
struct S_vv69 {
    char unknown0[0x20];
    short f20;
};
extern Block8 g_8c2e2f74;
extern Block8 g_8c2e2f7c;
extern S_g8c418248 *g_8c418248;
extern S_g8c418a00 *g_8c418a00;
extern int g_8c41bce4;
extern int g_8c41bd04;
extern int g_8c41bd0c;
extern int g_8c41bd10;
extern S_g8c41c618 *g_8c41c618;
extern S_g8c467180 *g_8c467180;
extern S_g8c46fe20 *g_8c46fe20;
extern int g_8c4db9e4;
extern char g_8c2e3014[];
extern void operation_8c011efc(void *);
extern void memcpy_8c12b77c(int, int, int);
extern int query_field_8c17e6c0(void);
extern int query_field_8c17e6d8(void);
extern void operation_8c02f930(void *, int, int);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
extern int lookup_low_id(int);
extern void operation_8c0246d0(void *);
extern void operation_8c017d7c(void);
void operation_8c018978(int a0)
{
    Frame frame;
    S_vv9 *v9;
    S_vv19 *v19;
    S_vv29 *v29;
    S_vv39 *v39;
    S_vv49 *v49;
    S_vv59 *v59;
    S_vv69 *v69;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    switch (a0) {
    case 0:
        operation_8c011efc((void *)((g_8c2e3014 + 0xa3)));
        memcpy_8c12b77c((int)(g_8c4db9e4 + 0x118c), (int)((int)g_8c418a00 + 0x3024), 8);
        memcpy_8c12b77c((int)(g_8c4db9e4 + 0x119c), (int)((int)g_8c418a00 + 0x3035), 8);
        memcpy_8c12b77c((int)(g_8c4db9e4 + 0x12b8), (int)((int)g_8c418a00 + 0x30f6), 8);
        memcpy_8c12b77c((int)(g_8c4db9e4 + 0x12c8), (int)((int)g_8c418a00 + 0x3107), 8);
        if (g_8c41bd0c == 0) {
            return;
        }
        t1 = query_field_8c17e6c0();
        t2 = query_field_8c17e6d8();
        operation_8c02f930(g_8c418a00, t1, t2);
        g_8c41bd0c = 0;
        return;
    case 1:
        if (g_8c41c618 == 0) {
            *(Block8 *)&(&frame)->f60 = *(Block8 *)&g_8c2e2f74;
            *(Block8 *)&(&frame)->f68 = *(Block8 *)&g_8c2e2f7c;
            t3 = create_fitted_pair_grid_view((void *)(&(&frame)->f60), (void *)(&(&frame)->f68));
            g_8c41c618 = (S_g8c41c618 *)(int)(t3);
        }
        operation_8c119764((int)g_8c41c618, (int)(g_8c467180->f90->f28), 1);
        t4 = lookup_low_id((int)g_8c418248);
        if (t4 != 0) {
            operation_8c0246d0((void *)t4);
        }
        v9 = (S_vv9 *)g_8c46fe20;
        if (v9 != 0) {
            v9->f20 |= 1;
            operation_8c017d7c();
        }
        g_8c41bd04 = 0;
        g_8c41bce4 = 0xc;
        g_8c41bd10 = 1;
        return;
    case 2:
        if (g_8c41c618 == 0) {
            *(Block8 *)&(&frame)->f50 = *(Block8 *)&g_8c2e2f74;
            *(Block8 *)&(&frame)->f58 = *(Block8 *)&g_8c2e2f7c;
            t5 = create_fitted_pair_grid_view((void *)(&(&frame)->f50), (void *)(&(&frame)->f58));
            g_8c41c618 = (S_g8c41c618 *)(int)(t5);
        }
        operation_8c119764((int)g_8c41c618, (int)(g_8c467180->f90->f2c), 1);
        t6 = lookup_low_id((int)g_8c418248);
        if (t6 != 0) {
            operation_8c0246d0((void *)t6);
        }
        v19 = (S_vv19 *)g_8c46fe20;
        if (v19 != 0) {
            v19->f20 |= 1;
            operation_8c017d7c();
        }
        g_8c41bd04 = 0;
        g_8c41bce4 = 0xc;
        g_8c41bd10 = 1;
        return;
    case 3:
        if (g_8c41c618 == 0) {
            *(Block8 *)&(&frame)->f40 = *(Block8 *)&g_8c2e2f74;
            *(Block8 *)&(&frame)->f48 = *(Block8 *)&g_8c2e2f7c;
            t7 = create_fitted_pair_grid_view((void *)(&(&frame)->f40), (void *)(&(&frame)->f48));
            g_8c41c618 = (S_g8c41c618 *)(int)(t7);
        }
        operation_8c119764((int)g_8c41c618, (int)(g_8c467180->f90->f34), 1);
        t8 = lookup_low_id((int)g_8c418248);
        if (t8 != 0) {
            operation_8c0246d0((void *)t8);
        }
        v29 = (S_vv29 *)g_8c46fe20;
        if (v29 != 0) {
            v29->f20 |= 1;
            operation_8c017d7c();
        }
        g_8c41bd04 = 0;
        g_8c41bce4 = 0xc;
        g_8c41bd10 = 1;
        return;
    case 4:
        if (g_8c41c618 == 0) {
            *(Block8 *)&(&frame)->f30 = *(Block8 *)&g_8c2e2f74;
            *(Block8 *)&(&frame)->f38 = *(Block8 *)&g_8c2e2f7c;
            t9 = create_fitted_pair_grid_view((void *)(&(&frame)->f30), (void *)(&(&frame)->f38));
            g_8c41c618 = (S_g8c41c618 *)(int)(t9);
        }
        operation_8c119764((int)g_8c41c618, (int)(g_8c467180->f90->f38), 1);
        t10 = lookup_low_id((int)g_8c418248);
        if (t10 != 0) {
            operation_8c0246d0((void *)t10);
        }
        v39 = (S_vv39 *)g_8c46fe20;
        if (v39 != 0) {
            v39->f20 |= 1;
            operation_8c017d7c();
        }
        g_8c41bd04 = 0;
        g_8c41bce4 = 0xc;
        g_8c41bd10 = 1;
        return;
    case 5:
        if (g_8c41c618 == 0) {
            *(Block8 *)&(&frame)->f20 = *(Block8 *)&g_8c2e2f74;
            *(Block8 *)&(&frame)->f28 = *(Block8 *)&g_8c2e2f7c;
            t11 = create_fitted_pair_grid_view((void *)(&(&frame)->f20), (void *)(&(&frame)->f28));
            g_8c41c618 = (S_g8c41c618 *)(int)(t11);
        }
        operation_8c119764((int)g_8c41c618, (int)(g_8c467180->f90->f3c), 1);
        t12 = lookup_low_id((int)g_8c418248);
        if (t12 != 0) {
            operation_8c0246d0((void *)t12);
        }
        v49 = (S_vv49 *)g_8c46fe20;
        if (v49 != 0) {
            v49->f20 |= 1;
            operation_8c017d7c();
        }
        g_8c41bd04 = 0;
        g_8c41bce4 = 0xc;
        g_8c41bd10 = 1;
        return;
    case 6:
        if (g_8c41c618 == 0) {
            *(Block8 *)&(&frame)->f10 = *(Block8 *)&g_8c2e2f74;
            *(Block8 *)&(&frame)->f18 = *(Block8 *)&g_8c2e2f7c;
            t13 = create_fitted_pair_grid_view((void *)(&(&frame)->f10), (void *)(&(&frame)->f18));
            g_8c41c618 = (S_g8c41c618 *)(int)(t13);
        }
        operation_8c119764((int)g_8c41c618, (int)(g_8c467180->f90->f1d4), 1);
        t14 = lookup_low_id((int)g_8c418248);
        if (t14 != 0) {
            operation_8c0246d0((void *)t14);
        }
        v59 = (S_vv59 *)g_8c46fe20;
        if (v59 != 0) {
            v59->f20 |= 1;
            operation_8c017d7c();
        }
        g_8c41bd04 = 0;
        g_8c41bce4 = 0xc;
        g_8c41bd10 = 1;
        return;
    default:
        if (g_8c41c618 == 0) {
            *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2f74;
            *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2f7c;
            t15 = create_fitted_pair_grid_view((void *)(&frame), (void *)(&(&frame)->f08));
            g_8c41c618 = (S_g8c41c618 *)(int)(t15);
        }
        operation_8c119764((int)g_8c41c618, (int)(g_8c467180->f90->f20), 1);
        t16 = lookup_low_id((int)g_8c418248);
        if (t16 != 0) {
            operation_8c0246d0((void *)t16);
        }
        v69 = (S_vv69 *)g_8c46fe20;
        if (v69 != 0) {
            v69->f20 |= 1;
            operation_8c017d7c();
        }
        g_8c41bd04 = 0;
        g_8c41bce4 = 0xc;
        g_8c41bd10 = 1;
        return;
    }
}
