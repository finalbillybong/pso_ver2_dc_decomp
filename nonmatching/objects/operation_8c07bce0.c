/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07bce0
 * function: operation_8c07bce0
 * language: c
 * reference size: 96 bytes
 * compiled size: 96 bytes (+0.0%)
 * differing lines: 4 of 40 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode switch2ext)
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
extern int operation_8c012a14(int);
extern int operation_8c07a948(void *);
int operation_8c07bce0(Object *o)
{
    int v3;
    int v1;
    int v2;
    int t1;
    int t2;
    v1 = (int)0x3a0;
    v3 = (int)0;
    v2 = (int)0x398;
    while (*(int *)((char *)((char *)o + 0x0) + (v2)) > v3) {
        t1 = operation_8c012a14((int)(*(unsigned short *)((char *)((char *)((int)o + v1) + 0x0) + (v3 << 1))));
        if (t1 != 0) {
            t2 = operation_8c07a948((void *)t1);
            if (t2 == 0) {
                return 0;
            }
        }
        v3 = (int)(v3 + 1);
    }
    return 1;
}
