/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c118ea4
 * function: operation_8c118ea4
 * language: c
 * reference size: 184 bytes
 * compiled size: 184 bytes (+0.0%)
 * differing lines: 2 of 85 reference instruction lines
 * differing bytes: 4
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
typedef struct S_x33344 S_x33344;
typedef struct S_x51600 S_x51600;
typedef struct S_x5888 S_x5888;
struct Object {
    int tag;
    int f04;
    int f08;
    float f0c;
    float f10;
    float f14;
};
struct S_x33344 {
    float f00;
};
struct S_x51600 {
    float f00;
};
struct S_x5888 {
    float f00;
};
extern float floor_e(float);
extern float errno_wrap_8c130390(float);
extern int operator_new_8c18de4c(int);
Object *operation_8c118ea4(Object *o, int a1, float f0, float f1, float f2)
{
    int v1;
    float t1;
    float t2;
    int n;
    o->f14 = f2;
    o->f04 = a1;
    t1 = floor_e(f0 / o->f14);
    o->f0c = t1;
    t2 = errno_wrap_8c130390(f1 / o->f14);
    o->f10 = t2;
    o->f08 = (int)(o->f10 - o->f0c + 1.0f);
    o->f0c *= o->f14;
    o->f10 *= o->f14;
    n = o->f08 * o->f04;
    o->tag = operator_new_8c18de4c(n * 0xc);
    v1 = (int)0;
    while (n > v1) {
        ((S_x33344 *)((int)o->tag + v1 * 0xc))->f00 = 0.0f;
        ((S_x51600 *)((int)o->tag + 4 + v1 * 0xc))->f00 = 0.0f;
        ((S_x5888 *)((int)o->tag + 8 + v1 * 0xc))->f00 = 0.0f;
        v1 = (int)(v1 + 1);
    }
    return o;
}
