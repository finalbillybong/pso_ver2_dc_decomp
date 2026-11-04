/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1751b8
 * function: TBoss2Joint_v109_8c1751b8
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 8 of 57 reference instruction lines
 * differing bytes: 13
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TBoss2Joint.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c319228 S_L8c319228;
typedef struct S_L8c319228_4 S_L8c319228_4;
typedef struct S_L8c319230 S_L8c319230;
typedef struct S_L8c319230_4 S_L8c319230_4;
typedef struct S_L8c319238 S_L8c319238;
typedef struct S_L8c319238_4 S_L8c319238_4;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x198];
    short f198;
    char unknown19a[0x196];
    short f330;
    char unknown332[0x76];
    int f3a8;
};
struct S_L8c319228 {
    char unknown0[0x4];
    S_L8c319228_4 *f04;
};
struct S_L8c319230 {
    char unknown0[0x4];
    S_L8c319230_4 *f04;
};
struct S_L8c319238 {
    char unknown0[0x4];
    S_L8c319238_4 *f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_L8c319228 g_8c319228;
extern S_L8c319230 g_8c319230;
extern S_L8c319238 g_8c319238;
extern int record24_8c17948c(int);
extern int record30_8c1794a0(int);
extern int block32_8c1794b4(int);
extern void call_8c05b97c(Object *, int, int, int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void call_8c17606c(int, Object *, void *);
void TBoss2Joint_v109_8c1751b8(Object *o)
{
    int t1;
    int t2;
    int pm11;
    int t4;
    S_L8c319228 *pm5;
    int pm6;
    unsigned int pm10;
    S_L8c319238 *pm8;
    unsigned short pm3;
    int pm7;
    int pm12;
    o->f3a8 = o->f3a8 | 1;
    pm5 = &g_8c319228;
    t1 = record24_8c17948c((int)((pm5)->f04));
    pm8 = &g_8c319238;
    t2 = record30_8c1794a0((int)((&g_8c319230)->f04));
    pm12 = block32_8c1794b4((int)((pm8)->f04));
    pm6 = pm12;
    call_8c05b97c(o, t1, t2, pm6);
    pm3 = (unsigned short)0x368;
    pm6 = (int)pm3;
    pm10 = (unsigned int)pm6;
    pm7 = 0x4e20;
    pm11 = pm7;
    o->f330 = (short)0x4e20;
    o->f198 = (short)pm11;
    t2 = heap_alloc_8c122700(g_8c4d97e0, pm10);
    t4 = t2;
    if (!(0 == t4)) {
        char *pm9;
        pm9 = (char *)o;
        call_8c17606c(t4, o, (void *)((0x3c + pm9)));
    }
}
