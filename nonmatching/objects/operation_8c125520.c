/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c125520
 * function: operation_8c125520
 * language: c
 * reference size: 312 bytes
 * compiled size: 312 bytes (+0.0%)
 * differing lines: 14 of 115 reference instruction lines
 * differing bytes: 19
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
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_36c Arg0_36c;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x22a];
    float f31c;
    char unknown320[0x14];
    Arg0_334 *f334;
    char unknown338[0x34];
    Arg0_36c *f36c;
    char unknown370[0x28];
    int f398;
    char unknown39c[0x8];
    int f3a4;
};
struct S_vv2 {
    Vector3 f00;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
    int f08;
};
extern void request_actor_mode_zero_8c1275a8(void *);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern void call_8c0444f8(Object *, float, Vector3);
extern void operation_43fb4(void *, int, void *);
extern void operation_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, void *, float);
extern void refresh_follow_effect_8c052180(void *);
void operation_8c125520(Object *o)
{
    int v1;
    S_vv2 *v2;
    if (o->f398 != -1) {
        if (o->f398 != 0) {
            if (o->f398 == 1) {
                goto L_8c125584;
            }
            return;
        }
        o->f34 &= -0x4000101;
        o->f34 &= -0x4040001;
        if (((o->f3a4 & 0x1000000)) != 0) {
            v1 = (int)1;
        } else {
            v1 = (int)6;
        }
        o->ff0 = v1;
        o->f398 = 1;
        if (o->f334 != 0) {
            v2 = (S_vv2 *)((char *)o + 0x164);
            *(Vector3 *)&v2->f00 = *(Vector3 *)&o->f334->f324;
            return;
L_8c125584:;
            if (o->f334 == 0) {
                request_actor_mode_zero_8c1275a8((void *)o);
                return;
            }
            call_8c05fd7c(0x30035, o, (void *)(((char *)o + 0x3c)), 0, 0);
            o->f31c = 0.0f;
            call_8c0444f8(o, o->f36c->f04, *(Vector3 *)&o->f334->f324);
            operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(((char *)o + 0x318)));
            operation_8c01c5f0(o);
            operation_8c04a43c((void *)o, (void *)0, 0.0f);
            refresh_follow_effect_8c052180((void *)o);
        }
    }
}
