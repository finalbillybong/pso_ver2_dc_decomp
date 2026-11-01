/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0358b0
 * function: operation_8c0358b0
 * language: c
 * reference size: 1008 bytes
 * compiled size: 1008 bytes (+0.0%)
 * differing lines: 88 of 342 reference instruction lines
 * differing bytes: 72
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
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct S_L8c461c04 S_L8c461c04;
typedef struct S_L8c461ff0 S_L8c461ff0;
typedef struct Frame Frame;
typedef struct S_g8c2ed2a0 S_g8c2ed2a0;
struct S_L8c461c04 {
    char unknown0[0x276];
    char f276;
    char unknown277[0xf1];
    int f368;
};
struct S_L8c461ff0 {
    int f00;
    int f04;
};
struct Frame {
    char unknown0[0x6];
    char f06;
    char unknown7[0x12d];
    int f134;
    char unknown138[0x4];
    short f13c;
    char unknown13e[0x8];
    short f146;
    int f148;
    char unknown14c[0x4];
    short f150;
    short f152;
    int f154;
    short f158;
    short f15a;
    short f15c;
    char unknown15e[0xa];
    short f168;
    short f16a;
    short f16c;
    short f16e;
    short f170;
    char unknown172[0x2];
    void *f174;
    char unknown178[0x8];
    short f180;
    short f182;
    short f184;
    short f186;
    short f188;
    char unknown18a[0x2];
    int f18c;
    int f190;
    int f194;
    int f198;
    int f19c;
    void *f1a0;
    void *f1a4;
    int f1a8;
    void *f1ac;
    void *f1b0;
    char unknown1b4[0x4];
    int f1b8;
    int f1bc;
};
struct S_L8c41cba0 {
    char unknown0[0x28];
    int f28;
};
extern S_g8c2ed2a0 *g_8c2ed2a0;
extern S_L8c41cba0 g_8c41cba0;
extern S_L8c461c04 g_8c461c04;
extern S_L8c461ff0 g_8c461ff0;
extern char g_8c2ed2b4[];
extern int call_8c2334de(int, int);
extern int call_8c234890(Frame *);
extern void sprintf_8c12b048(void *, void *, ...);
extern void call_8c233584(void);
extern int operation_8c03614c(int);
extern int operation_8c036590(void);
extern void call_8c1ff548(int, int, int, int, int, int);
extern int tcp_open_8c203f5a(void *);
extern void call_8c23174e(int);
extern void net_open_8c204010(void *);
extern void tcp_close_8c203f84(void *);
extern int operation_8c01e148(int);
extern int call_8c01e180(void);
extern void call_8c035ca0(void);
typedef struct BlkA { char f00[0x6]; char f06; char unknown7[0x12d]; } BlkA;
typedef struct BlkB { int f00; char unknown4[0x4]; short f08; char unknowna[0x8]; short f12; } BlkB;
typedef struct BlkC { int f00; char unknown4[0x4]; short f08; short f0a; int f0c; short f10; short f12; short f14; char unknown16[0xa]; } BlkC;
typedef struct BlkD { short f00; short f02; short f04; short f06; short f08; char unknowna[0x2]; void *f0c; char unknown10[0x8]; } BlkD;
typedef struct BlkE { short f00; short f02; short f04; short f06; short f08; char unknowna[0x2]; int f0c; int f10; } BlkE;
typedef struct BlkF { int f00; int f04; int f08; void *f0c; void *f10; int f14; void *f18; void *f1c; char unknown20[0x4]; int f24; int f28; } BlkF;
int operation_8c0358b0(int a0)
{
    BlkF f;
    BlkE e;
    BlkD d;
    BlkC c;
    BlkB b;
    BlkA a;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int mask;
    if ((&g_8c461c04)->f368 == 0) {
        return 1;
    }
    if ((&g_8c461ff0)->f04 == 0) {
        return 1;
    }
    if (*(char *)((char *)&g_8c461c04.f276 + (a0 * 0x28)) == 0) {
        return 3;
    }
    e.f00 = 4;
    e.f02 = 0;
    e.f04 = 0;
    e.f06 = 0;
    e.f08 = 0;
    e.f0c = 0;
    e.f10 = 0;
    mask = 0x100;
    if ((mask & (&g_8c461ff0)->f00) == mask) {
        d.f00 = 1;
    } else {
        d.f00 = 0;
    }
    d.f02 = 0;
    d.f04 = 0x46;
    d.f06 = 0;
    f.f00 = (int)(&e);
    d.f08 = 0x1e;
    c.f08 = 4;
    c.f0a = 0x5dc;
    f.f04 = (int)(&d);
    c.f0c = 0x12345678;
    c.f10 = 0;
    c.f12 = 0;
    c.f14 = 0;
    d.f0c = (void *)g_8c2ed2b4;
    f.f08 = (int)(&c);
    t1 = call_8c2334de(0, 0);
    if (t1 == 0) {
        t2 = call_8c234890((Frame *)(&a));
        if (t2 == 0) {
            goto L_8c035a60;
        }
    }
    f.f0c = (g_8c2ed2b4 + 0x3);
    goto L_8c035a7e;
L_8c035a60:;
    sprintf_8c12b048((void *)(&a.f06), (void *)((g_8c2ed2b4 + 0x63)), (Frame *)(&a));
    f.f0c = (void *)&a.f06;
L_8c035a7e:;
    call_8c233584();
    f.f10 = (g_8c2ed2b4 + 0xdc);
    t3 = operation_8c03614c(a0);
    f.f14 = (int)(t3);
    f.f18 = (void *)((char *)&g_8c461c04 + 0x248);
    f.f1c = (void *)0x8c4621e9;
    f.f24 = 0;
    f.f28 = 0;
    t4 = operation_8c036590();
    if (t4 == 0) {
        return 6;
    }
    call_8c1ff548(0, 0, 0, 0, 0, 0);
    t5 = tcp_open_8c203f5a((void *)(&f));
    g_8c2ed2a0 = (S_g8c2ed2a0 *)(short)t5;
    if ((short)t5 == -1) {
        return 2;
    }
    do {
        call_8c23174e(1);
        net_open_8c204010((void *)(&b));
        if (b.f08 == 4) {
            goto L_8c035c84;
        }
        if (b.f08 == 8 || b.f08 == 5) {
            tcp_close_8c203f84(g_8c2ed2a0);
            do {
                call_8c23174e(1);
                net_open_8c204010((void *)(&b));
            } while (b.f08 != 0);
            g_8c2ed2a0 = (S_g8c2ed2a0 *)-1;
            switch (b.f12) {
            case 3:
                return 5;
            case 2:
                return 7;
            }
            return 4;
        }
        if ((((&g_8c41cba0)->f28 & 2)) == 0) {
            t6 = operation_8c01e148(0x29);
            if (t6 == 0) {
                goto L_8c035c30;
            }
        }
        tcp_close_8c203f84(g_8c2ed2a0);
        g_8c2ed2a0 = (S_g8c2ed2a0 *)-1;
        do {
            call_8c23174e(1);
            net_open_8c204010((void *)(&b));
        } while (b.f08 != 0);
        return 0xc;
L_8c035c30:;
        t7 = call_8c01e180();
    } while ((char)t7 == 0);
    tcp_close_8c203f84(g_8c2ed2a0);
    g_8c2ed2a0 = (S_g8c2ed2a0 *)-1;
    do {
        call_8c23174e(1);
        net_open_8c204010((void *)(&b));
    } while (b.f08 != 0);
    return 0xd;
L_8c035c84:;
    call_8c035ca0();
    return 0;
}
