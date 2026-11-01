/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04bf14
 * function: operation_8c04bf14
 * language: c
 * reference size: 140 bytes
 * compiled size: 140 bytes (+0.0%)
 * differing lines: 20 of 57 reference instruction lines
 * differing bytes: 11
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
typedef struct S_x99232 S_x99232;
struct Object {
    int tag;
    int f04;
};
struct S_x99232 {
    short f00;
};
int operation_8c04bf14(Object *o)
{
    int off;
    char *base;
    int c;
    int i;
    off = o->f04;
    if (off == 0) {
        return 0;
    }
    base = (char *)o->tag;
    off <<= 1;
    c = *(unsigned short *)((char *)(base - 0x2) + off);
    if ((unsigned short)c >= 0x8340) {
        c -= 0xa1;
    }
    for (i = 0; i < 0x14; i++) {
        if ((unsigned short)c == (*(unsigned short *)((char *)0x8c2f1f20 + (i << 1)) & 0xffff)) {
            *(unsigned short *)((char *)(base - 0x2) + off) += 1;
            return 1;
        }
    }
    if ((unsigned short)c == 0x82a4) {
        *(unsigned short *)((char *)(base - 0x2) + off) = 0x8394;
        return 1;
    }
    return 0;
}
