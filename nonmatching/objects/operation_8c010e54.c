/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c010e54
 * function: operation_8c010e54
 * language: c
 * reference size: 136 bytes
 * compiled size: 140 bytes (+2.9%)
 * differing lines: 10 of 47 reference instruction lines
 * differing bytes: 86
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    short f28;
    char unknown2a[0x1];
    char f2b;
    char unknown2c[0x84c];
    short f878;
    short f87a;
    int f87c;
    void *f880;
};
extern int g_8c4621a8;
extern void memset_8c12b880(void *, int, int);
extern void call_8c3ca534(int, void *, int);
extern void operation_8c010de0();
void operation_8c010e54(Object *o)
{
    char *pm6;
    int pm2;
    short pm5;
    int pm4;
    int pm3;
    pm3 = (int)(int)(short)((int)(int)o->f28);
    if (pm3 != -1) {
        char *pm7;
        signed char pm1;
        int pm8;
        int pm9;
        memset_8c12b880((void *)(((char *)o + 0x74)), 0, 0x800);
        pm7 = (char *)o;
        pm6 = pm7;
        pm8 = 1;
        o->f2b = (char)pm8;
        o->f878 = (int)(int)(int)o->f28;
        pm4 = 0x800;
        pm9 = 0x74;
        pm2 = (int)((pm9 + pm6));
        pm5 = (short)pm4;
        pm4 = pm2;
        pm3 = pm4;
        o->f87a = (short)pm5;
        o->f87c = pm3;
        pm1 = (char)(char)(1);
        pm4 = (int)pm1;
        pm2 = pm4;
        o->f880 = operation_8c010de0;
        pm3 = pm2;
        g_8c4621a8 = pm3;
        call_8c3ca534(0x4119, (void *)(&o->f878), 0);
        g_8c4621a8 = 0;
    }
}
