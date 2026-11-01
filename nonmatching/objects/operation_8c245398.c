/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c245398
 * function: operation_8c245398
 * language: c
 * reference size: 236 bytes
 * compiled size: 236 bytes (+0.0%)
 * differing lines: 4 of 104 reference instruction lines
 * differing bytes: 12
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
typedef struct S_c8c245484 S_c8c245484;
typedef struct S_g8c510e20 S_g8c510e20;
typedef struct S_g8c510e30 S_g8c510e30;
typedef struct Object Object;
struct S_g8c510e30 {
    int f00;
    char unknown4[0x4];
    int f08;
};
struct Object {
    char unknown0[0x6];
    short f06;
    char unknown8[0x24];
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    short f40;
    short f42;
};
struct S_c8c245484 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    short f14;
    short f16;
    char unknown18[0x4];
    short f1c;
    short f1e;
};
extern S_g8c510e20 *g_8c510e20;
extern S_g8c510e30 *g_8c510e30;
extern S_c8c245484 *operation_8c245484(void *, int, int);
extern int next_random_state(void *);
void operation_8c245398(Object *o, int a1)
{
    int v1;
    unsigned int r;
    unsigned int v2;
    int v12;
    S_c8c245484 *t1;
    int t2;
    t1 = operation_8c245484((void *)((int)g_8c510e30 + g_8c510e30->f00), (int)(g_8c510e30->f08), a1);
    if (t1 != 0) {
        o->f2c = t1->f00;
        o->f30 = t1->f04;
        o->f34 = t1->f08;
        o->f38 = t1->f0c;
        o->f3c = t1->f10;
        o->f40 = t1->f16;
        o->f42 = t1->f14;
        v1 = (int)(t1->f1e + 1);
        v2 = (unsigned int)t1->f1c;
        t2 = next_random_state(g_8c510e20);
        r = (unsigned int)((float)(unsigned int)v1 * (float)(unsigned int)t2 / 4294967296.0f);
        if (v2 > r) {
            v12 = v2;
        } else {
            v12 = r;
        }
        o->f06 = v12;
    }
}
