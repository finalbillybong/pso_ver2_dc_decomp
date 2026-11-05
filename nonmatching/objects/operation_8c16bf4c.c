/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16bf4c
 * function: operation_8c16bf4c
 * language: c
 * reference size: 132 bytes
 * compiled size: 132 bytes (+0.0%)
 * differing lines: 4 of 51 reference instruction lines
 * differing bytes: 6
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg1_8 Arg1_8;
struct Arg1 {
    int f00;
    int f04;
    Arg1_8 *f08;
    int f0c;
    int f10;
    char f14;
    char unknown15[0x7];
    int f1c;
    int f20;
    int f24;
    int f28;
    char unknown2c[0x4c];
    int f78;
    int f7c;
    int f80;
};
struct Object {
    int tag;
    int f04;
    int f08;
};
extern void memset_8c12b880(void *, int, int);
void operation_8c16bf4c(Object *o, Arg1 *a1)
{
    a1->f00 = (int)o + (int)o->tag;
    a1->f04 = (int)o + o->f04;
    a1->f08 = (Arg1_8 *)((int)o + o->f08);
    a1->f0c = 0;
    a1->f10 = 0;
    a1->f14 = 0;
    a1->f1c = 0;
    a1->f20 = 0;
    a1->f24 = 0;
    a1->f28 = 0;
    memset_8c12b880((void *)a1->f08, 0, 0x400);
    memset_8c12b880((void *)((char *)a1 + 0x30), 0, 0x40);
    *(char *)0x8c4db4c0 = 0;
    *(char *)0x8c4db4c1 = 0;
    *(short *)0x8c4db4c2 = 0;
    *(short *)0x8c4db4c4 = 0;
    a1->f78 = 0;
    a1->f7c = 0;
    a1->f80 = 0;
}
