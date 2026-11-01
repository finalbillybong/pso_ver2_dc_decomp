/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11dcdc
 * function: load_assets_ene_balclaw_8c11dcdc
 * language: c
 * reference size: 452 bytes
 * compiled size: 448 bytes (-0.9%)
 * differing lines: 4 of 181 reference instruction lines
 * differing bytes: 231
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c31146c S_L8c31146c;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_c8c011ecc_42c S_c8c011ecc_42c;
typedef struct S_c8c03ef88 S_c8c03ef88;
typedef struct S_c8c03ef88_4 S_c8c03ef88_4;
typedef struct S_g8c4d83a0 S_g8c4d83a0;
typedef struct S_g8c4d83a0_0 S_g8c4d83a0_0;
typedef struct S_g8c4d83a0_0_8 S_g8c4d83a0_0_8;
struct S_c8c011ecc {
    char unknown0[0x42c];
    S_c8c011ecc_42c *f42c;
};
struct S_c8c011ecc_42c {
    char unknown0[0x18];
    int f18;
};
struct S_c8c03ef88 {
    int f00;
    S_c8c03ef88_4 *f04;
};
struct S_L8c31146c {
    char unknown0[0x4];
    short f04;
    short f06;
};
struct S_c8c03ef88_4 {
    char unknown0[0x4];
    int f04;
};
extern S_g8c4d83a0 *g_8c4d83a0;
extern S_L8c31146c g_8c31146c;
extern char g_8c4d83a8[];
extern S_c8c011ecc *game_malloc_8c011ecc(int);
extern void call_8c03d610(S_c8c011ecc *, int, void *, int, int, int);
extern S_c8c03ef88 *call_8c03ef88(int, int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
void load_assets_ene_balclaw_8c11dcdc(void)
{
    int v3;
    int v15;
    int v17;
    int v19;
    int v4;
    int v7;
    int v9;
    int v12;
    int v8;
    int v13;
    int v16;
    int v18;
    int v5;
    S_c8c011ecc *t1;
    S_c8c03ef88 *t2;
    S_c8c03ef88 *t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    t1 = game_malloc_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c31141c), 0, 0, 0);
    }
    g_8c4d83a0 = (S_g8c4d83a0 *)t1;
    v3 = (int)t1->f42c->f18;
    v4 = (int)0;
    while (4 > v4) {
        v5 = (int)(v4 * 0x2c);
        v7 = (int)*(int *)((char *)0x8c3114dc + (v4 << 2));
        v8 = v9 = 0;
        while (0xa > v8) {
            t2 = call_8c03ef88(v3, (int)(v7 + v8));
            if (t2 != 0 && ((t2->f00 & 8)) == 0) {
                *(S_c8c03ef88 **)((char *)((char *)(v5 + g_8c4d83a8) + 0x0) + (v9 << 2)) = t2;
                v9 = (int)(v9 + 1);
            }
            v8 = (int)(v8 + 1);
        }
        *(int *)((char *)((char *)(v5 + g_8c4d83a8) + 0x0) + (v9 << 2)) = 0;
        v4 = (int)(v4 + 1);
    }
    v13 = (int)0;
    v12 = (int)0x42c;
    while (7 > v13) {
        v15 = (int)(v13 << 4);
        t4 = (int)(*(S_g8c4d83a0_0_8 **)((char *)((char *)*(S_g8c4d83a0_0 **)((char *)((char *)g_8c4d83a0 + 0x0) + (v12)) + 0x8) + (*(short *)((char *)&g_8c31146c.f04 + (v15)) << 4)));
        t3 = call_8c03ef88(t4, (int)(*(short *)((char *)&g_8c31146c.f06 + (v15))));
        t3 = (S_c8c03ef88 *)t3->f04;
        *(int *)((char *)&g_8c31146c + v15) = (int)(((S_c8c03ef88_4 *)t3)->f04);
        v13 = (int)(v13 + 1);
    }
    v16 = (int)0;
    while (2 > v16) {
        t4 = record24_8c17948c(0x1f);
        v17 = (int)(v16 << 2);
        *(int *)((char *)((char *)v17 + 0x0) + ((int)((void *)0x8c4d9920))) = (int)(t4);
        t5 = record30_8c1794a0(0x1f);
        *(int *)((char *)((char *)v17 + 0x0) + ((int)((void *)0x8c4d9928))) = (int)(t5);
        t6 = block32_8c1794b4(0x1f);
        *(int *)((char *)((char *)v17 + 0x0) + ((int)((void *)0x8c4d9930))) = (int)(t6);
        t7 = record30_8c1794c8(0x1f);
        *(int *)((char *)((char *)v17 + 0x0) + ((int)((void *)0x8c4d9938))) = (int)(t7);
        v16 = (int)(v16 + 1);
    }
    v18 = (int)0;
    while (1 > v18) {
        t8 = record24_8c17948c(0x20);
        v19 = (int)(v18 << 2);
        *(int *)((char *)((char *)v19 + 0x0) + ((int)((void *)0x8c4d9940))) = (int)(t8);
        t9 = record30_8c1794a0(0x20);
        *(int *)((char *)((char *)v19 + 0x0) + ((int)((void *)0x8c4d9944))) = (int)(t9);
        t10 = block32_8c1794b4(0x20);
        *(int *)((char *)((char *)v19 + 0x0) + ((int)((void *)0x8c4d9948))) = (int)(t10);
        t11 = record30_8c1794c8(0x20);
        *(int *)((char *)((char *)v19 + 0x0) + ((int)((void *)0x8c4d994c))) = (int)(t11);
        v18 = (int)(v18 + 1);
    }
}
