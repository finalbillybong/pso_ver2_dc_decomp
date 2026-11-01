/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c104958
 * function: operation_8c104958
 * language: c
 * reference size: 148 bytes
 * compiled size: 148 bytes (+0.0%)
 * differing lines: 64 of 69 reference instruction lines
 * differing bytes: 76
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
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    void *f04;
    Block8 f08;
    Block8 f10;
    float dispatch;
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
    Block8 f04;
    Block8 f0c;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    int f28;
    int f2c;
    int f30;
    int f34;
};
extern void initialize_fields_8c0e14ac(void *);
Object *operation_8c104958(Object *o, Arg1 *a1)
{
    initialize_fields_8c0e14ac((void *)o);
    o->f04 = (void *)0x8c269764;
    o->f08 = a1->f04;
    o->f10 = a1->f0c;
    o->f1c = a1->f14;
    o->f20 = a1->f18;
    o->f24 = a1->f1c;
    o->f28 = a1->f20;
    o->dispatch = a1->f24;
    o->f2c = (int)(a1->f28);
    o->f30 = (int)(a1->f2c);
    o->f34 = (int)(a1->f30);
    o->tag = (int)(a1->f34);
    return o;
}
