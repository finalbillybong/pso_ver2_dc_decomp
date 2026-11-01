/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d1df4
 * function: operation_8c0d1df4
 * language: c
 * reference size: 308 bytes
 * compiled size: 312 bytes (+1.3%)
 * differing lines: 22 of 120 reference instruction lines
 * differing bytes: 186
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
typedef struct S_g8c46fd78 S_g8c46fd78;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_2c S_vv2_2c;
typedef struct S_vv2_30 S_vv2_30;
struct S_vv2 {
    int f00;
    char unknown4[0x28];
    S_vv2_2c *f2c;
    S_vv2_30 *f30;
};
struct S_g8c46fd78 {
    float f00;
    float f04;
    float f08;
};
extern int g_8c46fd6c;
extern int g_8c46fd70;
extern int g_8c46fd74;
extern S_g8c46fd78 *g_8c46fd78;
extern int g_8c57553c;
extern void njPushMatrixEx_8c38ae68(void);
extern void call_8c3aba08(int, S_vv2 *, int);
extern void call_8c3be280(int, S_g8c46fd78 *, S_g8c46fd78 *);
extern void njPushMatrix_8c38ade4(void *);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void call_8c38a714(int, int);
extern void call_8c3843a8(int);
extern void njPopMatrixEx_8c38ad10(void);
extern int call_8c0d1df4(void *, int);
int operation_8c0d1df4(int a0, int a1)
{
    char *v4;
    int v1;
    int v3;
    int v7;
    S_vv2 *v2;
    v3 = (int)a1;
    v1 = (int)-0x40;
    v2 = (S_vv2 *)a0;
    do {
    njPushMatrixEx_8c38ae68();
    call_8c3aba08(0, v2, 0);
    v4 = (char *)v2->f00;
    if (v3 == g_8c46fd6c) {
        g_8c46fd78->f00 = 0.0f;
        g_8c46fd78->f04 = 0.0f;
        g_8c46fd78->f08 = 0.0f;
        call_8c3be280(0, g_8c46fd78, g_8c46fd78);
        g_8c46fd78->f04 += -4.0f;
        g_8c46fd78->f08 += 20.0f;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njTranslate_8c3829bc(0, -g_8c46fd78->f00, -g_8c46fd78->f04, -g_8c46fd78->f08);
        call_8c38a714(0, (int)(g_8c57553c + v1));
        call_8c3843a8((int)(g_8c57553c + v1));
        njPopMatrixEx_8c38ad10();
    }
    if (v3 >= g_8c46fd6c && g_8c46fd70 >= v3) {
        v7 = (int)g_8c46fd74;
        g_8c46fd74 = v7 + 0x40;
        call_8c3843a8(v7);
    }
    v3 += 1;
    if ((((int)(v4) & 0x10)) == 0) {
        v3 = call_8c0d1df4((void *)(v2->f2c), v3);
    }
    njPopMatrixEx_8c38ad10();
    v2 = (S_vv2 *)v2->f30;
    } while (v2 != 0);
    return v3;
}
