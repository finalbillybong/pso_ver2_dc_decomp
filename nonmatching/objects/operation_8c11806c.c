/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11806c
 * function: operation_8c11806c
 * language: c
 * reference size: 120 bytes
 * compiled size: 120 bytes (+0.0%)
 * differing lines: 20 of 50 reference instruction lines
 * differing bytes: 13
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
    char unknown38[0x7f0];
    int f828;
    int f82c;
};
struct S_L8c3103bc {
    int f00;
    int f04;
};
extern S_L8c3103bc g_8c3103bc;
extern S_L8c41cba0 g_8c41cba0;
int operation_8c11806c(Object *o)
{
    int v1;
    int v2;
    int v3;
    int v6;
    S_L8c41cba0 *v7;
    v7 = &g_8c41cba0;
    v1 = !(*(int *)((char *)&v7->f20 + (o->f34 * 0x3c)) & 0x200);
    if (v1 != 0) {
        v2 = (int)*(int *)((char *)&v7->f28 + (o->f34 * 0x3c));
        v3 = (int)1;
        if (((v2 & (&g_8c3103bc)->f00)) == 0) {
            v3 = (int)1;
            if (!(o->f828 >= 5)) {
                v3 = (int)0;
            }
        }
        if (v3 != 0) {
            return 1;
        }
        v6 = (int)1;
        if (((v2 & (&g_8c3103bc)->f04)) == 0) {
            v6 = (int)1;
            if (!(o->f82c >= 5)) {
                v6 = (int)0;
            }
        }
        if (v6 != 0) {
            return -1;
        }
    }
    return 0;
}
