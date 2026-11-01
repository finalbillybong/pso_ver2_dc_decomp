/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1a0db4
 * function: operation_8c1a0db4
 * language: c
 * reference size: 144 bytes
 * compiled size: 144 bytes (+0.0%)
 * differing lines: 10 of 52 reference instruction lines
 * differing bytes: 21
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
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
    float f3a0;
};
extern float njSin_8c37eb0c(void *);
extern void operation_8c04a43c(void *, void *, float);
void operation_8c1a0db4(Object *o)
{
    float t1;
    {
        int *pf1 = (int *)((char *)o + 0x39c);
        *pf1 = (int)((float)*pf1 + 2184.0f);
    }
    t1 = njSin_8c37eb0c((void *)(o->f39c));
    o->f398 = t1 + 20.0f;
    operation_8c04a43c((void *)o, (void *)(((char *)o + 0x3ac)), o->f398);
    {
        float *pf2 = &o->f3a0;
        *pf2 += 0.1f;
        if (*pf2 > 1.0f) {
            *pf2 = 1.0f;
            o->f30a = 2;
        }
    }
}
