/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25b1ac
 * function: operation_8c25b1ac
 * language: c
 * reference size: 272 bytes
 * compiled size: 272 bytes (+0.0%)
 * differing lines: 2 of 106 reference instruction lines
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
typedef struct S_vv14 S_vv14;
struct Object {
    char unknown0[0x60];
    int f60;
    int f64;
    int f68;
    char unknown6c[0x1c];
    int f88;
    char unknown8c[0x8];
    int f94;
    int f98;
    int f9c;
    int fa0;
    int fa4;
    int fa8;
    volatile unsigned short fac;
    char unknownae[0x6];
    char fb4;
};
struct S_vv14 {
    unsigned short f00;
};
extern int call_8c18e768(int, int);
extern int operation_03d080(unsigned short);
void operation_8c25b1ac(Object *o)
{
    unsigned short v8;
    int v15;
    S_vv14 *v14;
    unsigned short v13;
    int t1;
    unsigned short id;
    int *p;
    unsigned int mask;
    int none;
    o->f94 = 0;
    o->f98 = 0;
    o->f9c = (int)(o->f60);
    if ((unsigned int)o->f9c >= (unsigned int)2) {
        o->f9c = 1;
    }
    o->fa0 = (int)(o->f64);
    if (o->fa0 > 1) {
        o->fa0 = 0;
    }
    o->fa4 = (int)(o->f68);
    if (!(o->fa4 >= 0)) {
        o->fa4 = 0;
    }
    t1 = call_8c18e768((int)(o->fa4 * 3), 4);
    o->fa8 = (int)(t1);
    v8 = 0x100;
    o->fac = o->f88 & 0xffff;
    id = o->fac;
    if ((unsigned int)(id & 0xffff) < (unsigned int)v8) {
        o->fb4 = operation_03d080(id);
    } else {
        o->fac = 0xffff;
        o->fb4 = 0;
    }
    v14 = (S_vv14 *)((char *)o + 0xae);
    v13 = 0x100;
    p = &o->f88;
    mask = 0xffff0000;
    none = 0xffff;
    for (v15 = 0; v15 != 3; v15++) {
        v14->f00 = (*(int *)((char *)p + (v15 << 2)) & mask) >> 0x10;
        if (v14->f00 >= v13) {
            v14->f00 = none;
        }
        v14++;
    }
}
