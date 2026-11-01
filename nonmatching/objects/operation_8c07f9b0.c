/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07f9b0
 * function: operation_8c07f9b0
 * language: c
 * reference size: 156 bytes
 * compiled size: 156 bytes (+0.0%)
 * differing lines: 16 of 60 reference instruction lines
 * differing bytes: 50
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
    char unknown0[0x13c];
    int f13c;
};
extern void operation_8c1ace6c(void *);
extern int call_8c207378(void *, int);
extern void operation_8c1acdf8(int, int);
void operation_8c07f9b0(Object *o)
{
    char *pm4;
    int pm7;
    int v2;
    int pm6;
    int v6;
    int v1;
    int v3;
    int v4;
    void *pm2;
    int t1;
    int pm3;
    int v5;
    int pm9;
    int pm13;
    char *pm5;
    int pm12;
    int pm10;
    char *pm11;
    char pm8;
    pm10 = 0x4c0 + o->f13c;
    pm2 = (void *)(pm10);
    operation_8c1ace6c(pm2);
    pm3 = 0x138;
    v2 = 0;
    v3 = 0x13c;
    v4 = 0x418;
    pm10 = -1;
    pm7 = 0x4c0;
    pm13 = pm10;
    pm6 = (pm13);
    v6 = pm6;
    v1 = pm3;
    v5 = pm7;
    while (v2 != 3) {
        pm2 = (void *)(((char *)o + 0x1e4));
        pm12 = call_8c207378(pm2, v2);
        pm9 = pm12;
        pm6 = pm9;
        t1 = pm6;
        if (!(t1 == v6)) {
            char *pm14;
            short s;
            s = t1;
            pm3 = v4 + ((*(int *)((((char *)o + 0x0)) + (v3))));
            pm11 = (char *)o;
            pm8 = (char)(*(unsigned char *)((pm11 + 0x0) + (v1)));
            pm14 = (char *)(0x88 + (char *)(pm3));
            pm14[s] = pm8;
            pm13 = *(int *)((char *)(0x0 + (char *)o) + (v3));
            pm7 = ((pm13) + v5);
            operation_8c1acdf8(pm7, t1);
        }
        v2 += 1;
    }
}
