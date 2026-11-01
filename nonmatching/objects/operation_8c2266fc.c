/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2266fc
 * function: operation_8c2266fc
 * language: c
 * reference size: 156 bytes
 * compiled size: 156 bytes (+0.0%)
 * differing lines: 4 of 53 reference instruction lines
 * differing bytes: 5
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
extern int call_8c226766(void);
int operation_8c2266fc(int a0, int a1)
{
    int c;
    c = (unsigned char)a1;
    if ((((unsigned char *)0x8c285e40)[(unsigned char)c] & 1) != 0) {
        return c - 0x41;
    }
    switch (c) {
    case 0x28:
        return 0x1a;
    case 0x29:
        return 0x1b;
    case 0x2f:
        return 0x1c;
    case 0x2e:
        return 0x1d;
    case 0x31:
        return 0x1e;
    case 0x32:
        return 0x1f;
    case 0x30:
        return 0x20;
    case 0x63:
        return 0x21;
    case 0x2d:
        return 0x22;
    case 0x2c:
        return 0x23;
    }
    return 0x24;
}
