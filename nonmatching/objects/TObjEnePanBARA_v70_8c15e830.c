/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15e830
 * function: TObjEnePanBARA_v70_8c15e830
 * language: c
 * reference size: 64 bytes
 * compiled size: 56 bytes (-12.5%)
 * differing lines: 10 of 22 reference instruction lines
 * differing bytes: 46
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x35c];
    int f394;
};
extern void operation_8c15e92c(Object *, int);
void TObjEnePanBARA_v70_8c15e830(Object *o)
{
    if (o->f394 != 0 && o->f394 != 1 && o->f394 != 5 && o->f394 != 6) {
        goto L_8c15e84e;
L_8c15e84e:;
        o->f34 &= -0x201;
        operation_8c15e92c(o, 6);
    }
}
