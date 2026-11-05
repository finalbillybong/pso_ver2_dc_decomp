/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09dc30
 * function: operation_8c09dc30
 * language: c
 * reference size: 152 bytes
 * compiled size: 152 bytes (+0.0%)
 * differing lines: 2 of 60 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct Arg2_10 Arg2_10;
typedef struct Arg2_14 Arg2_14;
typedef struct Arg2_18 Arg2_18;
struct Arg2 {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
    Arg2_10 *f10;
    Arg2_14 *f14;
    Arg2_18 *f18;
};
struct Arg1 {
    int f00;
    int f04;
    char *f08;
};
extern void njPushMatrix_8c38ade4(void *);
extern void njTranslate_8c3829bc(int, float, float, float);
extern void njRotateZ_8c37e02c(int, void *);
extern void njRotateX_8c37dd28(int, void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be280(int, int, int);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c09dc30(int a0, Arg1 *a1, Arg2 *a2)
{
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njTranslate_8c3829bc(0, a2->f04, a2->f08, a2->f0c);
    njRotateZ_8c37e02c(0, (void *)(a2->f18));
    njRotateX_8c37dd28(0, (void *)(a2->f10));
    njRotateY_8c37df90(0, (void *)(a2->f14));
    call_8c3be280(0, a0, a0);
    njPopMatrixEx_8c38ad10();
    a1->f00 += (int)a2->f10;
    a1->f04 += (int)a2->f14;
    a1->f08 += (int)a2->f18;
}
