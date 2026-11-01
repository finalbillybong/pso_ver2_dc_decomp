/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1294d8
 * function: TContainerAncient01_v05_8c1294d8
 * language: c
 * reference size: 96 bytes
 * compiled size: 96 bytes (+0.0%)
 * differing lines: 4 of 41 reference instruction lines
 * differing bytes: 4
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
typedef struct Arg1 Arg1;
struct Arg1 {
    short f00;
};
struct Object {
    char unknown0[0x378];
    int f378;
};
extern void operation_8c05428c(void *, int, int);
extern void operation_8c129a08(void *, int, int);
void TContainerAncient01_v05_8c1294d8(Object *o, Arg1 *a1, int a2)
{
    if (a2 != 0) {
        if (a1->f00 != 1) {
            return;
        }
        o->f378 = 1;
        operation_8c05428c((void *)o, 0, 1);
        operation_8c129a08((void *)o, (int)(((char *)o + 0x3c)), 0x45);
        operation_8c129a08((void *)o, (int)(((char *)o + 0x3c)), 0x46);
        o->f378 = 1;
        return;
    }
    if (a1->f00 == 1) {
        o->f378 = 1;
    }
}
