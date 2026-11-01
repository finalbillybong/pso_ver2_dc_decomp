/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c139d18
 * function: operation_8c139d18
 * language: c
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 2 of 54 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode switch2)
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
typedef struct S_c8c053d84 S_c8c053d84;
struct S_c8c053d84 {
    char unknown0[0x34];
    int f34;
};
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
int operation_8c139d18(void)
{
    int v4;
    int v2;
    int v3;
    int v6;
    S_c8c053d84 *t1;
    S_c8c053d84 *t2;
    t1 = lookup_object_by_id((unsigned short)(*(short *)0x8c313128));
    if (t1 != 0 && ((t1->f34 & 0x800)) != 0) {
        return 1;
    }
    v2 = (int)0x3a4;
    v4 = (int)0;
    v3 = (int)0x40000;
    while (6 > v4) {
        t2 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)0x8c31311c + (v4 << 1))));
        if (t2 != 0) {
            v6 = (int)(((*(int *)((char *)((char *)t2 + 0x0) + (v2)) & v3)) != 0);
            if (v6 == 0) {
                return 0;
            }
        }
        v4 = (int)(v4 + 1);
    }
    return 1;
}
