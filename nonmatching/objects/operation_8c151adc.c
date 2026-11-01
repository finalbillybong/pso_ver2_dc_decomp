/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c151adc
 * function: operation_8c151adc
 * language: c
 * reference size: 100 bytes
 * compiled size: 100 bytes (+0.0%)
 * differing lines: 4 of 36 reference instruction lines
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
typedef struct Object Object;
struct Object {
    char unknown0[0x1b6];
    unsigned short f1b6;
    char unknown1b8[0x1ec];
    int f3a4;
    short f3a8;
};
extern int call_8c18e768(int, int);
extern void operation_8c13bb4c(int, int);
void operation_8c151adc(Object *o)
{
    int v60;
    int t1;
    int t2;
    if (((o->f3a4 & 0x40000)) == 0) {
        v60 = (int)*(int *)0x8c4d9b70;
        if (v60 >= 0) {
            t1 = call_8c18e768(v60, 4);
            t2 = call_8c18e768((int)(o->f3a8), 4);
            if (t1 == t2) {
                operation_8c13bb4c((int)(o->f1b6), 0);
            }
        }
    }
}
