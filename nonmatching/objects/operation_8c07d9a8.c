/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07d9a8
 * function: operation_8c07d9a8
 * language: c
 * reference size: 128 bytes
 * compiled size: 124 bytes (-3.1%)
 * differing lines: 14 of 45 reference instruction lines
 * differing bytes: 108
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xa4];
    short f1e4;
    short f1e6;
    char unknown1e8[0x34];
    int f21c;
    char unknown220[0x4];
    int f224;
};
struct S_vv1 {
    char unknown0[0x5c8];
    int f5c8;
};
extern int call_8c18e768(int, int);
void operation_8c07d9a8(Object *o)
{
    S_vv1 *v1;
    int v2;
    int t1;
    int v3;
    t1 = call_8c18e768((int)(o->f1e6 + o->f1e4), 3);
    v3 = 0x21c;
    *(int *)((char *)o + v3) = (int)((float)(t1 + 0x28) * 30.0f);
    v1 = (S_vv1 *)o->f13c;
    if (v1 != 0) {
        v2 = *(int *)((char *)o + v3);
        if (v2 > v1->f5c8) {
            v1->f5c8 = (int)(v2);
            o->f224 |= 0x100;
        }
    }
}
