/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c059424
 * function: operation_8c059424
 * language: c
 * reference size: 128 bytes
 * compiled size: 128 bytes (+0.0%)
 * differing lines: 2 of 55 reference instruction lines
 * differing bytes: 2
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
    char unknown0[0x3cc];
    int f3cc;
};
extern int lookup_object_by_id(unsigned short);
void operation_8c059424(Object *o, int a1)
{
    int v3;
    int v2;
    int v12;
    int v1;
    int t1;
    v1 = (int)0x3d4;
    v12 = (int)0;
    goto L_8c05947e;
    v2 = (int)0;
L_8c05943a:;
    v3 = (int)(v2 << 1);
    t1 = lookup_object_by_id((unsigned short)(*(unsigned short *)((char *)((char *)((int)o + v1) + 0x0) + (v3))));
    if (t1 == a1) {
        *(int *)((char *)o + 0x3cc) -= 1;
        *(short *)((char *)((char *)o + 0x3d4) + (v3)) = *(volatile unsigned short *)((char *)((char *)o + 0x3d4) + (o->f3cc << 1)) & 0xffff;
        *(unsigned short *)((char *)((char *)o + 0x3d4) + (o->f3cc << 1)) = 0xffff;
        return;
    }
    v12 = (int)(v2 + 1);
L_8c05947e:;
    v2 = (int)v12;
    if (6 > v12) {
        goto L_8c05943a;
    }
}
