/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18e40c
 * function: operation_8c18e40c
 * language: c
 * reference size: 124 bytes
 * compiled size: 120 bytes (-3.2%)
 * differing lines: 36 of 62 reference instruction lines
 * differing bytes: 99
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char tag;
    unsigned char f01;
    unsigned char f02;
    unsigned char f03;
};
struct Arg1 {
    int f00;
};
int operation_8c18e40c(Object *o, Arg1 *a1)
{
    char v15;
    unsigned char v1;
    int v2;
    v15 = (char)o->tag;
    if (((v15 & 1)) == 0) {
        a1->f00 = v15 >> 1;
        v2 = (int)&o->f01;
    } else {
        v1 = (unsigned char)o->f01;
        if (((v15 & 2)) == 0) {
            a1->f00 = v15 >> 1 >> 1 << 8 | v1;
            v2 = (int)&o->f02;
        } else {
            if (((v15 & 4)) == 0) {
                a1->f00 = v15 >> 1 >> 1 >> 1 << 0x10 | v1 << 8 | o->f02;
                v2 = (int)&o->f03;
            } else {
                a1->f00 = v15 >> 1 >> 1 >> 1 << 0x18 | v1 << 0x10 | o->f02 << 8 | o->f03;
                v2 = (int)((char *)o + 0x4);
            }
        }
    }
    return (int)(v2);
}
