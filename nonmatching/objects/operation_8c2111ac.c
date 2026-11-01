/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2111ac
 * function: operation_8c2111ac
 * language: c
 * reference size: 236 bytes
 * compiled size: 232 bytes (-1.7%)
 * differing lines: 0 of 48 reference instruction lines
 * differing bytes: 13
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
extern int g_8c5051e0;
extern int call_8c21121c(void);
extern int call_8c211278(void);
int operation_8c2111ac(int a0, int a1)
{
    switch (g_8c5051e0) {
    case 0:
        switch (a1) {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            return 1;
        default:
            return 2;
        case 2:
            return 3;
        case 9:
            return 5;
        case 10:
            return 7;
        case 11:
            return 0x15;
        }
    case 1:
    case 2:
    case 3:
    case 4:
        break;
    }
    switch (a1) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        return 1;
    default:
        return 2;
    case 2:
        return 3;
    case 9:
        return 5;
    case 10:
        return 0xc;
    case 11:
        return 0x15;
    }
}
