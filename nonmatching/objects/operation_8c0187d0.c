/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0187d0
 * function: operation_8c0187d0
 * language: c
 * reference size: 424 bytes
 * compiled size: 424 bytes (+0.0%)
 * differing lines: 14 of 151 reference instruction lines
 * differing bytes: 27
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
typedef struct S_vv7 S_vv7;
struct Frame {
    Block8 f00;
    Block8 f08;
    int f10;
};
struct S_g8c418a00 {
    char unknown0[0x3024];
    char f3024;
    char unknown3025[0xd1];
    char f30f6;
};
struct S_g8c467180 {
    char unknown0[0x90];
    S_g8c467180_90 *f90;
};
struct S_g8c467180_90 {
    char unknown0[0x1d4];
    int f1d4;
};
struct S_vv7 {
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
extern int g_8c4db9e0;
extern char g_8c2e3014[];
extern void operation_8c011efc(void *);
extern int lookup_low_id(int);
extern int operation_8c01ba48(void);
extern void call_8c0303a0(S_g8c418a00 *, int, int);
extern void call_8c12b00c(void *, void *, ...);
extern void operation_8c232570(int);
extern void operation_8c2325e0(int);
extern int create_fitted_pair_grid_view(void *, void *);
extern void operation_8c119764(int, int, int);
extern void operation_8c0246d0(void *);
extern void operation_8c017d7c(void);
void operation_8c0187d0(int a0)
{
    Frame frame;
    S_vv7 *v7;
    int t1;
    int t2;
    int t3;
    S_g8c418a00 *p;
    if (a0 != 0) {
        operation_8c011efc((void *)((g_8c2e3014 + 0x82)));
        lookup_low_id((int)g_8c418248);
        t1 = operation_8c01ba48();
        call_8c0303a0(g_8c418a00, (int)(g_8c4db9e0 + 0x370), t1);
        (&frame)->f10 = 0;
        p = g_8c418a00;
        if (p->f3024 != 0) {
            call_8c12b00c((void *)(&p->f3024), (void *)((g_8c2e3014 + 0x7d)), &(&frame)->f10);
            operation_8c232570((int)((&frame)->f10));
        }
        (&frame)->f10 = 0;
        p = g_8c418a00;
        if (p->f30f6 == 0) {
            return;
        }
        call_8c12b00c((void *)(&p->f30f6), (void *)((g_8c2e3014 + 0x7d)), &(&frame)->f10);
        operation_8c2325e0((int)((&frame)->f10));
        return;
    }
    operation_8c011efc((void *)((g_8c2e3014 + 0x8c)));
    if (g_8c41c618 == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c2e2f74;
        *(Block8 *)&(&frame)->f08 = *(Block8 *)&g_8c2e2f7c;
        t2 = create_fitted_pair_grid_view((void *)(&frame), (void *)(&(&frame)->f08));
        g_8c41c618 = (S_g8c41c618 *)(int)(t2);
    }
    operation_8c119764((int)g_8c41c618, (int)(g_8c467180->f90->f1d4), 1);
    t3 = lookup_low_id((int)g_8c418248);
    if (t3 != 0) {
        operation_8c0246d0((void *)t3);
    }
    v7 = (S_vv7 *)g_8c46fe20;
    if (v7 != 0) {
        v7->f20 |= 1;
        operation_8c017d7c();
    }
    g_8c41bd04 = 0;
    g_8c41bce4 = 0xc;
    g_8c41bd10 = 1;
}
