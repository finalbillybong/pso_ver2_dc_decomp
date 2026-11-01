/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0509b4
 * function: operation_8c0509b4
 * language: c
 * reference size: 1160 bytes
 * compiled size: 1168 bytes (+0.7%)
 * differing lines: 130 of 421 reference instruction lines
 * differing bytes: 818
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv61 S_vv61;
typedef struct S_vv62 S_vv62;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2e];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x84];
    int fec;
    char unknownf0[0x244];
    Arg0_334 *f334;
    char unknown338[0x34];
    Arg0_36c *f36c;
    char unknown370[0x20];
    short f390;
    char unknown392[0x4];
    short f396;
    char unknown398[0x14];
    int f3ac;
    short f3b0;
    short f3b2;
    int f3b4;
    float f3b8;
};
struct Arg0_36c {
    float f00;
    float f04;
    Arg0_36c_8 *f08;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct S_vv61 {
    char unknown0[0x324];
    Vector3 f324;
};
struct S_vv62 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
};
extern void operation_8c01c5f0(Object *);
extern void call_8c044964(Object *, float, Vector3);
extern void operation_43fb4(void *, int, void *);
extern void operation_8c04a43c(void *, void *, float);
extern void refresh_follow_effect_8c052180(void *);
extern float call_8c0444f8(Object *, float, Vector3);
extern float object_random_fraction(void *);
extern void call_8c0446f8(Object *, float, float, float, void *);
extern void operation_8c051758(void *);
extern int angle_halfway(int, int);
extern void play_se_8c05fbf8(int, void *, int, int);
extern int check_range_8c01cf68(void *, float);
extern void call_8c044410(Object *, void *, float);
extern int call_8c04a52c(Object *, Frame *, float);
extern float call_8c130334(float, float);
extern int angle_difference(int, int);
extern int call_8c0517b0(Object *);
extern void create_effect_777c(void *, int);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern void transform_actor_records(void *);
void operation_8c0509b4(Object *o)
{
    Frame frame;
    int v33;
    S_vv61 *v61;
    S_vv62 *v62;
    int v3;
    float t1;
    float t2;
    int t3;
    int t4;
    int t5;
    float t6;
    int t7;
    float t8;
    int t9;
    operation_8c01c5f0(o);
    if (((o->f34 & 0x1000)) != 0 && ((o->f390 & 2)) == 0 && o->f334 != 0) {
        call_8c044964(o, o->f36c->f04, *(Vector3 *)&o->f334->f324);
        operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(((char *)o + 0x318)));
        operation_8c04a43c((void *)o, (void *)0, 0.0f);
        refresh_follow_effect_8c052180((void *)o);
        return;
    }
    v3 = (int)o->fec;
    if (v3 != 1) {
    } else {
        if (o->f396 != 0) {
            if (o->f396 == 1) {
                goto L_8c050b84;
            }
            if (o->f396 == 3) {
                goto L_8c050c24;
            }
            if (o->f396 == 4) {
                goto L_8c050ca8;
            }
        } else {
            v61 = (S_vv61 *)o->f334;
            if (v61 != 0) {
                t1 = call_8c0444f8(o, o->f36c->f04, *(Vector3 *)&v61->f324);
                if (((o->f34 & 2)) == 0 && 10000.0f > t1) {
                    o->f396 = 1;
                    o->f3b4 = 0;
                    object_random_fraction((void *)o);
                    o->f3b8 = 0.0f;
                }
                if (!(t1 > (o->f36c->f00 * o->f36c->f00)) && !((o->f36c->f04 * o->f36c->f04) > t1)) {
                    goto L_8c050b4c;
                }
                o->f334 = (Arg0_334 *)0;
            } else {
                call_8c0446f8(o, o->f36c->f04, 100.0f, 50.0f, (void *)(o->f36c->f08));
            }
L_8c050b4c:;
            operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(((char *)o + 0x318)));
            operation_8c051758((void *)o);
            goto L_8c050e18;
L_8c050b84:;
            v62 = (S_vv62 *)o->f334;
            if (v62 != 0) {
                t2 = call_8c0444f8(o, o->f36c->f04, *(Vector3 *)&v62->f324);
                if (t2 > 22500.0f) {
                    o->f396 = 0;
                }
                operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(((char *)o + 0x318)));
                if (!(t2 > (o->f36c->f00 * o->f36c->f00)) && !((o->f36c->f04 * o->f36c->f04) > t2)) {
                    goto L_8c050c16;
                }
                o->f334 = (Arg0_334 *)0;
            } else {
                o->f396 = 0;
            }
L_8c050c16:;
            operation_8c051758((void *)o);
            goto L_8c050e18;
L_8c050c24:;
            t3 = angle_halfway((int)(o->f64), (int)(o->f3ac));
            o->f64 = (Arg0_64 *)t3;
            if (o->fec == 1) {
                o->f34 &= -0x4000001;
                o->f396 = 4;
                play_se_8c05fbf8(0x30012, (void *)(((char *)o + 0x3c)), 0, 0);
            }
            t4 = check_range_8c01cf68((void *)o, 30.0f);
            if (t4 == 0) {
            } else {
                play_se_8c05fbf8(0x30011, (void *)(((char *)o + 0x3c)), 0, 0);
                goto L_8c050e18;
L_8c050ca8:;
                if (v3 != 1) {
                } else {
                    call_8c044410(o, (void *)(o->f64), o->f36c->f04 * 3.5f);
                    *(short *)((char *)o + 0x3b0) += 1;
                    if ((float)o->f3b0 > 15.0f) {
                        t5 = call_8c04a52c(o, (Frame *)((&frame)), 300.0f);
                        if ((unsigned short)t5 != 0xffff) {
                            t6 = call_8c130334((&frame)->f00, (&frame)->f08);
                            t7 = angle_difference((int)(o->f64), (int)((int)(t6 * 65536.0f / 6.28318405f)));
                            if (0xaaa > t7) {
                                t8 = object_random_fraction((void *)o);
                                if (!(0.5f > t8)) {
                                    v33 = (int)-0x4000;
                                } else {
                                    v33 = (int)0x4000;
                                }
                                o->f64 = (Arg0_64 *)((int)o->f64 + v33);
                                o->f3b0 = 0;
                            }
                        }
                    }
                    t9 = call_8c0517b0(o);
                    if (t9 == 0) {
                        o->f04 |= 1;
                        return;
                    }
                    if (!((short)--*(short *)((char *)o + 0x3b2) >= 0)) {
                        create_effect_777c((void *)(((char *)o + 0x3c)), 0xf3);
                        o->f3b2 = 2;
                    }
                    call_8c05fd7c(0x30012, o, (void *)(((char *)o + 0x3c)), 0, 0);
                }
                operation_8c04a43c((void *)o, (void *)(int)(0.0f), (float)0);
                transform_actor_records((void *)o);
                return;
            }
        }
    }
L_8c050e18:;
    operation_8c04a43c((void *)o, (void *)(int)(0.0f), (float)0);
    refresh_follow_effect_8c052180((void *)o);
}
