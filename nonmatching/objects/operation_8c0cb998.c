/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0cb998
 * function: operation_8c0cb998
 * language: c
 * reference size: 96 bytes
 * compiled size: 104 bytes (+8.3%)
 * differing lines: 40 of 46 reference instruction lines
 * differing bytes: 64
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
};
void operation_8c0cb998(Object *o)
{
    int z;
    char *p;
    char *q;
    int v2;
    int v3;
    int v1;
    int k;
    k = 0xffffff;
    p = (char *)o + 0x2c;
    q = (char *)o + 0x3c;
    v1 = 0;
    z = 0;
    while (2 > v1) {
        v2 = *(int *)(p + (v1 << 5));
        v3 = (unsigned char)((unsigned int)v2 >> 0x18) + -0x30;
        if (!(v3 >= 0)) {
            v3 = z;
        }
        v2 = v2 & k | v3 << 0x18;
        *(int *)(p + (v1 << 5)) = v2;
        *(int *)(q + (v1 << 5)) = v2;
        v1 = v1 + 1;
    }
    if (v3 == 0) {
        o->f04 |= 1;
    }
}
