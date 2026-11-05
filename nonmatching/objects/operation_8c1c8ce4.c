/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c8ce4
 * function: operation_8c1c8ce4
 * language: c
 * reference size: 172 bytes
 * compiled size: 160 bytes (-7.0%)
 * differing lines: 26 of 76 reference instruction lines
 * differing bytes: 117
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -12 bytes
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
struct Arg1 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    char f0c;
    char f0d;
    char f0e;
};
struct Object {
    char unknown0[0x3];
    char f03;
    short f04;
    short f06;
    short f08;
    short f0a;
    char unknownc[0x4];
    int f10;
};
void operation_8c1c8ce4(Object *o, Arg1 *a1)
{
    char v1;
    if (a1 != 0) {
        a1->f0c = (unsigned int)(o->f10 & -0x80000000) >> 0x1f;
        a1->f0c = (o->f04 & 0x8000) >> 0xe | a1->f0c;
        v1 = (char)a1->f0c;
        a1->f0c = (o->f06 & 0x8000) >> 0xd | v1;
        a1->f00 = (unsigned short)o->f10;
        a1->f02 = (short)((unsigned int)(o->f10 & 0x7fff0000) >> 0x10);
        a1->f04 = o->f04 & 0x7ffe;
        a1->f06 = o->f06 & 0x7ffe;
        a1->f08 = o->f08 & 0xfffe;
        a1->f0a = o->f0a & 0xfffe;
        a1->f0d = o->f03;
        a1->f0e = (o->f0a & 1) << 3 | (o->f04 & 1 | (o->f06 & 1) << 1 | (o->f08 & 1) << 2);
    }
}
