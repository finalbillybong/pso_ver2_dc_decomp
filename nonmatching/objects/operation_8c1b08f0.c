/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b08f0
 * function: operation_8c1b08f0
 * language: c
 * reference size: 248 bytes
 * compiled size: 248 bytes (+0.0%)
 * differing lines: 12 of 93 reference instruction lines
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
typedef struct S_g8c4e27fc S_g8c4e27fc;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_0 S_vv6_0;
typedef struct S_vv6_4 S_vv6_4;
struct S_vv6 {
    S_vv6_0 *f00;
    S_vv6_4 *f04;
};
extern char g_8c4e23a4[];
extern void njPushMatrixEx_8c38ae68(void);
extern void njUnitMatrix_8c37b5c4(int);
extern float njSin_8c37eb0c(void *);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void njRotateX_8c37dd28(int, void *);
extern void call_8c3be280(int, int, int);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c1b08f0(void)
{
    int v8;
    char *v7;
    char *v9;
    int v5;
    int v4;
    int *v6;
    int v3;
    int off;
    float t1;
    v6 = (int *)0x8c4e23ec;
    v7 = (char *)0x8c4e243c;
    njPushMatrixEx_8c38ae68();
    v3 = 0x1333;
    v4 = 0x555;
    for (v5 = 0; v5 < 0xa; v5++) {
        njUnitMatrix_8c37b5c4(0);
        off = v5 << 2;
        t1 = njSin_8c37eb0c(*(void **)((char *)0x8c4e27fc + off));
        njTranslate_8c3829bc(0, 0.0f, t1 * 6.0f, 0.0f);
        *(int *)((char *)0x8c4e27fc + off) += 0x800;
        *v6 += v3;
        njRotateX_8c37dd28(0, (void *)*v6++);
        *v6 += v4;
        njRotateX_8c37dd28(0, (void *)*v6++);
        v9 = v7;
        for (v8 = 0; v8 < 6; v8++) {
            call_8c3be280(0, (int)(v8 * 0xc + g_8c4e23a4), (int)v9);
            v9 += 0x10;
        }
        v7 = v9;
    }
    njPopMatrixEx_8c38ad10();
}
