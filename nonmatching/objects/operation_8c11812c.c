/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11812c
 * function: operation_8c11812c
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 20 of 50 reference instruction lines
 * differing bytes: 13
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3103bc S_L8c3103bc;
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
struct S_L8c41cba0 {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    int f28;
};
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x7f8];
    int f830;
    int f834;
};
struct S_L8c3103bc {
    char unknown0[0x8];
    int f08;
    int f0c;
};
extern S_L8c3103bc g_8c3103bc;
extern S_L8c41cba0 g_8c41cba0;
int operation_8c11812c(Object *o)
{
    int v1;
    int v2;
    int v3;
    int v6;
    v1 = !(*(int *)((char *)&g_8c41cba0.f20 + (o->f34 * 0x3c)) & 0x200);
    if (v1 != 0) {
        v2 = (int)*(int *)((char *)&g_8c41cba0.f28 + (o->f34 * 0x3c));
        v3 = (int)1;
        if (((v2 & (&g_8c3103bc)->f0c)) == 0) {
            v3 = (int)1;
            if (!(o->f834 >= 5)) {
                v3 = (int)0;
            }
        }
        if (v3 != 0) {
            return -1;
        }
        v6 = (int)1;
        if (((v2 & (&g_8c3103bc)->f08)) == 0) {
            v6 = (int)1;
            if (!(o->f830 >= 5)) {
                v6 = (int)0;
            }
        }
        if (v6 != 0) {
            return 1;
        }
    }
    return 0;
}
