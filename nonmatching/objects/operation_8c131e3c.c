/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c131e3c
 * function: operation_8c131e3c
 * language: c
 * reference size: 368 bytes
 * compiled size: 368 bytes (+0.0%)
 * differing lines: 52 of 138 reference instruction lines
 * differing bytes: 36
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
typedef struct S_L8c46f5a0 S_L8c46f5a0;
typedef struct S_L8c46f660 S_L8c46f660;
typedef struct S_L8c46f660_4 S_L8c46f660_4;
typedef struct Object Object;
typedef struct Block_L8c46f5a0_0 {
    float f00;
    float f04;
    float f08;
} Block_L8c46f5a0_0;
struct S_L8c46f5a0 {
    Block_L8c46f5a0_0 f00;
};
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0xc];
    float f74;
    char unknown78[0x6c];
    int fe4;
    char unknowne8[0x1c];
    int f104;
    float f108;
    Vector3 f10c;
    float f118;
    float f11c;
    float f120;
};
struct S_L8c46f660 {
    char unknown0[0x4];
    S_L8c46f660_4 *f04;
};
extern S_L8c46f5a0 g_8c46f5a0;
extern S_L8c46f660 g_8c46f660;
extern int rand(void);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c3bdf60(void *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern int normalize_vector_tiny(void *);
extern float call_8c130334(float, float);
int operation_8c131e3c(Object *o, float f0)
{
    int t1;
    int t2;
    int t3;
    float t4;
    (&g_8c46f5a0)->f00.f00 = 0.0f;
    (&g_8c46f5a0)->f00.f04 = f0;
    t1 = rand();
    (&g_8c46f5a0)->f00.f08 = o->f108 * ((float)t1 / 32768.0f);
    t2 = rand();
    (&g_8c46f660)->f04 = (S_L8c46f660_4 *)(int)((float)t2 / 32768.0f * 360.0f * 65536.0f / 360.0f);
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, (void *)((&g_8c46f660)->f04));
    call_8c3be38c(0, (void *)((void *)&g_8c46f5a0), (void *)((void *)&g_8c46f5a0));
    njPopMatrixEx_8c38ad10();
    call_8c3bdf60((void *)((void *)&g_8c46f5a0), (void *)(((char *)o + 0x54)));
    o->f10c = *(Vector3 *)&g_8c46f5a0;
    vector_sub_in_place_8c37f6f0((void *)((void *)&g_8c46f5a0), (void *)(((char *)o + 0x3c)));
    t3 = normalize_vector_tiny((void *)((void *)&g_8c46f5a0));
    if (t3 == 1) {
        o->fe4 = 1;
        o->f104 = 0;
        t4 = call_8c130334((&g_8c46f5a0)->f00.f00, (&g_8c46f5a0)->f00.f08);
        o->f64 = (int)(t4 * 65536.0f / 6.28318405f);
        o->f118 = (&g_8c46f5a0)->f00.f00 * o->f74;
        o->f11c = (&g_8c46f5a0)->f00.f04 * o->f74;
        o->f120 = (&g_8c46f5a0)->f00.f08 * o->f74;
        return 1;
    }
    return 0;
}
