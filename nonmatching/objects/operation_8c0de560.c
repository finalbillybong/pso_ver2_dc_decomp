/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0de560
 * function: operation_8c0de560
 * language: c
 * reference size: 260 bytes
 * compiled size: 272 bytes (+4.6%)
 * differing lines: 42 of 118 reference instruction lines
 * differing bytes: 244
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    float tag;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float dispatch;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    int f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
};
struct Arg1 {
    float f00;
    float f04;
};
struct Arg2 {
    float f00;
    float f04;
};
extern int g_8c46fe40;
int operation_8c0de560(Object *o, Arg1 *a1, Arg2 *a2, float f0)
{
    o->tag = a1->f00;
    o->f04 = a1->f04;
    o->f08 = a2->f00;
    o->f0c = a2->f04;
    o->f10 = a1->f00 + 9.0f;
    o->f14 = a1->f04 + 13.0f;
    o->dispatch = a2->f00 - 18.0f;
    o->f1c = a2->f04 - 26.0f;
    o->f38 = a1->f00 + 9.0f;
    o->f3c = a1->f04 + 13.0f;
    o->f40 = a1->f00 + a2->f00 - 9.0f;
    o->f44 = a1->f04 + a2->f04 - 13.0f;
    o->f20 = (o->f40 - o->f38) * 0.5f + o->f10;
    o->f24 = (o->f44 - o->f3c) * 0.5f + o->f14;
    o->f28 = 1.0f;
    o->f2c = 1.0f;
    o->f30 = 0;
    o->f34 = f0;
    return *(int *)0x8c46fe40;
}
