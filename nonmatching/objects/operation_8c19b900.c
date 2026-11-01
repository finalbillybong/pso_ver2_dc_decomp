/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c19b900
 * function: operation_8c19b900
 * language: c
 * reference size: 436 bytes
 * compiled size: 432 bytes (-0.9%)
 * differing lines: 14 of 161 reference instruction lines
 * differing bytes: 252
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   instruction or operand order; review found and fixed behaviour defects of the generator draft;
 *   not proven equivalent to the original; compiled size differs from the reference by -4 bytes
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
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_158 Arg0_158;
typedef struct Arg0_160 Arg0_160;
typedef struct Arg0_164 Arg0_164;
struct Object {
    char unknown0[0x24];
    int f24;
    char unknown28[0x8];
    unsigned char f30;
    char unknown31[0x7];
    int f38;
    char unknown3c[0x18];
    int f54;
    char unknown58[0xf8];
    int f150;
    char unknown154[0x4];
    Arg0_158 *f158;
    char unknown15c[0x4];
    Arg0_160 *f160;
    Arg0_164 *f164;
};
struct Arg0_158 {
    char unknown0[0x80];
    unsigned short f80;
};
struct Frame {
    Block8 f00;
};
extern Block8 g_8c31cc24;
extern S_g8c418248 *g_8c418248;
extern int g_8c467188;
extern S_g8c4d97e0 *g_8c4d97e0;
extern char g_8c31cc44[];
extern int operation_8c19fb24(int, int);
extern int operation_194d60(unsigned short);
extern int operation_8c1631c8(void *);
extern void operation_8c1cd6f4(void *, int, int);
extern void operation_8c1cdc30(void *);
extern int operation_8c22cc1c(int);
extern void operation_8c22cd48(void *, void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TWindowHelpItem_ctor_8c1d5b24(void *);
extern void operation_8c1d5dfc(void *, int);
extern void operation_8c220ca8(int, int);
void operation_8c19b900(Object *o)
{
    Frame frame;
    int t2;
    int t3;
    int t4;
    int t5;
    if (--o->f150 > 0) {
        return;
    }
    if (o->f158 == 0) {
        switch (g_8c467188) {
        case 0:
            o->f158 = (Arg0_158 *)operation_8c19fb24((int)(g_8c31cc44 + 0x25), 1);
            break;
        case 1:
        case 2:
        case 3:
        case 4:
        default:
            o->f158 = (Arg0_158 *)operation_8c19fb24((int)(g_8c31cc44 + 0x2e), 1);
            break;
        }
        o->f30 &= -0x81;
        t2 = operation_194d60((unsigned short)g_8c418248);
        o->f38 = (int)(t2);
        t3 = operation_8c1631c8((void *)(((char *)o + 0x2c)));
        o->f54 = (int)(t3);
        operation_8c1cd6f4((void *)(o->f158), (int)(o->f54), 0);
        o->f158->f80 |= 0x10;
        o->f158->f80 |= 0x40;
        o->f158->f80 |= 0x80;
        operation_8c1cdc30((void *)(o->f158));
    }
    if (o->f164 == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c31cc24;
        t4 = operation_8c22cc1c((int)(&frame));
        o->f164 = (Arg0_164 *)t4;
        operation_8c22cd48((void *)(o->f164), (void *)(((char *)o + 0x2c)));
    }
    if (o->f160 == 0) {
        t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xb8);
        if (t5 != 0) {
            TWindowHelpItem_ctor_8c1d5b24((void *)t5);
        }
        o->f160 = (Arg0_160 *)t5;
        operation_8c1d5dfc((void *)(o->f160), (int)(((char *)o + 0x2c)));
    }
    operation_8c220ca8(8, 1);
    o->f24 = 4;
}
