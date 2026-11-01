/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07b2d4
 * function: operation_8c07b2d4
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 44 of 54 reference instruction lines
 * differing bytes: 27
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
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x815];
    char f815;
    char f816;
    char unknown817[0xb];
    short f822;
    short f824;
};
struct S_vv3 {
    char f00;
    char f01;
    char f02;
    char f03;
    char unknown4[0xc];
};
int operation_8c07b2d4(Object *o)
{
    char v5;
    char v4;
    int v6;
    S_vv3 *v3;
    if (((o->f816 & 0xa)) != 0) {
        return 0;
    }
    for (v3 = (S_vv3 *)(void *)0x8c2fe624; (v5 = v3->f00) >= 0 && (v4 = o->f815) >= v5; v3++) {
        if (v4 == v5) {
            v6 = (int)o->f824;
            if (v6 == v3->f01 || v6 == v3->f02 || o->f822 == v3->f03) {
                return 1;
            }
        }
    }
    return 0;
}
