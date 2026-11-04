/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b0720
 * function: operation_8c1b0720
 * language: c
 * reference size: 296 bytes
 * compiled size: 300 bytes (+1.4%)
 * differing lines: 52 of 120 reference instruction lines
 * differing bytes: 127
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
extern int g_8c4e23ec[];
extern char g_8c4e243c[];
extern int g_8c4e27fc[];
void operation_8c1b0720(void)
{
    int i;
    int a;
    int off;
    int n;
    int *p;
    S_vv7 *q;
    int j;
    int c;
    float t1;
    float t2;
    int t3;
    int t4;
    for (i = 0; 6 > i; i++) {
        a = (int)((float)i * 10922.667f);
        t1 = njSin_8c37eb0c(a);
        off = i * 0xc;
        ((S_x29456 *)(off + g_8c4e23a4))->f00 = t1 * 0.7f;
        ((S_x28240 *)(off + (char *)(g_8c4e23a4 + 0x4)))->f00 = (float)i * 0.0833333358f;
        t2 = njCos_8c38c154(a);
        ((S_x49296 *)(off + (char *)(g_8c4e23a4 + 0x8)))->f00 = t2 * 0.7f;
    }
    p = g_8c4e23ec;
    for (n = 0; 0x14 > n; n++) {
        t3 = rand();
        *p = (int)((float)t3 / 32768.0f * 65536.0f);
        p++;
    }
    q = (S_vv7 *)g_8c4e243c;
    c = -0x8f6f90;
    for (j = 0; 0x3c > j; j++) {
        q->f00 = 0.0f;
        q->f04 = 0.0f;
        q->f08 = 0.0f;
        q->f0c = c;
        q++;
    }
    for (i = 0; 0xa > i; ) {
        t4 = rand();
        *(int *)((char *)g_8c4e27fc + (i++ << 2)) = (int)((float)t4 / 32768.0f * 65536.0f);
    }
    g_8c4e23a0 = 0;
}
