/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07bb94
 * function: operation_8c07bb94
 * language: c
 * reference size: 108 bytes
 * compiled size: 108 bytes (+0.0%)
 * differing lines: 4 of 41 reference instruction lines
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
    char unknown0[0x390];
    int f390;
    int f394;
};
extern int operation_8c012a14(int);
extern void operation_8c0797dc(void *);
void operation_8c07bb94(Object *o)
{
    int v3;
    int v14;
    int v1;
    int v2;
    int t1;
    v1 = (int)0x3a0;
    v2 = (int)0x398;
    v14 = (int)0;
    goto L_8c07bbc6;
    v3 = (int)0;
L_8c07bba8:;
    t1 = operation_8c012a14((int)(*(unsigned short *)((char *)((char *)((int)o + v1) + 0x0) + (v3 << 1))));
    if (t1 != 0) {
        operation_8c0797dc((void *)t1);
    }
    v14 = (int)(v3 + 1);
L_8c07bbc6:;
    v3 = (int)v14;
    if (*(int *)((char *)((char *)o + 0x0) + (v2)) > v14) {
        goto L_8c07bba8;
    }
    o->f394 = 0x78;
    o->f390 = 4;
}
