/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1044b8
 * function: TObjEneDf2Bringer_Eff_TpAbsorb1_ctor_8c1044b8
 * language: c
 * reference size: 188 bytes
 * compiled size: 188 bytes (+0.0%)
 * differing lines: 34 of 65 reference instruction lines
 * differing bytes: 31
 * provenance: generator draft (mode switch2ext)
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
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x8];
    int fe8;
    int fec;
    float ff0;
    float ff4;
    float ff8;
    int ffc;
    float f100;
    float f104;
    float f108;
};
struct Arg0_dc {
    char unknown0[0x14];
    int f14;
};
extern int g_8c30b558;
extern void operation_8c0f33fc(void *, int, int);
Object *TObjEneDf2Bringer_Eff_TpAbsorb1_ctor_8c1044b8(Object *o, int a1, int a2, int a3)
{
    operation_8c0f33fc((void *)o, a1, a2);
    o->dispatch = (void *)0x8c2696a4;
    o->tag = (int)(g_8c30b558);
    o->size = 0x10c;
    o->fe8 = 0;
    o->f108 = 0.0f;
    o->f100 = 0.0f;
    o->f104 = 0.0f;
    o->fec = 0;
    o->f3c = 0.0f;
    o->f40 = 0.0f;
    o->f44 = 0.0f;
    o->ff0 = 0.0f;
    o->ff4 = 0.0f;
    o->ff8 = 0.0f;
    o->ffc = a3;
    o->fdc->f14 = 1;
    return o;
}
