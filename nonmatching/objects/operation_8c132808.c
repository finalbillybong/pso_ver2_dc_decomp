/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c132808
 * function: operation_8c132808
 * language: c
 * reference size: 284 bytes
 * compiled size: 284 bytes (+0.0%)
 * differing lines: 14 of 115 reference instruction lines
 * differing bytes: 12
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
typedef struct S_g8c4d9a84 S_g8c4d9a84;
typedef struct S_g8c4d9a84_0 S_g8c4d9a84_0;
typedef struct Arg1 Arg1;
typedef struct Arg1_2c Arg1_2c;
typedef struct Arg1_4 Arg1_4;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_2c S_vv1_2c;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_4 S_vv5_4;
struct Arg1 {
    char unknown0[0x4];
    Arg1_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x18];
    Arg1_2c *f2c;
};
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x18];
    S_vv1_2c *f2c;
};
struct S_vv5 {
    char unknown0[0x4];
    S_vv5_4 *f04;
    float f08;
    float f0c;
    float f10;
};
extern int g_8c46f560;
extern S_g8c4d9a84 *g_8c4d9a84;
extern int g_8c575570;
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void call_8c3aa702(void *);
extern void call_8c38c0f0(int);
extern void reset_state_8c391c94(void);
extern void njPopMatrixEx_8c38ad10(void);
extern void reset_state_8c391cc4(void);
void operation_8c132808(int a0, Arg1 *a1, int a2)
{
    S_vv1 *v1;
    S_vv5 *v5;
    float pm1;
    float pm2;
    float pm3;
    float t1;
    float t2;
    float t3;
    call_8c3827d8((void *)(*(S_g8c4d9a84_0 **)((char *)((char *)g_8c4d9a84 + 0x0) + (a2 << 2))));
    njPushMatrixEx_8c38ae68();
    pm1 = a1->f10;
    pm2 = a1->f08;
    njTranslate_8c3829bc(0, pm2, a1->f0c, pm1);
    call_8c3aa702((void *)(a1->f04));
    v1 = (S_vv1 *)a1->f2c;
    if (a2 != 1) {
        g_8c46f560 = (int)(g_8c575570);
        g_8c575570 |= 0x10;
        call_8c38c0f0((int)(a0 + 0x114));
    }
    reset_state_8c391c94();
    njPushMatrixEx_8c38ae68();
    t1 = v1->f10;
    t2 = v1->f0c;
    t3 = v1->f08;
    njTranslate_8c3829bc(0, t3, t2, t1);
    call_8c3aa702((void *)(v1->f04));
    v5 = (S_vv5 *)v1->f2c;
    njPushMatrixEx_8c38ae68();
    pm3 = v5->f08;
    njTranslate_8c3829bc(0, pm3, v5->f0c, v5->f10);
    call_8c3aa702((void *)(v5->f04));
    njPopMatrixEx_8c38ad10();
    njPopMatrixEx_8c38ad10();
    reset_state_8c391cc4();
    if (a2 != 1) {
        call_8c38c0f0((int)((void *)0x8c305fd8));
        g_8c575570 = (int)(g_8c46f560);
    }
    njPopMatrixEx_8c38ad10();
}
