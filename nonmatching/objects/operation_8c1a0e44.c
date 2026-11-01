/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a0e44
 * function: operation_8c1a0e44
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 10 of 62 reference instruction lines
 * differing bytes: 21
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
typedef struct Arg0_39c Arg0_39c;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x8c];
    float f398;
    Arg0_39c *f39c;
    char unknown3a0[0x4];
    float f3a4;
};
extern float njSin_8c37eb0c(void *);
extern void operation_8c04a43c(void *, void *, float);
extern void operation_8c05428c(void *, int, int);
extern void operation_8c05426c(void *, int, int);
void operation_8c1a0e44(Object *o)
{
    float t1;
    {
        int *pf1 = (int *)((char *)o + 0x39c);
        *pf1 = (int)((float)*pf1 + 2184.0f);
    }
    t1 = njSin_8c37eb0c((void *)(o->f39c));
    o->f398 = t1 + 20.0f;
    operation_8c04a43c((void *)o, (void *)(((char *)o + 0x3ac)), o->f398);
    o->f3a4 += 0.1f;
    if (o->f3a4 > 1.0f) {
        o->f3a4 = 1.0f;
        o->f30a = 3;
        operation_8c05428c((void *)o, 0, 0x10000004);
        operation_8c05426c((void *)o, 0, 2);
    }
}
