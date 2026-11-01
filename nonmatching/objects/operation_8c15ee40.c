/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15ee40
 * function: operation_8c15ee40
 * language: c
 * reference size: 152 bytes
 * compiled size: 152 bytes (+0.0%)
 * differing lines: 4 of 55 reference instruction lines
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
typedef struct Arg0_398 Arg0_398;
typedef struct Arg0_3b8 Arg0_3b8;
struct Object {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x23e];
    short f330;
    char unknown332[0x66];
    Arg0_398 *f398;
    char unknown39c[0x4];
    int f3a0;
    int f3a4;
    char unknown3a8[0x10];
    Arg0_3b8 *f3b8;
    char unknown3bc[0x1c];
    int f3d8;
    int f3dc;
};
struct Arg0_398 {
    char unknown0[0x18];
    int f18;
};
struct Arg0_3b8 {
    char unknown0[0x330];
    short f330;
};
extern int call_8c18e768(int, int);
void operation_8c15ee40(Object *o)
{
    int t1;
    int off;
    off = 0x330;
    o->f398->f18 = (unsigned int)o->f398->f18 >> 1 << 1;
    o->f3a0 = 1;
    o->f3a4 = 0;
    t1 = call_8c18e768((int)(*(short *)((char *)o->f3b8 + off) + 1), 2);
    *(short *)((char *)o + off) = t1;
    o->f3d8 = *(short *)((char *)o + off);
    o->f3dc = 0;
    o->fe8 &= -0x11;
    o->fe8 |= 1;
    o->ff0 = 9;
}
