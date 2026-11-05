/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bdbc4
 * function: operation_8c0bdbc4
 * language: c
 * reference size: 544 bytes
 * compiled size: 556 bytes (+2.2%)
 * differing lines: 44 of 211 reference instruction lines
 * differing bytes: 311
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46f3ac S_g8c46f3ac;
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct Arg0_dc Arg0_dc;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0x8];
    int fe8;
    char unknownec[0x1c];
    float f108;
    char unknown10c[0x200];
    short f30c;
    char unknown30e[0x16];
    Vector3 f324;
    char unknown330[0x4];
    Arg0_334 *f334;
    char unknown338[0x34];
    Arg0_36c *f36c;
    char unknown370[0x20];
    int f390;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x8];
    int f18;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct S_g8c46f3ac {
    char unknown0[0x8];
    float f08;
    float f0c;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
    Arg0_36c_8 *f08;
};
struct Frame {
    Block_frame_0 f00;
};
extern S_g8c46f3ac *g_8c46f3ac;
extern int call_8c0441d8(Object *, Vector3);
extern void move_and_capture_position(void *, void *, Vector3);
extern void operation_8c04a43c(void *, float, void *);
extern void call_8c04500c(Object *, void *, float, Vector3);
extern float squared_distance_xz(void *, void *);
extern void operation_8c01c5f0(Object *);
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern float errno_wrap_8c130334(float, float);
extern int signed_angle_delta(int, int);
extern void call_8c0bd124(Object *, int);
extern void operation_8c0521a0(void *);
extern void operation_8c05228c(void *);
extern void minimap_add_marker_8c102cd0(void *, int, int, int);
extern void operation_8c027090(int);
void operation_8c0bdbc4(Object *o)
{
    Frame frame;
    int t1;
    float t2;
    float t3;
    int t4;
    o->fdc->f18 |= 1;
    o->f34 &= -0x6240001;
    if (o->f334 == 0) {
        return;
    }
    if (o->f30c != 0) {
        if (o->f30c == 1) {
            goto L_8c0bdc68;
        }
        if (o->f30c == 2) {
            goto L_8c0bdcde;
        }
    } else {
        t1 = call_8c0441d8(o, *(Vector3 *)&o->f334->f324);
        if (t1 != 0) {
            o->f108 = g_8c46f3ac->f0c;
            o->fe8 |= 0x100;
            o->f30c = 1;
            move_and_capture_position((void *)o, (void *)(&o->f324), *(Vector3 *)&o->f324);
            operation_8c04a43c((void *)o, 0.0f, (void *)0);
            goto L_8c0bdcee;
L_8c0bdc68:;
            call_8c04500c(o, (void *)(o->f36c->f08), g_8c46f3ac->f08, *(Vector3 *)&o->f334->f324);
            t2 = squared_distance_xz((void *)(((char *)o + 0x164)), (void *)(((char *)o + 0x3c)));
            if (22500.0f > t2) {
                o->f390 &= -0x11;
            } else {
                o->f390 |= 0x10;
            }
            if (((o->f36c->f04 + o->fdc->f0c) * (o->f36c->f04 + o->fdc->f0c)) > t2) {
                o->f30c = 2;
                goto L_8c0bdcee;
L_8c0bdcde:;
                o->f390 &= -0x11;
                o->f30c = 0;
            }
        }
    }
L_8c0bdcee:;
    operation_8c01c5f0(o);
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f334->f324;
    vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(&o->f324));
    t3 = errno_wrap_8c130334((&frame)->f00.f00, (&frame)->f00.f08);
    t4 = signed_angle_delta((int)(o->f64), (int)((int)(t3 * 65536.0f / 6.28318405f)));
    call_8c0bd124(o, t4);
    operation_8c0521a0((void *)o);
    operation_8c05228c((void *)o);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    operation_8c027090((int)o);
}
