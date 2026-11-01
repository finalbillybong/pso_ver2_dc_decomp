/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18df98
 * function: operation_8c18df98
 * language: c
 * reference size: 104 bytes
 * compiled size: 100 bytes (-3.8%)
 * differing lines: 58 of 48 reference instruction lines
 * differing bytes: 81
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
extern void operator_delete_8c18de08(int);
void operation_8c18df98(Object *o, int a1)
{
    int v4;
    unsigned int v2;
    int v1;
    int v3;
    if (o != 0) {
        if (a1 != 0) {
            v1 = (int)*(int *)((char *)o - 0x8);
            v2 = (unsigned int)*(int *)((char *)o - 0x4);
            if (v2 > (unsigned int)0) {
                v3 = (int)(v1 * v2 + (int)o);
                v4 = (int)0;
L_8c18dfce:;
                ((void (*)(int, int))(a1))((int)(v3 - v1), -1);
                if (v2 > (unsigned int)(v4 + 1)) {
                    v3 = (int)(v3 - v1);
                    v4 = (int)(v4 + 1);
                    goto L_8c18dfce;
                }
            }
        }
        operator_delete_8c18de08((int)((int)o + -8));
    }
}
