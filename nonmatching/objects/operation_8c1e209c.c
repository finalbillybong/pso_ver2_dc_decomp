/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e209c
 * function: operation_8c1e209c
 * language: c
 * reference size: 116 bytes
 * compiled size: 112 bytes (-3.4%)
 * differing lines: 14 of 47 reference instruction lines
 * differing bytes: 69
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction or operand order, constant loading; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original; compiled size
 *   differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char f00;
    unsigned char f01;
};
int operation_8c1e209c(int a0, char *s)
{
    unsigned short k1;
    unsigned short k2;
    unsigned int top;
    unsigned int lead;
    unsigned int mask;
    int c;
    char ch;
    k1 = 0x814a;
    k2 = 0x814b;
    mask = 0xe0;
    lead = 0x80;
    top = 0xff;
    while (*s != 0) {
        c = *s++;
        if (((unsigned short)c & mask) == lead || ((unsigned short)c & mask) == mask) {
            ch = *s++;
            c = ((unsigned short)c << 8) | (unsigned char)ch;
        }
        if ((unsigned short)c == k1) {
            return 1;
        }
        if ((unsigned short)c == k2) {
            return 1;
        }
        if (!((unsigned short)c < mask) && !(top < (unsigned short)c)) {
            return 1;
        }
    }
    return 0;
}
