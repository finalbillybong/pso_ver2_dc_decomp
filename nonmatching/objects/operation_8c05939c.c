/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05939c
 * function: operation_8c05939c
 * language: c
 * reference size: 136 bytes
 * compiled size: 136 bytes (+0.0%)
 * differing lines: 2 of 58 reference instruction lines
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
extern int lookup_object_by_id(unsigned short);
extern int operation_8c055254(void *);
extern int operation_8c05bbf8(void);
int operation_8c05939c(Object *o, int a1)
{
    int v2;
    int v4;
    int v3;
    int v1;
    int v7;
    int v8;
    int t1;
    int t2;
    int t3;
    v1 = (int)0x3cc;
    v2 = (int)0;
    v4 = (int)0;
    v3 = (int)0x3d4;
    while (*(int *)((char *)((char *)o + 0x0) + (v1)) > v4) {
        t1 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)((char *)((int)o + v3) + 0x0) + (v4 << 1))));
        if (t1 != 0) {
            t2 = operation_8c055254((void *)t1);
            if ((unsigned short)a1 == (unsigned short)t2) {
                v2 = (int)(v2 + 1);
            }
        }
        v4 = (int)(v4 + 1);
    }
    t3 = operation_8c05bbf8();
    if (t3 != 0) {
        v7 = (int)(4 > v2);
        return (int)(v7);
    }
    v8 = (int)(2 > v2);
    return (int)(v8);
}
