/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c021054
 * function: operation_8c021054
 * language: c
 * reference size: 168 bytes
 * compiled size: 172 bytes (+2.4%)
 * differing lines: 94 of 67 reference instruction lines
 * differing bytes: 137
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
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
struct Object {
    char unknown0[0x3b0];
    int f3b0;
    int f3b4;
};
struct Arg1 {
    char unknown0[0x7];
    char f07;
    char unknown8[0x1b];
    char f23;
    char unknown24[0x1b];
    char f3f;
    char unknown40[0x1b];
    char f5b;
    char unknown5c[0x1b];
    char f77;
    char unknown78[0x1b];
    char f93;
    char unknown94[0x1b];
    char faf;
    char unknownb0[0x1b];
    char fcb;
};
void operation_8c021054(Object *o, Arg1 *a1)
{
    int v;
    v = 0;
    o->f3b0 = a1->f5b << 0x18 & -0x1000000 | (a1->f3f << 0x10 & 0xff0000 | (a1->f23 << 8 & 0xff00 | (v | a1->f07 & 0xff)));
    v |= a1->f77 & 0xff;
    v |= a1->f93 << 8 & 0xff00;
    v |= a1->faf << 0x10 & 0xff0000;
    v |= a1->fcb << 0x18 & -0x1000000;
    o->f3b4 = v;
}
