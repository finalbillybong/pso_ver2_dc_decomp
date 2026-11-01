/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c05b97c
 * function: operation_8c05b97c
 * language: c
 * reference size: 96 bytes
 * compiled size: 96 bytes (+0.0%)
 * differing lines: 4 of 38 reference instruction lines
 * differing bytes: 2
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
struct Object {
    char unknown0[0x198];
    short f198;
    short f19a;
    char unknown19c[0x194];
    short f330;
    short f332;
};
extern int call_8c0121a0(Object *, int);
int operation_8c05b97c(Object *o, int a1)
{
    int v4 = o->f198;
    int v3 = o->f330;
    int v2 = o->f19a;
    int v1 = o->f332;
    int t1 = call_8c0121a0(o, a1);
    o->f198 = v4;
    o->f330 = v3;
    o->f19a = v2;
    o->f332 = v1;
    return t1;
}
