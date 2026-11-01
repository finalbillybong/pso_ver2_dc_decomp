/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c174878
 * function: TPhotonYoulla_ctor_8c174878
 * language: c
 * reference size: 408 bytes
 * compiled size: 408 bytes (+0.0%)
 * differing lines: 58 of 152 reference instruction lines
 * differing bytes: 236
 * provenance: generator draft (mode bgotoext)
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
typedef struct S_g8c4db380 S_g8c4db380;
typedef struct S_g8c4db380_42c S_g8c4db380_42c;
typedef struct Object Object;
typedef struct Arg0_1b8 Arg0_1b8;
typedef struct Arg1 Arg1;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x8];
    int f28;
    char unknown2c[0xc];
    int f38;
    Vector3 f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    char unknown118[0x58];
    int f170;
    char unknown174[0x40];
    unsigned short f1b4;
    char unknown1b6[0x2];
    Arg0_1b8 *f1b8;
    char unknown1bc[0x10];
    short f1cc;
    char unknown1ce[0x2];
    int f1d0;
    int f1d4;
    int f1d8;
    int f1dc;
};
struct Arg1 {
    Vector3 f00;
    short f0c;
    char unknowne[0x2];
    int f10;
    int f14;
    char unknown18[0x4];
    unsigned char f1c;
};
struct Arg0_1b8 {
    char unknown0[0x64];
    int f64;
};
struct S_g8c4db380 {
    char unknown0[0x42c];
    S_g8c4db380_42c *f42c;
    int f430;
};
struct S_g8c4db380_42c {
    char unknown0[0xb8];
    int fb8;
    int fbc;
};
extern int g_8c319210;
extern S_g8c4db380 *g_8c4db380;
extern void call_8c13e784(Object *);
extern int lookup_object_by_id(unsigned short);
extern void call_8c01c838(Object *, short);
extern void initialize_float_fields_8c174ca4(void *, unsigned char);
extern void call_8c13ec98(Object *, int);
extern void call_8c13efb0(int, int);
Object *TPhotonYoulla_ctor_8c174878(Object *o, Arg1 *a1)
{
    Object **home = &o;
    int t1;
    (void)home;
    call_8c13e784(o);
    o->dispatch = (void *)0x8c270290;
    o->tag = (int)(g_8c319210);
    o->size = 0x1e0;
    o->f170 = 5;
    *(Vector3 *)&o->f3c = *(Vector3 *)&a1->f00;
    o->f1b4 = a1->f0c;
    t1 = lookup_object_by_id((unsigned short)(o->f1b4));
    o->f1b8 = (Arg0_1b8 *)t1;
    if (o->f1b8 != 0) {
        o->f64 = (int)(o->f1b8->f64);
    }
    o->f38 = (int)(g_8c4db380->f42c->fb8);
    o->f28 = (int)(g_8c4db380->f42c->fbc);
    o->f110 = (void *)0x8c3191f0;
    o->f114 = (int)(g_8c4db380->f430);
    o->ff0 = 1;
    call_8c01c838(o, o->ff0);
    o->f1cc = 1;
    o->f1d0 = (int)(a1->f10);
    o->f1d4 = (int)(a1->f14);
    o->f1d8 = 0;
    initialize_float_fields_8c174ca4((void *)o, a1->f1c);
    o->f1dc = 0;
    if (o->f1d0 == 0) {
        o->ff0 = 0;
        o->f1d0 = 1;
        o->f1cc = 0;
        o->f1d8 = 1;
        call_8c13ec98(o, 6);
    } else {
        call_8c13efb0(6, (int)(o->f1b4 & 0xffff));
    }
    return o;
}
