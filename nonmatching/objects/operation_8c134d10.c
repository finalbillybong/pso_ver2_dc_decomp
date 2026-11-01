/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c134d10
 * function: operation_8c134d10
 * language: c
 * reference size: 192 bytes
 * compiled size: 192 bytes (+0.0%)
 * differing lines: 4 of 74 reference instruction lines
 * differing bytes: 4
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
typedef struct Arg1 Arg1;
typedef struct Arg1_2c Arg1_2c;
typedef struct Arg1_4 Arg1_4;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_30 S_vv1_30;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_4 S_vv2_4;
struct Arg1 {
    char unknown0[0x4];
    Arg1_4 *f04;
    char unknown8[0x24];
    Arg1_2c *f2c;
};
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    char unknown8[0x28];
    S_vv1_30 *f30;
};
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
};
extern int g_8c46f560;
extern int g_8c575570;
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void call_8c3aa702(void *);
extern void reset_state_8c391c94(void);
extern void call_8c38c0f0(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void reset_state_8c391cc4(void);
void operation_8c134d10(char *a0, Arg1 *a1)
{
    S_vv1 *v1;
    S_vv2 *v2;
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)a1 + 0x8)));
    call_8c3aa702((void *)(a1->f04));
    reset_state_8c391c94();
    g_8c46f560 = (int)(g_8c575570);
    g_8c575570 |= 0x10;
    call_8c38c0f0(a0 + 0x10c);
    njPushMatrixEx_8c38ae68();
    v1 = (S_vv1 *)a1->f2c;
    translate_current_matrix_v_8c382a40((void *)((int)v1 + 8));
    call_8c3aa702((void *)(v1->f04));
    njPopMatrixEx_8c38ad10();
    njPushMatrixEx_8c38ae68();
    v2 = (S_vv2 *)v1->f30;
    translate_current_matrix_v_8c382a40((void *)((int)v2 + 8));
    call_8c3aa702((void *)(v2->f04));
    njPopMatrixEx_8c38ad10();
    call_8c38c0f0((void *)0x8c305fd8);
    g_8c575570 = (int)(g_8c46f560);
    reset_state_8c391cc4();
    njPopMatrixEx_8c38ad10();
}
