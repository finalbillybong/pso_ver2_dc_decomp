/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0de19c
 * function: operation_8c0de19c
 * language: c
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 6 of 57 reference instruction lines
 * differing bytes: 6
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
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_5c Arg0_5c;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char unknown0[0x86];
    unsigned short f86;
};
extern S_g8c418248 *g_8c418248;
extern int lookup_low_id(int);
extern float call_8c0de220(int, int, int);
int operation_8c0de19c(Object *o, int a1)
{
    int v2;
    float v3;
    int v1;
    int t1;
    float pm7;
    int pm8;
    float pm4;
    int pm6;
    pm8 = lookup_low_id((int)g_8c418248);
    t1 = pm8;
    if (!(0 != t1)) {
        return 4;
    }
    v1 = (int)4;
    pm4 = call_8c0de220((int)(o), t1, a1);
    pm6 = 0;
    pm7 = (float)pm4;
    v2 = (int)pm6;
    v3 = pm7;
    while (4 > v2) {
        char *pm5;
        S_vv4 *v4;
        pm5 = (char *)o;
        v4 = (S_vv4 *)*(Arg0_5c **)((v2 << 2) + (char *)(0x5c + pm5));
        if (v4 != 0) {
            float t2;
            a1 = (int)(o);
            t2 = call_8c0de220(a1, t1, ((int)v4->f86));
            if (!(v3 > t2)) {
                v3 = (float)t2;
                v1 = (int)v2;
            }
        }
        v2 += 1;
    }
    return (int)(v1);
}
