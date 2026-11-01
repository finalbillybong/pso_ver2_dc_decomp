/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03ad3c
 * function: operation_8c03ad3c
 * language: c
 * reference size: 464 bytes
 * compiled size: 464 bytes (+0.0%)
 * differing lines: 8 of 163 reference instruction lines
 * differing bytes: 8
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
typedef struct Arg0_184 Arg0_184;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2e];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x90];
    float ff8;
    char unknownfc[0x4];
    float f100;
    char unknown104[0x80];
    Arg0_184 *f184;
    char unknown188[0x190];
    float f318;
    char unknown31c[0x4];
    float f320;
    char unknown324[0x68];
    Arg0_38c *f38c;
    char unknown390[0x18];
    float f3a8;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct Arg0_184 {
    char unknown0[0x10];
    float f10;
};
extern void operation_8c01c5f0(Object *);
extern int check_range_8c01cf68(void *, float);
extern int call_8c24e644(int, void *);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, Frame *, Frame *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c3bdf60(Frame *, void *);
extern void update_last_effect(int);
extern void create_effect_777c(void *, int);
extern void create_resource_effect_8c108044(void *, int);
extern void create_effect_at_8c108364(void *, int);
extern void apply_object_velocity(void *);
extern void operation_8c04a43c(void *, float, void *);
void operation_8c03ad3c(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    int t4;
    operation_8c01c5f0(o);
    t1 = check_range_8c01cf68((void *)o, 0.0f);
    if (t1 != 0) {
        t2 = call_8c24e644(0x30009, (void *)(o->f38c));
        play_se_8c05fbf8(t2, (void *)(((char *)o + 0x3c)), 0, 0);
    }
    t3 = check_range_8c01cf68((void *)o, 27.0f);
    if (t3 != 0) {
        (&frame)->f00 = 0.0f;
        (&frame)->f04 = 10.0f;
        (&frame)->f08 = o->f184->f10 * 0.5f;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, (void *)(o->f64));
        call_8c3be38c(0, (Frame *)((&frame)), (Frame *)((&frame)));
        njPopMatrixEx_8c38ad10();
        call_8c3bdf60((Frame *)((&frame)), (void *)(((char *)o + 0x3c)));
        t4 = call_8c24e644(0x30003, (void *)(o->f38c));
        play_se_8c05fbf8(t4, (void *)(&frame), 0, 0);
        update_last_effect(-0x300);
        create_effect_777c((void *)(&frame), 0xf0);
        create_resource_effect_8c108044((void *)(&frame), 0x14);
        create_effect_at_8c108364((void *)(&frame), 0x32);
    }
    if (o->ff8 < (o->f100 * 30.0f * 0.5f)) {
        apply_object_velocity((void *)o);
        o->f318 *= 0.5f;
        o->f320 *= 0.5f;
    } else {
        if (((o->f34 & 0x800000)) == 0) {
            operation_8c04a43c((void *)o, 0.0f, (void *)0);
        }
    }
    o->f3a8 -= 0.1f;
    if (-20.0f > o->f3a8) {
        o->f04 |= 1;
    }
}
