/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c8d90
 * function: operation_8c1c8d90
 * language: c
 * reference size: 192 bytes
 * compiled size: 192 bytes (+0.0%)
 * differing lines: 4 of 87 reference instruction lines
 * differing bytes: 2
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
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
    char unknown0[0x2];
    char f02;
    char f03;
    short f04;
    short f06;
    short f08;
    short f0a;
    char unknownc[0x4];
    int f10;
};
struct Arg1 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
    unsigned char f0c;
    char f0d;
    unsigned char f0e;
};
extern int operation_8c207304(void *);
void operation_8c1c8d90(Object *o, Arg1 *a1)
{
    int t1;
    if (a1 != 0) {
        t1 = operation_8c207304((void *)a1);
        o->f02 = t1;
        o->f03 = a1->f0d;
        o->f04 = a1->f0e & 1 | (a1->f04 & 0x7ffe | (a1->f0c & 2) << 0xe);
        o->f06 = a1->f0e >> 1 & 1 | (a1->f06 & 0x7ffe | (a1->f0c & 4) << 0xd);
        o->f08 = a1->f08 & 0xfffe | a1->f0e >> 1 >> 1 & 1;
        o->f0a = a1->f0a & 0xfffe | a1->f0e >> 1 >> 1 >> 1 & 1;
        o->f10 = (a1->f0c & 1) << 0x1f | (a1->f02 & 0x7fff) << 0x10 | a1->f00;
    }
}
