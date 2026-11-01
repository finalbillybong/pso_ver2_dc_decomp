/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c184c00
 * function: operation_8c184c00
 * language: c
 * reference size: 40 bytes
 * compiled size: 40 bytes (+0.0%)
 * differing lines: 18 of 17 reference instruction lines
 * differing bytes: 9
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
void operation_8c184c00(Object *o)
{
    int v2;
    int v1;
    int v4;
    v1 = (int)0xffff;
    v4 = (int)0;
    goto L_8c184c1a;
    v2 = (int)0;
L_8c184c10:;
    *(short *)((char *)((char *)o + 0x78) + (v2 << 2)) = v1;
    *(short *)((char *)((char *)o + 0x7a) + (v2 << 2)) = -1;
    v4 = (int)(v2 + 1);
L_8c184c1a:;
    v2 = (int)v4;
    if (4 > v4) {
        goto L_8c184c10;
    }
}
