/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c128d1c
 * function: operation_8c128d1c
 * language: c
 * reference size: 288 bytes
 * compiled size: 288 bytes (+0.0%)
 * differing lines: 4 of 103 reference instruction lines
 * differing bytes: 4
 * provenance: generator draft (mode switch2)
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
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x10];
    float f31c;
    char unknown320[0x14];
    Arg0_334 *f334;
    char unknown338[0x34];
    Arg0_36c *f36c;
    char unknown370[0x20];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x3c];
    short f3e4;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_36c {
    char unknown0[0x8];
    int f08;
};
extern void call_8c0c2ebc(Object *, float, float, Vector3);
extern void operation_43fb4(void *, int, void *);
extern void operation_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, void *, float);
extern void refresh_follow_effect_8c052180(void *);
void operation_8c128d1c(Object *o)
{
    short v4;
    switch (o->f398) {
    case -1:
        break;
    case 0:
        o->f34 &= -0x101;
        o->ff0 = 1;
        o->f398 = 1;
        o->f3e4 = 0x78;
        return;
    case 1:
        if (o->f334 != 0) {
            if ((short)--o->f3e4 > 0) {
                goto L_8c128d8a;
            }
        }
        if (((o->f3a4 & 1)) == 0) {
            v4 = (short)o->f30a;
            if (v4 != 0) {
                o->f39c = (int)(v4);
                o->f390 = 0;
                return;
L_8c128d8a:;
                o->f31c = 0.0f;
                call_8c0c2ebc(o, -0.6f, o->fdc->f0c, *(Vector3 *)&o->f334->f324);
                operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(((char *)o + 0x318)));
                operation_8c01c5f0(o);
                operation_8c04a43c((void *)o, (void *)0, 0.0f);
                refresh_follow_effect_8c052180((void *)o);
            }
        }
    }
}
