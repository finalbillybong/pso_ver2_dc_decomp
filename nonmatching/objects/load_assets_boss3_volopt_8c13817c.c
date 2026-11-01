/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13817c
 * function: load_assets_boss3_volopt_8c13817c
 * language: c
 * reference size: 348 bytes
 * compiled size: 352 bytes (+1.1%)
 * differing lines: 16 of 117 reference instruction lines
 * differing bytes: 194
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9b60 S_g8c4d9b60;
typedef struct S_g8c4d9b60_42c S_g8c4d9b60_42c;
typedef struct S_g8c4d9b60_42c_d8 S_g8c4d9b60_42c_d8;
typedef struct S_g8c4d9b60_42c_d8_2c S_g8c4d9b60_42c_d8_2c;
struct S_g8c4d9b60 {
    char unknown0[0x42c];
    S_g8c4d9b60_42c *f42c;
};
struct S_g8c4d9b60_42c {
    char unknown0[0xd8];
    S_g8c4d9b60_42c_d8 *fd8;
    int fdc;
};
struct S_g8c4d9b60_42c_d8 {
    char unknown0[0x4];
    int f04;
    char unknown8[0x24];
    S_g8c4d9b60_42c_d8_2c *f2c;
};
struct S_g8c4d9b60_42c_d8_2c {
    char unknown0[0x4];
    int f04;
};
extern int operation_8c05bbf8(void);
extern int game_malloc_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern void operation_8c13c370(void);
extern void operation_8c13a93c(void);
extern void call_8c151f38(void);
extern void operation_8c150680(void);
extern void operation_8c151308(void);
extern void operation_8c15aa28(void);
extern void operation_8c159e60(void);
extern int record30_8c1794c8(int);
void load_assets_boss3_volopt_8c13817c(void)
{
    int t1;
    int t2;
    int t4;
    int t5;
    int t6;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = game_malloc_8c011ecc(0x440);
        if (t2 != 0) {
            call_8c03d610(t2, 5, (void *)((void *)0x8c3130e8), 0, 0, 0);
        }
        *(int *)0x8c4d9b60 = (int)(t2);
    } else {
        t2 = game_malloc_8c011ecc(0x440);
        if (t2 != 0) {
            call_8c03d610(t2, 5, (void *)((void *)0x8c313028), 0, 0, 0);
        }
        *(int *)0x8c4d9b60 = (int)(t2);
    }
    *(int *)0x8c4d9b9c = (int)(t1);
    operation_8c13c370();
    operation_8c13a93c();
    call_8c151f38();
    operation_8c150680();
    operation_8c151308();
    *(int *)0x8c4dab64 = (int)((*(S_g8c4d9b60 **)0x8c4d9b60)->f42c->fd8->f04);
    *(int *)0x8c4dab60 = (int)((*(S_g8c4d9b60 **)0x8c4d9b60)->f42c->fd8->f2c->f04);
    *(int *)0x8c4dab68 = (int)((*(S_g8c4d9b60 **)0x8c4d9b60)->f42c->fdc);
    operation_8c15aa28();
    operation_8c159e60();
    *(unsigned short *)0x8c313118 = 0xffff;
    *(int *)0x8c4d9b88 = 0;
    t4 = record30_8c1794c8(0x27);
    *(int *)0x8c4d9b8c = (int)(t4);
    t5 = record30_8c1794c8(0x28);
    *(int *)0x8c4d9b90 = (int)(t5);
    t6 = record30_8c1794c8(0x29);
    *(int *)0x8c4d9b94 = (int)(t6);
}
