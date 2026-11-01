/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c213340
 * function: operation_8c213340
 * language: c
 * reference size: 248 bytes
 * compiled size: 244 bytes (-1.6%)
 * differing lines: 18 of 95 reference instruction lines
 * differing bytes: 119
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_7c Arg0_7c;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x58];
    Arg0_7c *f7c;
    char unknown80[0x8];
    int f88;
    int f8c;
    int f90;
    char unknown94[0x1c];
    int fb0;
    int fb4;
};
extern float g_8c2e1608;
extern void operation_8c215f7c(void *);
extern void set_fields_8c2163e0(void *);
extern void operation_8c2163b4(void *);
extern void operation_8c2163c4(void *);
extern int operation_8c215dc4(void *);
extern void operation_8c2154f0(void *, int, int);
extern int span_8c215d8c(void *);
extern void operation_8c215510(void *, int);
void operation_8c213340(Object *o)
{
    int t2;
    int t1;
    int v2;
    char *pm4;
    int pm5;
    char *v1;
    char *pm9;
    {
        Object *base = o;
        int pm6;
        int pm8;
        char *pm7;
        char *v5;
        char *pm3;
        pm3 = 0x24 + (char *)base;
        pm4 = pm3;
        operation_8c215f7c((void *)(*(Arg0_24 **)((char *)(pm4) + (base->f20 << 2))));
        pm6 = base->f20;
        v1 = (char *)*(int *)((pm6 << 2) + (char *)(0x24 + (char *)base));
        set_fields_8c2163e0((void *)v1);
        operation_8c2163b4((void *)v1);
        pm5 = base->f20;
        pm8 = pm5 << 2;
        pm4 = 0x24 + (char *)base;
        pm7 = pm4;
        pm9 = (char *)base + 0x44;
        *(int *)((pm8) + (pm9)) = (base->fb0);
        base->f20 = 1 + base->f20;
        pm5 = base->f20 << 2;
        v2 = (*(int *)((pm7) + (pm5)));
        operation_8c2163c4((void *)v2);
        operation_8c2163b4((void *)v2);
        if (!(0 == base->f7c)) {
            t1 = operation_8c215dc4((void *)v2);
            operation_8c2154f0((void *)(base->f7c), t1, (int)((int)g_8c2e1608));
            t2 = span_8c215d8c((void *)v2);
            operation_8c215510((void *)(base->f7c), t2);
        }
        base->fb0 = (base->fb4);
        base->f88 = (base->f8c);
        v1 = (char *)base->f90;
        v5 = v1;
        base->f8c = (int)(v5);
        base->f90 = -1;
    }
}
