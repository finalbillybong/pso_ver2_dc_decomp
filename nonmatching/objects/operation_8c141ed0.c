/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c141ed0
 * function: operation_8c141ed0
 * language: c
 * reference size: 344 bytes
 * compiled size: 324 bytes (-5.8%)
 * differing lines: 148 of 149 reference instruction lines
 * differing bytes: 231
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -20 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block52 {
    int words[13];
} Block52;
typedef struct S_g8c4da370 S_g8c4da370;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_30 S_vv3_30;
typedef struct S_vv5 S_vv5;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_42c S_vv8_42c;
typedef struct S_vv8_430 S_vv8_430;
typedef struct S_x3696 S_x3696;
typedef struct S_x3984 S_x3984;
typedef struct S_x4944 S_x4944;
typedef struct S_x5424 S_x5424;
typedef struct S_x5520 S_x5520;
typedef struct S_x5808 S_x5808;
typedef struct S_x6384 S_x6384;
typedef struct Block_vv5_0 {
    char unknown0[0x2c];
    int f2c;
    int f30;
} Block_vv5_0;
typedef struct Block_vv3_0 {
    char unknown0[0x2c];
    int f2c;
    S_vv3_30 *f30;
} Block_vv3_0;
struct S_vv8 {
    char unknown0[0x42c];
    S_vv8_42c *f42c;
    S_vv8_430 *f430;
};
struct S_vv8_42c {
    char unknown0[0x2c];
    int f2c;
    char unknown30[0x18];
    int f48;
};
struct S_vv8_430 {
    char unknown0[0x8c];
    int f8c;
};
struct S_vv5 {
    Block_vv5_0 f00;
    Block52 f34;
};
struct S_vv3 {
    Block_vv3_0 f00;
};
struct S_vv3_30 {
    Block52 f00;
};
struct S_x3984 {
    int f00;
};
struct S_x5520 {
    float f00;
};
struct S_x4944 {
    float f00;
};
struct S_x5808 {
    float f00;
};
struct S_x3696 {
    float f00;
};
struct S_x6384 {
    float f00;
};
struct S_x5424 {
    float f00;
};
extern int g_8c4d9ea0;
extern int g_8c4d9ea4;
extern int g_8c4d9ea8;
extern S_g8c4da370 *g_8c4da370;
extern char g_8c4d9eac[];
extern char g_8c4da184[];
void operation_8c141ed0(void)
{
    S_vv8 *v8;
    int v1;
    int v2;
    S_vv5 *v5;
    S_vv3 *v3;
    int v6;
    int v7;
    v8 = (S_vv8 *)g_8c4da370;
    v1 = (int)v8->f42c->f48;
    g_8c4d9ea0 = (int)(v1);
    g_8c4d9ea4 = (int)(v8->f430->f8c);
    g_8c4d9ea8 = (int)(v8->f42c->f2c);
    v2 = (int)0;
    v3 = (S_vv3 *)v1;
    v5 = (S_vv5 *)(void *)g_8c4d9eac;
    while (0xc > v2) {
        *(Block52 *)&v5->f00 = *(Block52 *)&v3->f00;
        v5->f00.f2c = (int)v5 + 0x34;
        v6 = (int)v3->f00.f2c;
        v2 = (int)(v2 + 1);
        v3 = (S_vv3 *)v6;
        v5 = (S_vv5 *)((char *)v5 + 52);
    }
    *(Block52 *)&v5->f00 = *(Block52 *)&v3->f00;
    v5->f00.f30 = (int)v5 + 0x34;
    *(Block52 *)&v5->f34 = *(Block52 *)&v3->f00.f30->f00;
    v7 = (int)0;
    while (0xe > v7) {
        ((S_x3984 *)(v7 * 0x34 + g_8c4d9eac))->f00 &= -4;
        ((S_x5520 *)(v7 * 0xc + g_8c4da184))->f00 = ((S_x4944 *)((char *)(g_8c4d9eac + 0x8) + v7 * 0x34))->f00;
        ((S_x5808 *)((char *)(g_8c4da184 + 0x4) + v7 * 0xc))->f00 = ((S_x3696 *)((char *)(g_8c4d9eac + 0xc) + v7 * 0x34))->f00;
        ((S_x6384 *)((char *)(g_8c4da184 + 0x8) + v7 * 0xc))->f00 = ((S_x5424 *)((g_8c4d9eac + 0x10) + v7 * 0x34))->f00;
        *(int *)((char *)0x8c4da22c + (v7 << 2)) = (int)(*(int *)((char *)((char *)(g_8c4d9eac + 0x1c) + 0x0) + (v7 * 0x34)));
        v7 = (int)(v7 + 1);
    }
}
