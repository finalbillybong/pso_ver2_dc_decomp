/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1d9aa4
 * function: operation_8c1d9aa4
 * language: c
 * reference size: 708 bytes
 * compiled size: 692 bytes (-2.3%)
 * differing lines: 92 of 301 reference instruction lines
 * differing bytes: 513
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_c8c011ecc_42c S_c8c011ecc_42c;
typedef struct S_c8c011ecc_42c_8 S_c8c011ecc_42c_8;
typedef struct S_g8c32a660 S_g8c32a660;
typedef struct S_g8c4e2f14 S_g8c4e2f14;
typedef struct S_g8c4e2f14_4 S_g8c4e2f14_4;
typedef struct S_g8c4e2f14_4_4 S_g8c4e2f14_4_4;
typedef struct S_vv14 S_vv14;
typedef struct S_vv14_2c S_vv14_2c;
typedef struct S_vv14_2c_4 S_vv14_2c_4;
typedef struct S_vv14_2c_4_4 S_vv14_2c_4_4;
typedef struct S_vv17 S_vv17;
typedef struct S_vv17_2c S_vv17_2c;
typedef struct S_vv17_2c_4 S_vv17_2c_4;
typedef struct S_vv17_2c_4_4 S_vv17_2c_4_4;
typedef struct S_vv38 S_vv38;
typedef struct S_vv38_42c S_vv38_42c;
struct S_c8c011ecc {
    char unknown0[0x42c];
    S_c8c011ecc_42c *f42c;
    char unknown430[0x4];
    int f434;
};
struct S_c8c011ecc_42c {
    char unknown0[0x8];
    S_c8c011ecc_42c_8 *f08;
    char unknownc[0xc];
    int f18;
};
struct S_vv14 {
    char unknown0[0x2c];
    S_vv14_2c *f2c;
};
struct S_vv14_2c {
    char unknown0[0x4];
    S_vv14_2c_4 *f04;
};
struct S_vv14_2c_4 {
    char unknown0[0x4];
    S_vv14_2c_4_4 *f04;
};
struct S_vv14_2c_4_4 {
    char unknown0[0xc];
    short f0c;
};
struct S_vv17 {
    char unknown0[0x2c];
    S_vv17_2c *f2c;
};
struct S_vv17_2c {
    char unknown0[0x4];
    S_vv17_2c_4 *f04;
};
struct S_vv17_2c_4 {
    char unknown0[0x4];
    S_vv17_2c_4_4 *f04;
};
struct S_vv17_2c_4_4 {
    char unknown0[0xc];
    short f0c;
};
struct S_g8c4e2f14 {
    char unknown0[0x4];
    S_g8c4e2f14_4 *f04;
};
struct S_g8c4e2f14_4 {
    char unknown0[0x4];
    S_g8c4e2f14_4_4 *f04;
};
struct S_g8c4e2f14_4_4 {
    char unknown0[0xc];
    short f0c;
};
struct S_vv38 {
    char unknown0[0x42c];
    S_vv38_42c *f42c;
    char unknown430[0x4];
    int f434;
};
extern void clear_words_8c1d9e10(void);
extern int get_game_mode_8c01c25c(void);
extern void operation_8c1d9e50(void);
extern void clear_words_8c1d9e30(void);
extern int operation_8c1d9e9c(int);
extern S_c8c011ecc *game_malloc_8c011ecc(int);
extern void call_8c03d610(S_c8c011ecc *, int, void *, int, int, int);
extern void call_8c0cd588(S_c8c011ecc *, S_vv14 *, int);
void operation_8c1d9aa4(void)
{
    S_c8c011ecc *t;
    S_c8c011ecc *u;
    S_vv14 *v;
    int i;
    int j;
    int m;
    int q;
    int off;
    int k;
    int n;
    clear_words_8c1d9e10();
    if (get_game_mode_8c01c25c() == 0x10) {
        operation_8c1d9e50();
    } else {
        clear_words_8c1d9e30();
    }
    *(int *)0x8c4e2ed8 = -1;
    for (i = 0; i < 6; i++) {
        if (operation_8c1d9e9c(i) != 0) {
            *(int *)0x8c4e2ed8 = i;
            break;
        }
    }
    if (*(int *)0x8c4e2ed8 != -1) {
        for (j = 0; j < 6; j++) {
            *(int *)((char *)0x8c4e2edc + (j << 2)) = 0;
            *(int *)((char *)0x8c4e2ef4 + (j << 2)) = 0;
        }
        t = game_malloc_8c011ecc(0x440);
        if (t != 0) {
            call_8c03d610(t, 1, (void *)(*(S_g8c32a660 **)((char *)0x8c32a660 + (*(int *)0x8c4e2ed8 << 2))), 0, 0, 0);
        }
        k = *(int *)0x8c4e2ed8 << 2;
        *(S_c8c011ecc **)((char *)0x8c4e2edc + k) = t;
        n = t->f434;
        for (m = 0; m < n; m++) {
            off = m << 4;
            if (*(int *)((char *)((char *)t->f42c + 0xc) + off) != 0) {
                *(int *)((char *)0x8c4e2ef4 + k) = *(int *)((char *)((char *)t->f42c + 0xc) + off);
                break;
            }
        }
        if (*(int *)0x8c4e2ed8 == 0) {
            v = (S_vv14 *)t->f42c->f08;
            t = game_malloc_8c011ecc(0x14);
            if (t != 0) {
                call_8c0cd588(t, v, 1);
            }
            *(S_c8c011ecc **)0x8c4e2f0c = t;
            v->f2c->f04->f04->f0c &= -0x1001;
        } else if (*(int *)0x8c4e2ed8 == 4) {
            v = (S_vv14 *)t->f42c->f08;
            t = game_malloc_8c011ecc(0x14);
            if (t != 0) {
                call_8c0cd588(t, v, 1);
            }
            *(S_c8c011ecc **)0x8c4e2f0c = t;
            v->f2c->f04->f04->f0c &= -0x1001;
        } else {
            *(int *)0x8c4e2f0c = 0;
        }
    }
    if (*(int *)0x8c4e2ed8 == 2) {
        t = game_malloc_8c011ecc(0x440);
        if (t != 0) {
            call_8c03d610(t, 1, (void *)0x8c32a630, 0, 0, 0);
        }
        *(int *)0x8c4e2f14 = (int)(t->f42c->f18);
        *(int *)0x8c4e2f18 = (int)(t->f42c->f08);
    } else if (*(int *)0x8c4e2ed8 == 4) {
        t = game_malloc_8c011ecc(0x440);
        if (t != 0) {
            call_8c03d610(t, 1, (void *)0x8c32a650, 0, 0, 0);
        }
        *(int *)0x8c4e2f14 = (int)(t->f42c->f08);
        *(int *)0x8c4e2f18 = (int)(t->f42c->f18);
    } else {
        t = game_malloc_8c011ecc(0x440);
        if (t != 0) {
            call_8c03d610(t, 1, (void *)0x8c32a610, 0, 0, 0);
        }
        *(int *)0x8c4e2f14 = (int)(t->f42c->f18);
        *(int *)0x8c4e2f18 = (int)(t->f42c->f08);
    }
    u = game_malloc_8c011ecc(0x14);
    if (u != 0) {
        call_8c0cd588(u, (S_vv14 *)(*(S_g8c4e2f14 **)0x8c4e2f14), 2);
    }
    *(S_c8c011ecc **)0x8c4e2f20 = u;
    (*(S_g8c4e2f14 **)0x8c4e2f14)->f04->f04->f0c &= -0x2001;
    *(S_c8c011ecc **)0x8c4e2f10 = t;
    n = t->f434;
    for (q = 0; q < n; q++) {
        off = q << 4;
        if (*(int *)((char *)((char *)t->f42c + 0xc) + off) != 0) {
            *(int *)0x8c4e2f1c = *(int *)((char *)((char *)t->f42c + 0xc) + off);
            return;
        }
    }
}
