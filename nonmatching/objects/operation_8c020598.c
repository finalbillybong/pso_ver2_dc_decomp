/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c020598
 * function: operation_8c020598
 * language: c
 * reference size: 296 bytes
 * compiled size: 296 bytes (+0.0%)
 * differing lines: 44 of 117 reference instruction lines
 * differing bytes: 65
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
typedef struct Block20 {
    int words[5];
} Block20;
typedef struct Half {
    short v;
} Half;
typedef struct Block4 {
    int words[1];
} Block4;
typedef struct Block28 {
    int words[7];
} Block28;
typedef struct Object Object;
typedef struct Arg1 Arg1;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x10];
    short f32;
    int f34;
    char unknown38[0x28];
    Vector3 f60;
    char unknown6c[0x29e];
    short f30a;
    char unknown30c[0x24];
    short f330;
    char unknown332[0x1e];
    int f350;
    char unknown354[0x8];
    int f35c;
    char unknown360[0x1c];
    int f37c;
    char unknown380[0x330];
    Block20 f6b0;
    char unknown6c4[0xec];
    Block8 f7b0;
    Block28 f7b8;
    char unknown7d4[0xc];
    Block4 f7e0;
    char unknown7e4[0x490];
    Block8 fc74;
};
struct Arg1 {
    short f00;
    short f02;
    int f04;
    char unknown8[0xc];
    Vector3 f14;
    short f20;
    short f22;
    char unknown24[0x40];
    int f64;
    Block8 f68;
    Block8 f70;
    Block28 f78;
    Block4 f94;
    Block20 f98;
    int fac;
    int fb0;
};
extern void operation_8c020300(void *);
void operation_8c020598(Object *o, Arg1 *a1)
{
    operation_8c020300(o);
    o->f20 = a1->f00;
    o->f32 = a1->f02;
    o->f34 = a1->f04;
    o->f60 = a1->f14;
    o->f30a = a1->f20;
    o->f330 = a1->f22;
    o->fc74 = a1->f68;
    o->f7b0 = a1->f70;
    o->f7b8 = a1->f78;
    o->f7e0 = a1->f94;
    o->f6b0 = a1->f98;
    o->f37c = a1->fac;
    o->f350 = a1->fb0;
    o->f35c = a1->f64;
}
