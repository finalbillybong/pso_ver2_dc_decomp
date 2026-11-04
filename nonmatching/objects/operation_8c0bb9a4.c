/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bb9a4
 * function: operation_8c0bb9a4
 * language: c
 * reference size: 276 bytes
 * compiled size: 276 bytes (+0.0%)
 * differing lines: 18 of 122 reference instruction lines
 * differing bytes: 23
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
typedef struct Arg2 Arg2;
typedef struct Arg3 Arg3;
typedef struct Arg3_10 Arg3_10;
typedef struct Arg3_14 Arg3_14;
typedef struct Arg3_18 Arg3_18;
struct Arg3 {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
    Arg3_10 *f10;
    Arg3_14 *f14;
    Arg3_18 *f18;
};
struct Arg2 {
    int f00;
    int f04;
    int f08;
};
extern void njPushMatrix_8c38ade4(void *);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void njRotateZ_8c37e02c(int, void *);
extern void njRotateX_8c37dd28(int, void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, int, int);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c0bb9a4(int a0, int a1, Arg2 *a2, Arg3 *a3, register int a4)
{
    unsigned int pm8;
    Arg3_14 *pm9;
    if (0 == a4) {
        int pm2;
        int pm5;
        Arg3_10 *pm10;
        pm8 = 0x8c400500;
        njPushMatrix_8c38ade4(((void *)pm8));
        njTranslate_8c3829bc(0, a3->f04, a3->f08, a3->f0c);
        pm5 = 0;
        njRotateZ_8c37e02c(pm5, (void *)(a3->f18));
        pm10 = a3->f10;
        njRotateX_8c37dd28(0, (void *)(pm10));
        pm9 = a3->f14;
        njRotateY_8c37df90(0, (void *)(pm9));
        pm2 = 0;
        call_8c3be280(pm2, a1, a1);
        njPopMatrixEx_8c38ad10();
        a2->f00 += (int)a3->f10;
        a2->f04 = a2->f04 + (int)a3->f14;
        a2->f08 += (int)a3->f18;
    }
    if (a4 == 1) {
        int pm1;
        int pm6;
        void *pm3;
        float pm4;
        float pm7;
        pm3 = (void *)0x8c400500;
        njPushMatrix_8c38ade4((pm3));
        njRotateY_8c37df90(0, (void *)(-(int)(a3->f14)));
        pm1 = (int)(a3->f10);
        a4 = -pm1;
        njRotateX_8c37dd28(0, (void *)(a4));
        pm6 = -(int)(a3->f18);
        njRotateZ_8c37e02c(0, (void *)(pm6));
        pm4 = a3->f08;
        pm7 = a3->f04;
        njTranslate_8c3829bc(0, -pm7, -pm4, -a3->f0c);
        call_8c3be280(0, a1, a1);
        njPopMatrixEx_8c38ad10();
        a2->f00 -= (int)a3->f10;
        a2->f04 = a2->f04 - (int)a3->f14;
        a2->f08 -= (int)a3->f18;
    }
}
