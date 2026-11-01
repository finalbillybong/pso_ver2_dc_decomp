/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c25b2bc
 * function: operation_8c25b2bc
 * language: c
 * reference size: 176 bytes
 * compiled size: 176 bytes (+0.0%)
 * differing lines: 10 of 74 reference instruction lines
 * differing bytes: 5
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x9c];
    int f9c;
    char unknowna0[0xc];
    volatile unsigned short fac;
};
struct Frame {
    unsigned char f00;
    char f01;
    char unknown2[0x2];
    short f04;
    short f06;
    char f08;
    char unknown9[0x3];
    unsigned char f0c;
    char f0d;
    char unknowne[0x2];
    short f10;
    short f12;
    char f14;
    char unknown15[0x3];
};
struct S_vv3 {
    unsigned short f00;
};
extern int g_8c44be04;
extern void operation_8c0368a8(void *);
void operation_8c25b2bc(Object *o)
{
    Frame frame;
    S_vv3 *v3;
    int v1;
    int v2;
    if (o->f9c == 0) {
        if (!((unsigned int)0x100 > (unsigned int)(o->fac & 0xffff))) {
            return;
        }
        (&frame)->f0c = 0x93;
        (&frame)->f0d = 3;
        (&frame)->f10 = g_8c44be04;
        (&frame)->f12 = o->fac & 0xffff;
        (&frame)->f14 = 0;
        operation_8c0368a8((void *)(&(&frame)->f0c));
        return;
    }
    v2 = (int)0;
    v1 = (int)0x100;
    v3 = (S_vv3 *)((char *)o + 0xae);
    while (v2 != 3) {
        if ((unsigned int)v3->f00 < (unsigned int)(unsigned short)v1) {
            (&frame)->f00 = 0x93;
            (&frame)->f01 = 3;
            (&frame)->f04 = g_8c44be04;
            (&frame)->f06 = v3->f00;
            (&frame)->f08 = 1;
            operation_8c0368a8((void *)(&frame));
        }
        v3 = (S_vv3 *)((char *)v3 + 2);
        v2 = (int)(v2 + 1);
    }
}
