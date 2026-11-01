/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c162240
 * function: operation_8c162240
 * language: c
 * reference size: 208 bytes
 * compiled size: 208 bytes (+0.0%)
 * differing lines: 14 of 81 reference instruction lines
 * differing bytes: 15
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
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
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_4 S_vv6_4;
struct Arg1 {
    char unknown0[0x4];
    Arg1_4 *f04;
    float f08;
    float f0c;
    float f10;
    char unknown14[0x18];
    Arg1_2c *f2c;
};
struct S_vv6 {
    char unknown0[0x4];
    S_vv6_4 *f04;
    float f08;
    float f0c;
    float f10;
};
extern int g_8c46f560;
extern int g_8c575570;
extern void call_8c38c0f0(int);
extern void reset_state_8c391c94(void);
extern void njPushMatrixEx_8c38ae68(void);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void call_8c3aa702(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void reset_state_8c391cc4(void);
void operation_8c162240(int a0, Arg1 *a1, int a2)
{
    S_vv6 *v6;
    if (a2 != 1) {
        g_8c46f560 = (int)(g_8c575570);
        g_8c575570 |= 0x10;
        call_8c38c0f0((int)(a0 + 0x114));
    }
    reset_state_8c391c94();
    njPushMatrixEx_8c38ae68();
    njTranslate_8c3829bc(0, a1->f08, a1->f0c, a1->f10);
    call_8c3aa702((void *)(a1->f04));
    v6 = (S_vv6 *)a1->f2c;
    njPushMatrixEx_8c38ae68();
    njTranslate_8c3829bc(0, v6->f08, v6->f0c, v6->f10);
    call_8c3aa702((void *)(v6->f04));
    njPopMatrixEx_8c38ad10();
    njPopMatrixEx_8c38ad10();
    reset_state_8c391cc4();
    if (a2 != 1) {
        call_8c38c0f0((int)((void *)0x8c305fd8));
        g_8c575570 = (int)(g_8c46f560);
    }
}
