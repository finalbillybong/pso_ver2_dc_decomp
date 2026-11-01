/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c081d60
 * function: operation_8c081d60
 * language: c
 * reference size: 216 bytes
 * compiled size: 216 bytes (+0.0%)
 * differing lines: 10 of 72 reference instruction lines
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
typedef struct S_L8c469c04 S_L8c469c04;
typedef struct S_L8c469c04_8 S_L8c469c04_8;
typedef struct S_L8c469c04_8_4 S_L8c469c04_8_4;
typedef struct S_L8c469c04_8_4_4 S_L8c469c04_8_4_4;
typedef struct S_g8c469c04 S_g8c469c04;
typedef struct S_g8c469c10 S_g8c469c10;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_90 Arg0_90;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x28];
    Arg0_90 *f90;
};
struct S_L8c469c04 {
    S_g8c469c04 *f00;
    char unknown4[0x4];
    S_L8c469c04_8 *f08;
};
struct S_L8c469c04_8 {
    char unknown0[0x4];
    S_L8c469c04_8_4 *f04;
};
struct S_L8c469c04_8_4 {
    char unknown0[0x4];
    S_L8c469c04_8_4_4 *f04;
};
extern S_g8c469c10 *g_8c469c10;
extern int g_8c46f560;
extern int g_8c575570;
extern S_L8c469c04 g_8c469c04;
extern void call_8c3827d8(void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3a944a(void *);
extern void reset_state_8c391c94(void);
extern void call_8c38c0f0(void *);
extern void call_8c0345cc(void *, void *);
extern void call_8c3aa716(S_L8c469c04_8 *);
extern void reset_state_8c391cc4(void);
extern void njPopMatrixEx_8c38ad10(void);
void operation_8c081d60(Object *o)
{
    call_8c3827d8(g_8c469c10);
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(o->f64));
    call_8c3a944a((void *)((&g_8c469c04)->f00));
    reset_state_8c391c94();
    g_8c46f560 = (int)(g_8c575570);
    g_8c575570 |= 0x10;
    call_8c38c0f0((void *)(& *(int *)((char *)0x8c2fef90 + ((int)(o->f90) << 4))));
    call_8c0345cc((void *)((&g_8c469c04)->f08->f04->f04), (void *)(o->f90));
    call_8c3aa716((S_L8c469c04_8 *)((&g_8c469c04)->f08));
    call_8c38c0f0((void *)((void *)0x8c305fd8));
    g_8c575570 = (int)(g_8c46f560);
    reset_state_8c391cc4();
    njPopMatrixEx_8c38ad10();
}
