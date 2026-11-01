/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c057adc
 * function: load_assets_ene_bm3_fly_8c057adc
 * language: c
 * reference size: 292 bytes
 * compiled size: 292 bytes (+0.0%)
 * differing lines: 28 of 95 reference instruction lines
 * differing bytes: 44
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
typedef struct S_L8c467924 S_L8c467924;
typedef struct S_L8c467930 S_L8c467930;
typedef struct S_L8c467948 S_L8c467948;
typedef struct S_L8c467950 S_L8c467950;
struct S_L8c467924 {
    float f00;
    float f04;
    float f08;
};
struct S_L8c467930 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
};
struct S_L8c467948 {
    int f00;
    int f04;
};
struct S_L8c467950 {
    void *f00;
    void *f04;
    int f08;
    int f0c;
};
extern int g_8c467900;
extern int g_8c467904;
extern int g_8c467908;
extern int g_8c46790c;
extern int g_8c467910;
extern int g_8c467914;
extern int g_8c467918;
extern int g_8c46791c;
extern int g_8c467920;
extern S_L8c467924 g_8c467924;
extern S_L8c467930 g_8c467930;
extern S_L8c467948 g_8c467948;
extern S_L8c467950 g_8c467950;
extern char g_8c2f33d0[];
extern int operation_8c05bbf8(void);
extern int operation_8c059f44(void *, int);
extern int operation_8c059f04(int);
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern int record30_8c1794c8(int);
extern void operation_8c054874(void);
void load_assets_ene_bm3_fly_8c057adc(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    (&g_8c467924)->f00 = 0.0f;
    (&g_8c467924)->f04 = 0.0f;
    (&g_8c467924)->f08 = 0.0f;
    g_8c467914 = 0;
    g_8c467918 = 0;
    g_8c46791c = 0;
    g_8c467920 = 0;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        t2 = operation_8c059f44((void *)((void *)0x8c2f32f4), (int)(g_8c2f33d0 + 0x19f));
        g_8c467910 = (int)(t2);
    } else {
        t3 = operation_8c059f04((int)((void *)0x8c2f32f4));
        g_8c467910 = (int)(t3);
    }
    t4 = record24_8c17948c(1);
    g_8c467900 = (int)(t4);
    t5 = record30_8c1794a0(1);
    g_8c467904 = (int)(t5);
    t6 = block32_8c1794b4(1);
    g_8c467908 = (int)(t6);
    t7 = record30_8c1794c8(1);
    g_8c46790c = (int)(t7);
    operation_8c054874();
    (&g_8c467930)->f0c = (&g_8c467930)->f08 = (&g_8c467930)->f04 = (&g_8c467930)->f00 = 0.0f;
    (&g_8c467930)->f14 = (&g_8c467930)->f10 = 6.0f;
    (&g_8c467948)->f00 = -1;
    (&g_8c467948)->f04 = -1;
    (&g_8c467950)->f00 = (void *)&g_8c467930;
    (&g_8c467950)->f04 = (void *)&g_8c467948;
    (&g_8c467950)->f08 = 0;
    (&g_8c467950)->f0c = 2;
}
