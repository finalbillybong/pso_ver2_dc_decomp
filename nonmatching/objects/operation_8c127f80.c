/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c127f80
 * function: operation_8c127f80
 * language: c
 * reference size: 336 bytes
 * compiled size: 336 bytes (+0.0%)
 * differing lines: 16 of 124 reference instruction lines
 * differing bytes: 21
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
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x72];
    Vector3 f164;
    char unknown170[0x1c4];
    Arg0_334 *f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x16];
    Arg0_36c *f36c;
    char unknown370[0x28];
    int f398;
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
extern void call_8c0c3128(Object *, float);
extern void request_actor_mode_zero_8c128b44(void *);
extern int lookup_object_by_id(unsigned short);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern void call_8c0444f8(Object *, float, Vector3);
extern void operation_43fb4(void *, int, void *);
extern void operation_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, void *, float);
extern void refresh_follow_effect_8c052180(void *);
void operation_8c127f80(Object *o)
{
    int t1;
    if (o->f398 != -1) {
        if (o->f398 != 0) {
            if (o->f398 == 1) {
                goto L_8c128000;
            }
            return;
        }
        call_8c0c3128(o, 250.0f);
        if ((o->f354 & 0xffff) != 0xffff) {
            o->f34 &= -0x4000101;
            o->f34 &= -0x4040001;
            o->ff0 = 1;
            o->f398 = 1;
        } else {
            request_actor_mode_zero_8c128b44((void *)o);
        }
        t1 = lookup_object_by_id((unsigned short)(o->f354));
        o->f334 = (Arg0_334 *)t1;
        if (o->f334 != 0) {
            *(Vector3 *)&o->f164 = *(Vector3 *)&o->f334->f324;
            return;
L_8c128000:;
            if (o->f334 == 0) {
                request_actor_mode_zero_8c128b44((void *)o);
                return;
            }
            call_8c05fd7c(0x30035, o, (void *)(((char *)o + 0x3c)), 0, 0);
            call_8c0444f8(o, o->f36c->f04, *(Vector3 *)&o->f334->f324);
            operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(((char *)o + 0x318)));
            operation_8c01c5f0(o);
            operation_8c04a43c((void *)o, (void *)0, 0.0f);
            refresh_follow_effect_8c052180((void *)o);
        }
    }
}
