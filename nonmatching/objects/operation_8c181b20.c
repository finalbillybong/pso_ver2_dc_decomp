/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c181b20
 * function: operation_8c181b20
 * language: c
 * reference size: 716 bytes
 * compiled size: 708 bytes (-1.1%)
 * differing lines: 298 of 264 reference instruction lines
 * differing bytes: 628
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block5456 {
    int words[1364];
} Block5456;
typedef struct S_c8c011ecc S_c8c011ecc;
typedef struct S_g8c4db9ec S_g8c4db9ec;
typedef struct S_g8c4db9f4 S_g8c4db9f4;
typedef struct S_vv1 S_vv1;
typedef struct S_vv10 S_vv10;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_0 S_vv7_0;
typedef struct S_vv8 S_vv8;
typedef struct Block_c8c011ecc_0 {
    int f00;
    char unknown4[0x154c];
} Block_c8c011ecc_0;
typedef struct Block_vv1_0 {
    char unknown0[0x428];
    int f428;
    char unknown42c[0x1124];
} Block_vv1_0;
struct S_vv1 {
    Block_vv1_0 f00;
};
struct S_c8c011ecc {
    Block_c8c011ecc_0 f00;
};
struct S_g8c4db9ec {
    int f00;
    char unknown4[0x41c];
    int f420;
    char unknown424[0x240];
    int f664;
    char unknown668[0x1090];
    int f16f8;
};
struct S_vv7 {
    S_vv7_0 *f00;
};
struct S_vv7_0 {
    char unknown0[0x5e4];
    int f5e4;
    int f5e8;
    char unknown5ec[0xf60];
    int f154c;
};
struct S_vv8 {
    char unknown0[0x668];
    int f668;
};
struct S_vv10 {
    int f00;
};
extern S_g8c4db9ec *g_8c4db9ec;
extern S_g8c4db9f4 *g_8c4db9f4;
extern S_c8c011ecc *game_malloc_8c011ecc(int);
extern void operation_8c181aa4(void *);
extern void operation_8c02db24(int);
extern int operation_8c17e670(S_c8c011ecc *);
extern void call_8c011ed8(S_c8c011ecc *);
extern void memset_8c12b880(S_g8c4db9ec *, int, int);
extern void memcpy_8c12b77c(void *, int, int);
extern void call_8c074174(void *);
extern void operation_8c074278(void *);
extern void set_fields_8c209770(void *);
extern void operation_8c2357b8(void *);
extern void operation_8c09adcc(void *);
extern void call_8c028494(void *);
int operation_8c181b20(void)
{
    S_vv8 *v8;
    char *v4;
    int v5;
    int v6;
    S_c8c011ecc *t1;
    S_vv1 *v1;
    int v9;
    int v11;
    int v12;
    S_vv7 *v7;
    int v13;
    int v14;
    S_vv10 *v10;
    int t2;
    v1 = (S_vv1 *)g_8c4db9f4;
    if (v1 == 0) {
        return 0;
    }
    if (v1->f00.f428 != -0x5dfa4f9c) {
        return 5;
    }
    t1 = game_malloc_8c011ecc(0x1550);
    if (t1 != 0) {
        operation_8c181aa4((void *)(((char *)t1 + 0x4)));
        operation_8c02db24((int)(((char *)t1 + 0xb8c)));
    }
    *(Block5456 *)&t1->f00 = *(Block5456 *)&v1->f00;
    v4 = (char *)t1->f00.f00;
    t1->f00.f00 = 0;
    t2 = operation_8c17e670(t1);
    call_8c011ed8(t1);
    if ((int)(v4) != t2) {
        return 1;
    }
    memset_8c12b880(g_8c4db9ec, 0, 0x16fc);
    memcpy_8c12b77c((void *)(((char *)g_8c4db9ec + 0x4)), (int)((int)g_8c4db9f4 + 4), 0x41c);
    memcpy_8c12b77c((void *)(&g_8c4db9ec->f420), (int)((int)g_8c4db9f4 + 0x420), 0x112c);
    v6 = (int)0;
    v5 = (int)0x80;
    while (v5 > v6) {
        *(char *)((char *)((char *)g_8c4db9ec + 0x5e4) + (v6)) = 0;
        v6 = (int)(v6 + 1);
    }
    v7 = (S_vv7 *)(void *)&g_8c4db9f4;
    g_8c4db9ec->f664 = (int)(v7->f00->f5e4);
    v8 = (S_vv8 *)g_8c4db9ec;
    v8->f668 = (int)(v7->f00->f5e8);
    memcpy_8c12b77c((void *)(((char *)g_8c4db9ec + 0x66c)), (int)(((char *)v7->f00 + 0x5ec)), 0x5a0);
    memcpy_8c12b77c((void *)(((char *)g_8c4db9ec + 0xc0c)), (int)(((char *)v7->f00 + 0xb8c)), 0x80);
    memcpy_8c12b77c((void *)(((char *)g_8c4db9ec + 0xc8c)), (int)(((char *)v7->f00 + 0xc0c)), 0x420);
    memcpy_8c12b77c((void *)(((char *)g_8c4db9ec + 0x10ac)), (int)(((char *)v7->f00 + 0x102c)), 0x500);
    memcpy_8c12b77c((void *)(((char *)g_8c4db9ec + 0x15ac)), (int)(((char *)v7->f00 + 0x152c)), 0x10);
    memcpy_8c12b77c((void *)(((char *)g_8c4db9ec + 0x15bc)), (int)(((char *)v7->f00 + 0x153c)), 0x10);
    call_8c074174((void *)(((char *)g_8c4db9ec + 0x4)));
    operation_8c074278((void *)(&g_8c4db9ec->f420));
    set_fields_8c209770((void *)(((char *)g_8c4db9ec + 0x430)));
    operation_8c2357b8((void *)(((char *)g_8c4db9ec + 0x1684)));
    operation_8c09adcc((void *)(((char *)g_8c4db9ec + 0x374)));
    call_8c028494((void *)(((char *)g_8c4db9ec + 0x4)));
    g_8c4db9ec->f420 |= 2;
    g_8c4db9ec->f16f8 = (int)(v7->f00->f154c);
    g_8c4db9ec->f00 = 0;
    v10 = (S_vv10 *)g_8c4db9ec;
    v11 = (int)0;
    v12 = (int)-1;
    v9 = (int)0x16fc;
    while (v9 > v11) {
        v13 = (int)0;
        v12 = (int)(v12 ^ *(unsigned char *)((char *)&v10->f00 + (v11)));
        while (8 > v13) {
            if (((v12 & 1)) != 0) {
                v14 = (int)((unsigned int)v12 >> 1 ^ -0x12477ce0);
            } else {
                v14 = (int)((unsigned int)v12 >> 1);
            }
            v12 = (int)v14;
            v13 = (int)(v13 + 1);
        }
        v11 = (int)(v11 + 1);
    }
    v10->f00 = v12 ^ -1;
    return 6;
}
