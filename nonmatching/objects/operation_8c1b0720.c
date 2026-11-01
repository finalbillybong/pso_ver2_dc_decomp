/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b0720
 * function: operation_8c1b0720
 * language: c
 * reference size: 296 bytes
 * compiled size: 300 bytes (+1.4%)
 * differing lines: 56 of 120 reference instruction lines
 * differing bytes: 134
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, constant loading; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original; compiled size
 *   differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv5 S_vv5;
typedef struct S_vv7 S_vv7;
typedef struct S_x28240 S_x28240;
typedef struct S_x29456 S_x29456;
typedef struct S_x49296 S_x49296;
struct S_x29456 {
    float f00;
};
struct S_x28240 {
    float f00;
};
struct S_x49296 {
    float f00;
};
struct S_vv5 {
    int f00;
};
struct S_vv7 {
    float f00;
    float f04;
    float f08;
    int f0c;
};
extern int g_8c4e23a0;
extern char g_8c4e23a4[];
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern int rand(void);
void operation_8c1b0720(void)
{
    int v3;
    int v2;
    int v6;
    int v1;
    int v4;
    S_vv5 *v5;
    S_vv7 *v7;
    int v8;
    int v9;
    float t1;
    float t2;
    int t3;
    int t4;
    v1 = (int)0;
    while (6 > v1) {
        v2 = (int)(int)((float)v1 * 10922.667f);
        t1 = njSin_8c37eb0c(v2);
        v3 = (int)(v1 * 0xc);
        ((S_x29456 *)(v3 + g_8c4e23a4))->f00 = t1 * 0.7f;
        ((S_x28240 *)(v3 + (char *)(g_8c4e23a4 + 0x4)))->f00 = (float)v1 * 0.0833333358f;
        t2 = njCos_8c38c154(v2);
        ((S_x49296 *)(v3 + (char *)(g_8c4e23a4 + 0x8)))->f00 = t2 * 0.7f;
        v1 = (int)(v1 + 1);
    }
    v4 = (int)(void *)0x8c4e23ec;
    v5 = (S_vv5 *)v4;
    v6 = (int)0;
    while (0x14 > v6) {
        t3 = rand();
        v5->f00 = (int)((float)t3 / 32768.0f * 65536.0f);
        v6 = (int)(v6 + 1);
        v5 = (S_vv5 *)((char *)v5 + 4);
    }
    v7 = (S_vv7 *)(void *)0x8c4e243c;
    v8 = (int)0;
    while (0x3c > v8) {
        v7->f00 = 0.0f;
        v7->f04 = 0.0f;
        v7->f08 = 0.0f;
        v7->f0c = -0x8f6f90;
        v8 = (int)(v8 + 1);
        v7 = (S_vv7 *)((char *)v7 + 16);
    }
    v9 = (int)0;
    while (0xa > v9) {
        t4 = rand();
        *(int *)((char *)0x8c4e27fc + (v9 << 2)) = (int)((float)t4 / 32768.0f * 65536.0f);
        v9 = (int)(v9 + 1);
    }
    g_8c4e23a0 = 0;
}
