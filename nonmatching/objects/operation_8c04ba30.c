/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04ba30
 * function: operation_8c04ba30
 * language: c
 * reference size: 124 bytes
 * compiled size: 124 bytes (+0.0%)
 * differing lines: 22 of 53 reference instruction lines
 * differing bytes: 27
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on menu to registration screen; offline start: new character to Pioneer 2
 *   (emulator A/B: RAM, trace and first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Arg1 Arg1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_s1 S_vv2_s1;
typedef struct S_vv3 S_vv3;
struct S_vv2 {
    char f00;
    char f01;
};
struct Arg1 {
    int f00;
};
struct S_vv2_s1 {
    char unknown0[0x1];
    char f01;
};
struct S_g8c46fe20 {
    char unknown0[0x28];
    int f28;
};
struct S_vv3 {
    int f00;
};
extern S_g8c46fe20 *g_8c46fe20;
extern int g_8c284b00[];
char *operation_8c04ba30(char *p, int *a1, int *a2)
{
    while (*p == 9) {
        p++;
        switch (*p) {
        case 'J':
            *a1 = 1;
            p++;
            break;
        case 'E':
            *a1 = 0;
            p++;
            break;
        case 'C':
            if (a2 != 0) {
                if (p[1] == 'G') {
                    *a2 = g_8c46fe20 == 0 ? -0x1600 : g_8c46fe20->f28;
                } else {
                    *a2 = *(int *)((char *)(g_8c284b00 - 0x30) + (p[1] << 2));
                }
            }
            p += 2;
            break;
        }
    }
    return p;
}
