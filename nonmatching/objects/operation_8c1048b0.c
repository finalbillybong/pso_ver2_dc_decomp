/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1048b0
 * function: operation_8c1048b0
 * language: c
 * reference size: 168 bytes
 * compiled size: 168 bytes (+0.0%)
 * differing lines: 52 of 77 reference instruction lines
 * differing bytes: 89
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vec2 {
    float x;
    float y;
} Vec2;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    void *f04;
    Vec2 f08;
    Vec2 f10;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    int f2c;
    int f30;
    int f34;
};
struct Arg1 {
    char unknown0[0x4];
    Vec2 f04;
    Vec2 f0c;
    float f14;
    float f18;
    float f1c;
    int f20;
    int f24;
    int f28;
    int f2c;
};
extern void initialize_fields_8c0e14ac(void *);
Object *operation_8c1048b0(Object *o, Arg1 *a1)
{
    initialize_fields_8c0e14ac((void *)o);
    o->f04 = (void *)0x8c269764;
    o->f08 = a1->f04;
    o->f10 = a1->f0c;
    o->f1c = a1->f14 / 256.0f;
    o->f20 = a1->f18 / 256.0f;
    o->f24 = (a1->f14 + o->f10.x) / 256.0f;
    o->f28 = (a1->f18 + o->f10.y) / 256.0f;
    o->f18 = a1->f1c;
    o->f2c = a1->f20;
    o->f30 = a1->f24;
    o->f34 = a1->f28;
    o->tag = a1->f2c;
    return o;
}
