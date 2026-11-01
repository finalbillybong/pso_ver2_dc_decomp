/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c24f24c
 * function: TItemWpnNaganoClaw_v52_8c24f24c
 * language: c
 * reference size: 332 bytes
 * compiled size: 332 bytes (+0.0%)
 * differing lines: 26 of 138 reference instruction lines
 * differing bytes: 28
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
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_234 Arg0_234;
typedef struct Arg0_238 Arg0_238;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x34];
    int f34;
    int f38;
    char unknown3c[0xb0];
    int fec;
    char unknownf0[0x4c];
    Arg0_13c *f13c;
    char unknown140[0x94];
    int f1d4;
    char unknown1d8[0x5c];
    Arg0_234 *f234;
    Arg0_238 *f238;
};
struct S_vv2 {
    char unknown0[0xe8];
    int fe8;
    char unknownec[0x224];
    int f310;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x8];
};
extern void operation_8c075730(void *, void *, int);
extern void call_8c076fc8(Object *, int);
extern void operation_8c075894(void *, void *, int, int);
extern void call_8c077524(void *, void *, Frame *);
extern void operation_8c0773e4(void *);
void TItemWpnNaganoClaw_v52_8c24f24c(Object *o)
{
    Frame frame;
    char *v1;
    S_vv2 *v2;
    int v4;
    int v3;
    int v7;
    operation_8c075730((void *)o, (void *)(o->f13c), 0x31);
    call_8c076fc8(o, 1);
    call_8c076fc8(o, 0);
    v1 = (char *)o->f38;
    o->f38 = (int)(o->f1d4);
    operation_8c075730((void *)o, (void *)(o->f13c), 0x24);
    o->f38 = (int)(v1);
    v2 = (S_vv2 *)o->f13c;
    v3 = (int)(((v2->f310 & 0xe0)) != 0);
    v4 = (int)0;
    if (v3 != 0) {
        if (((v2->fe8 & 4)) == 0) {
            v4 = (int)1;
        }
    }
    v7 = (int)0;
    if (((o->f34 & 0x8000000)) == 0) {
        if (((o->fec & 0x40)) == 0) {
            v7 = (int)1;
        }
    }
    if (o->f234 != 0) {
        if (v4 == 1) {
            operation_8c075894((void *)o, (void *)v2, 1, (int)(&(&frame)->f0c));
            operation_8c075894((void *)o, (void *)(o->f13c), 2, (int)(&frame));
            call_8c077524((void *)(o->f234), (void *)(&(&frame)->f0c), (Frame *)((&frame)));
        }
        if (v7 == 1) {
            operation_8c0773e4((void *)(o->f234));
        }
    }
    if (o->f238 != 0) {
        if (v4 == 1) {
            operation_8c075894((void *)o, (void *)(o->f13c), 3, (int)(&(&frame)->f0c));
            operation_8c075894((void *)o, (void *)(o->f13c), 4, (int)(&frame));
            call_8c077524((void *)(o->f238), (void *)(&(&frame)->f0c), (Frame *)((&frame)));
        }
        if (v7 == 1) {
            operation_8c0773e4((void *)(o->f238));
        }
    }
}
