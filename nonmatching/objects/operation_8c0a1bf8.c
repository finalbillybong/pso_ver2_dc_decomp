/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a1bf8
 * function: operation_8c0a1bf8
 * language: c
 * reference size: 252 bytes
 * compiled size: 252 bytes (+0.0%)
 * differing lines: 6 of 94 reference instruction lines
 * differing bytes: 17
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
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct S_L8c46efd4 S_L8c46efd4;
typedef struct S_x1360 S_x1360;
typedef struct S_x2880 S_x2880;
struct S_L8c46efc8 {
    char f00;
    char unknown1[0x1];
    short f02;
    int f04;
    int f08;
};
struct S_L8c46efd4 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
};
struct S_x2880 {
    float f00;
};
struct S_x1360 {
    float f00;
};
extern int g_8c303298;
extern int g_8c46efc4;
extern S_L8c46efc8 g_8c46efc8;
extern S_L8c46efd4 g_8c46efd4;
extern void operation_8c0a0f00(void);
extern void call_8c384504(void *);
extern int get_current_area_8c032b10(void);
extern void call_8c37e774(void *, float, float);
extern void set_1c_8c37e76c(void *, int);
extern void call_8c382a24(void *, float, float, float);
extern void call_8c38abb8(void *, float, float, float);
extern void call_8c37e4c0(void *);
void operation_8c0a1bf8(void)
{
    int t1;
    (&g_8c46efc8)->f00 = 0;
    (&g_8c46efc8)->f02 = 0;
    (&g_8c46efc8)->f04 = 0;
    (&g_8c46efc8)->f08 = 0;
    (&g_8c46efd4)->f00 = 0.0f;
    (&g_8c46efd4)->f04 = 0.0f;
    (&g_8c46efd4)->f08 = 0.0f;
    (&g_8c46efd4)->f0c = 0.0f;
    (&g_8c46efd4)->f10 = 0.0f;
    (&g_8c46efd4)->f14 = 0.0f;
    (&g_8c46efd4)->f18 = 0.0f;
    (&g_8c46efd4)->f1c = 0.0f;
    (&g_8c46efd4)->f20 = 0.0f;
    (&g_8c46efd4)->f24 = 1.0f;
    (&g_8c46efd4)->f28 = 0.85f;
    operation_8c0a0f00();
    call_8c384504((void *)((void *)0x8c46ee84));
    t1 = get_current_area_8c032b10();
    call_8c37e774((void *)((void *)0x8c46ee84), ((S_x2880 *)(g_8c303298 + 0x14 + t1 * 0x1c))->f00, ((S_x1360 *)(g_8c303298 + 0x18 + t1 * 0x1c))->f00);
    set_1c_8c37e76c((void *)((void *)0x8c46ee84), 0x2e38);
    call_8c382a24((void *)((void *)0x8c46ee84), 0.0f, 0.0f, 0.0f);
    call_8c38abb8((void *)((void *)0x8c46ee84), 0.0f, 0.0f, -1.0f);
    call_8c37e4c0((void *)((void *)0x8c46ee84));
    g_8c46efc4 = 0;
}
