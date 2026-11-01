/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07ff4c
 * function: operation_8c07ff4c
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 54 of 61 reference instruction lines
 * differing bytes: 36
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
typedef struct S_vv6 S_vv6;
typedef struct S_x16384 S_x16384;
typedef struct S_x16656 S_x16656;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xf2];
    int ff8;
};
struct S_vv6 {
    float f00;
};
struct S_x16656 {
    float f00;
};
struct S_x16384 {
    float f00;
};
void operation_8c07ff4c(Object *o)
{
    int v4;
    S_vv6 *v6;
    int v3;
    int v1;
    int v2;
    unsigned int v5;
    v1 = (int)((char *)o + 0x30);
    v2 = (int)((char *)o + 0x34);
    v3 = (int)((char *)o + 0x28);
    v4 = (int)0;
    v5 = (unsigned int)0;
    while ((unsigned int)o->ff8 > v5) {
        if (*(char *)((char *)((char *)o + 0x20) + (v5 * 0x18)) != 0) {
            v6 = (S_vv6 *)(v3 + v5 * 0x18);
            v6->f00 = ((S_x16656 *)(v2 + v5 * 0x18))->f00 + v6->f00;
            if (v6->f00 < ((S_x16384 *)(v1 + v5 * 0x18))->f00) {
                *(char *)((char *)((char *)o + 0x20) + (v5 * 0x18)) = 0;
            } else {
                v4 = (int)(v4 + 1);
            }
        }
        v5 = (unsigned int)(v5 + 1);
    }
    if (v4 == 0) {
        o->f04 |= 1;
    }
}
