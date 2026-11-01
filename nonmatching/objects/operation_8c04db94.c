/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04db94
 * function: operation_8c04db94
 * language: c
 * reference size: 624 bytes
 * compiled size: 636 bytes (+1.9%)
 * differing lines: 96 of 239 reference instruction lines
 * differing bytes: 576
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
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_33c Arg0_33c;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_x35104 S_x35104;
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
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0xe];
    float f100;
    char unknown104[0xc];
    int f110;
    char unknown114[0x1f8];
    short f30c;
    char unknown30e[0x26];
    Arg0_334 *f334;
    char unknown338[0x4];
    Arg0_33c *f33c;
    char unknown340[0x14];
    unsigned short f354;
    char unknown356[0x16];
    Arg0_36c *f36c;
    char unknown370[0x1c];
    Arg0_38c *f38c;
};
struct Arg0_36c {
    float f00;
    float f04;
    int f08;
};
struct S_x35104 {
    float f00;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_33c {
    char unknown0[0xc];
    int f0c;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
extern int call_8c24e644(int, void *);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern void update_last_effect(int);
extern void operation_8c01c5f0(Object *);
extern float call_8c04500c(Object *, int, float, Vector3);
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern float call_8c130334(float, float);
extern int angle_difference(int, int);
extern void call_8c044bd4(Object *, int, float, float, Vector3);
extern float squared_distance_xz(void *, void *);
extern void refresh_follow_effect_8c052180(void *);
extern void minimap_add_marker_8c102cd0(void *, int, int, int);
void operation_8c04db94(Object *o)
{
    Frame frame;
    int v2;
    float v1;
    char *v3;
    int v5;
    float v7;
    float v16;
    float v17;
    float v22;
    float v30;
    float v23;
    int t1;
    int t2;
    float t3;
    int t4;
    float t5;
    float t6;
    o->f34 &= -0x4040001;
    v1 = (float)o->f36c->f04;
    if (((o->f34 & 0x2000)) != 0) {
        v2 = (int)(int)((float)o->f36c->f08 * 2.0f);
        o->f100 = ((S_x35104 *)((int)o->f110 + 8 + (o->ff0 << 4)))->f00 * 2.0f;
        t1 = call_8c24e644(0x30000, (void *)(o->f38c));
        call_8c05fd7c(t1, o, (void *)(((char *)o + 0x3c)), 0, 0);
        v5 = (int)v2;
        v7 = (float)(v1 * 2.0f);
    } else {
        v3 = (char *)o->f36c->f08;
        t2 = call_8c24e644(0x30001, (void *)(o->f38c));
        call_8c05fd7c(t2, o, (void *)(((char *)o + 0x3c)), 0, 0);
        update_last_effect(-0x200);
        v5 = (int)v3;
        v7 = (float)v1;
    }
    operation_8c01c5f0(o);
    if (o->f334 == 0) {
    } else {
        if (o->f30c != 0) {
            if (o->f30c == 1) {
                goto L_8c04dcde;
            }
            o->f30c = 0;
        }
        t6 = call_8c04500c(o, v5, v7 * 0.125f, *(Vector3 *)&o->f334->f324);
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f334->f324;
        vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x324)));
        t3 = call_8c130334((&frame)->f00.f00, (&frame)->f00.f08);
        t4 = angle_difference((int)(o->f64), (int)((int)(t3 * 65536.0f / 6.28318405f)));
        v16 = (float)t6;
        v17 = (float)(v7 * 0.125f);
        if (o->f33c->f0c > t4) {
            o->f30c = 1;
            v22 = (float)t6;
            v23 = (float)(v7 * 0.125f);
            goto L_8c04dd3e;
L_8c04dcde:;
            call_8c044bd4(o, v5, v7, 40.0f, *(Vector3 *)&o->f334->f324);
            t5 = squared_distance_xz((void *)(((char *)o + 0x164)), (void *)(((char *)o + 0x324)));
            if (((v7 + o->fdc->f0c) * (v7 + o->fdc->f0c)) > t5) {
                if ((o->f354 & 0xffff) == 0xffff) {
                    o->f334 = (Arg0_334 *)0;
                } else {
                    o->f30c = 0;
                }
            }
            v16 = (float)t5;
            v17 = (float)((v7 + o->fdc->f0c) * (v7 + o->fdc->f0c));
        }
        v22 = (float)v16;
        v23 = (float)v17;
L_8c04dd3e:;
        v30 = (float)o->f36c->f00;
        if (v22 > (v30 * v30)) {
            o->f334 = (Arg0_334 *)0;
        }
        v7 = (float)v23;
    }
    refresh_follow_effect_8c052180((void *)o);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}
