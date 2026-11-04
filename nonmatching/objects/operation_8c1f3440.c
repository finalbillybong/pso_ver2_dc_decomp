/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f3440
 * function: operation_8c1f3440
 * language: c
 * reference size: 176 bytes
 * compiled size: 200 bytes (+13.6%)
 * differing lines: 98 of 69 reference instruction lines
 * differing bytes: 185
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +24 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char tag;
    char f01;
};
extern int hs_8c1f74b0(int);
int operation_8c1f3440(Object *o, int a1)
{
    int v3;
    unsigned short v4;
    int v5;
    int t1;
    {
        Object *base = o;
        if (((unsigned short)a1 & 0xff00) != 0x2300 && (((unsigned short)a1 & 0xff00)) != 0) {
            if (((unsigned short)a1 & 0xff00) == 0x2500) {
                goto L_8c1f3474;
            }
            if (((unsigned short)a1 & 0xff00) == 0x2400) {
                v3 = (int)a1;
                goto L_8c1f3478;
            }
            v3 = (int)a1;
            if (((unsigned short)a1 & 0xff00) == 0x2100) {
                goto L_8c1f3478;
            }
        } else {
            base->tag = a1;
            goto L_8c1f34e6;
L_8c1f3474:;
            v3 = (int)(a1 & 0x24ff);
L_8c1f3478:;
            t1 = hs_8c1f74b0(v3);
            if ((int)(unsigned char)t1 >= 0x98 && !((int)(unsigned char)t1 >= 0xf7)) {
                goto L_8c1f34b8;
            }
            base->tag = t1;
            goto L_8c1f34e6;
L_8c1f34b8:;
            v4 = (unsigned short)*(unsigned short *)((char *)0x8c2897d2 + ((unsigned char)t1 + -0x98 << 1));
            base->tag = *(unsigned short *)((char *)0x8c2897d2 + ((unsigned char)t1 + -0x98 << 1));
            if (((0x8000 & v4)) != 0) {
                v5 = (int)0xde;
            } else {
                if (((v4 & 0x4000)) == 0) {
                    goto L_8c1f34e6;
                }
                v5 = (int)0xdf;
            }
            base->f01 = v5;
            return 2;
        }
        base->tag = 0x20;
    }
L_8c1f34e6:;
    return 1;
}
