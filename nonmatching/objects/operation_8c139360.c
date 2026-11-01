/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c139360
 * function: operation_8c139360
 * language: c
 * reference size: 160 bytes
 * compiled size: 160 bytes (+0.0%)
 * differing lines: 8 of 46 reference instruction lines
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
typedef struct Object Object;
struct Object {
    char unknown0[0x3c0];
    int f3c0;
    int f3c4;
    char unknown3c8[0x44];
    short f40c;
    short f40e;
    short f410;
    char unknown412[0x2];
    short f414;
    short f416;
    short f418;
    char unknown41a[0x2];
    int f41c;
};
extern int g_8c4d9b70;
extern int g_8c4d9b78;
extern int g_8c4d9b80;
extern int g_8c4d9b88;
extern char g_8c3131d0[];
extern void operation_8c138598(int);
extern void call_8c1003d0(void *);
void operation_8c139360(Object *o)
{
    short pm4;
    int pm3;
    int pm7;
    int pm1;
    int pm5;
    int pm6;
    void *pm2;
    short pm8;
    int pm9;
    pm6 = 0;
    o->f3c4 = 0;
    g_8c4d9b70 = -1;
    operation_8c138598(pm6);
    pm3 = (short)0;
    o->f3c0 = 4;
    pm1 = 0;
    o->f40c = (short)pm3;
    pm8 = (short)0;
    o->f40e = pm8;
    pm4 = (short)0;
    o->f410 = pm1;
    o->f414 = pm4;
    pm4 = (short)0;
    o->f416 = pm4;
    g_8c4d9b78 = 0;
    o->f41c = 1;
    pm5 = (short)2;
    pm7 = (int)(int)(int)pm5;
    o->f418 = pm7;
    g_8c4d9b80 = 0;
    pm9 = 0x440;
    pm2 = (void *)(((char *)(pm9 + g_8c3131d0)));
    call_8c1003d0(pm2);
    g_8c4d9b88 = 1;
}
