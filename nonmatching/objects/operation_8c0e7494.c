/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e7494
 * function: operation_8c0e7494
 * language: c
 * reference size: 196 bytes
 * compiled size: 196 bytes (+0.0%)
 * differing lines: 6 of 19 reference instruction lines
 * differing bytes: 59
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x136];
    unsigned char f136;
    char unknown137[0x1];
    unsigned char f138;
};
int operation_8c0e7494(Object *o)
{
    int v4;
    if (o != 0) {
        v4 = (int)o->f138;
        switch ((unsigned char)o->f136) {
        case 0:
            if ((v4) != 0) {
                if (v4 == 1) {
                    goto L_8c0e74f6;
                }
                if (v4 == 2) {
                    goto L_8c0e74fa;
                }
                return -1;
            }
            return 0;
L_8c0e74f6:;
            return 1;
L_8c0e74fa:;
            return 2;
        case 1:
            if ((v4) != 0) {
                if (v4 == 1) {
                    goto L_8c0e7514;
                }
                if (v4 == 2) {
                    goto L_8c0e7518;
                }
                return -1;
            }
            return 3;
L_8c0e7514:;
            return 4;
L_8c0e7518:;
            return 5;
        case 6:
            if ((v4) != 0) {
                if (v4 == 1) {
                    goto L_8c0e752e;
                }
                return -1;
            }
            return 6;
L_8c0e752e:;
            return 7;
        case 3:
            return 8;
        case 4:
            return 9;
        case 5:
            return 0xa;
        case 7:
            return 0xb;
        case 8:
            return 0xc;
        case 2:
        default:
            return -1;
        }
    }
    return -1;
}
