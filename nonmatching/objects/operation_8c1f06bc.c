/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1f06bc
 * function: operation_8c1f06bc
 * language: c
 * reference size: 168 bytes
 * compiled size: 168 bytes (+0.0%)
 * differing lines: 14 of 59 reference instruction lines
 * differing bytes: 14
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
typedef struct S_g8c2e72d8 S_g8c2e72d8;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2d2];
    short f30a;
    short f30c;
    char unknown30e[0xa];
    float f318;
    float f31c;
    float f320;
};
extern void operation_8c1e8e60(int, short, int);
extern void operation_8c05428c(void *, int, int);
extern void operation_8c02a764(int, int);
extern int operation_02c350(void *);
extern void operation_021f88(void *, int, short);
void operation_8c1f06bc(Object *o)
{
    int v1;
    int t1;
    operation_8c1e8e60((int)o, o->f30a, 6);
    o->f320 = 0.0f;
    o->f31c = 0.0f;
    o->f318 = 0.0f;
    operation_8c05428c((void *)o, 0, 1);
    o->f30c = 0;
    operation_8c02a764((int)o, 5);
    v1 = (int)0;
    if (((o->f34 & 0x100000)) != 0) {
        v1 = (int)1;
    }
    t1 = operation_02c350((void *)o);
    operation_021f88((void *)o, 0x14, *(short *)((char *)((char *)*(S_g8c2e72d8 **)((char *)0x8c2e72d8 + (v1 << 2)) + 0x0) + ((short)t1 << 1)));
}
