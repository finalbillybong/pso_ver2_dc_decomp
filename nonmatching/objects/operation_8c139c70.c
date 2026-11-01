/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c139c70
 * function: operation_8c139c70
 * language: c
 * reference size: 112 bytes
 * compiled size: 112 bytes (+0.0%)
 * differing lines: 2 of 45 reference instruction lines
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
extern int lookup_object_by_id(unsigned short);
extern int counter_zero_8c13d574(void *);
int operation_8c139c70(void)
{
    int v4;
    int v1;
    int v2;
    int v5;
    int t1;
    int t2;
    v1 = (int)0x3a4;
    v4 = (int)0;
    v2 = (int)0x40000;
    while (6 > v4) {
        t1 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)0x8c31311c + (v4 << 1))));
        if (t1 != 0) {
            v5 = (int)(((*(int *)((char *)((char *)t1 + 0x0) + (v1)) & v2)) != 0);
            if (v5 == 0) {
                t2 = counter_zero_8c13d574((void *)t1);
                if (t2 == 0) {
                    return 0;
                }
            }
        }
        v4 = (int)(v4 + 1);
    }
    return 1;
}
