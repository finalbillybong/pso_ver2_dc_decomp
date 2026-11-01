/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0396e8
 * function: operation_8c0396e8
 * language: c
 * reference size: 572 bytes
 * compiled size: 588 bytes (+2.8%)
 * differing lines: 58 of 214 reference instruction lines
 * differing bytes: 310
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +16 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c462a0c S_g8c462a0c;
typedef struct S_g8c462a0c_0 S_g8c462a0c_0;
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv50 S_vv50;
struct Object {
    char unknown0[0xdc];
    Arg0_dc *fdc;
    char unknowne0[0x8];
    int fe8;
    int fec;
    short ff0;
    char unknownf2[0x16];
    float f108;
    char unknown10c[0x200];
    short f30c;
    char unknown30e[0x16];
    Vector3 f324;
    char unknown330[0x4];
    Arg0_334 *f334;
    char unknown338[0x20];
    short f358;
    char unknown35a[0x12];
    Arg0_36c *f36c;
    char unknown370[0x14];
    int f384;
    char unknown388[0x4];
    Arg0_38c *f38c;
    char unknown390[0x10];
    int f3a0;
    int f3a4;
};
struct S_g8c462a0c_0 {
    char unknown0[0x8];
    float f08;
    float f0c;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_36c {
    float f00;
    float f04;
    Arg0_36c_8 *f08;
};
struct S_vv50 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_dc {
    char unknown0[0xc];
    float f0c;
};
extern S_g8c462a0c *g_8c462a0c;
extern void operation_8c04a43c(void *, void *, float);
extern int check_range_8c01cf68(void *, float);
extern int call_8c24e644(int, void *);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void update_last_effect(int);
extern int call_8c0441d8(Object *, Vector3);
extern void move_and_capture_position(void *, void *, Vector3);
extern float call_8c044bd4(Object *, void *, float, float, Vector3);
extern float squared_distance_xz(void *, void *);
extern void operation_8c01c5f0(Object *);
extern void refresh_follow_effect_8c052180(void *);
void operation_8c0396e8(Object *o)
{
    void *v1;
    float v2;
    S_vv50 *v50;
    float v51;
    int t1;
    int t2;
    int t3;
    float t4;
    float t5;
    int t6;
    int t7;
    int t8;
    if (o->f30c != 0) {
        if (o->f30c == 1) {
            goto L_8c0397bc;
        }
    } else {
        v1 = (void *)0;
        v2 = (float)0.0f;
        operation_8c04a43c((void *)o, (void *)v1, v2);
        t1 = check_range_8c01cf68((void *)o, 0.0f);
        if (t1 != 0) {
            t2 = call_8c24e644(0x3000a, (void *)(o->f38c));
            play_se_8c05fbf8(t2, (void *)(((char *)o + 0x3c)), 0, 0);
            update_last_effect(-0x200);
        }
        if (o->fec == 0x20) {
            goto L_8c039882;
        }
        o->f108 = (*(S_g8c462a0c_0 **)((char *)((char *)g_8c462a0c + 0x0) + (o->f384 << 2)))->f0c;
        o->fe8 |= 0x100;
        o->ff0 = 2;
        t3 = call_8c0441d8(o, *(Vector3 *)&o->f334->f324);
        if (t3 != 0) {
            move_and_capture_position((void *)o, (void *)(&o->f324), *(Vector3 *)&o->f324);
        }
        o->f30c = 1;
        o->f3a4 = 0;
        o->f358 = 0x96;
        goto L_8c039882;
    }
L_8c0397bc:;
    v50 = (S_vv50 *)o->f334;
    if (v50 != 0) {
        t4 = call_8c044bd4(o, (void *)(o->f36c->f08), (*(S_g8c462a0c_0 **)((char *)((char *)g_8c462a0c + 0x0) + (o->f384 << 2)))->f08, 30.0f, *(Vector3 *)&v50->f324);
        v51 = (float)o->f36c->f00;
        if (t4 > (v51 * v51)) {
            o->f334 = (Arg0_334 *)0;
        }
        t5 = squared_distance_xz((void *)(((char *)o + 0x164)), (void *)(((char *)o + 0x3c)));
        if (!(((o->f36c->f04 + o->fdc->f0c) * (o->f36c->f04 + o->fdc->f0c)) > t5) && (short)--o->f358 >= 0) {
            goto L_8c039844;
        }
        o->f3a0 = 0;
    }
L_8c039844:;
    t6 = check_range_8c01cf68((void *)o, 4.0f);
    if (t6 == 0) {
        t7 = check_range_8c01cf68((void *)o, 19.0f);
        if (t7 == 0) {
            goto L_8c039882;
        }
    }
    t8 = call_8c24e644(0x30001, (void *)(o->f38c));
    play_se_8c05fbf8(t8, (void *)(((char *)o + 0x3c)), 0, 0);
    update_last_effect(-0x400);
L_8c039882:;
    operation_8c01c5f0(o);
    refresh_follow_effect_8c052180((void *)o);
}
