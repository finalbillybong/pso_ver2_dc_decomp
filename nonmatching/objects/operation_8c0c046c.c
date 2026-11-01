/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c046c
 * function: operation_8c0c046c
 * language: c
 * reference size: 860 bytes
 * compiled size: 860 bytes (+0.0%)
 * differing lines: 32 of 342 reference instruction lines
 * differing bytes: 21
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
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
typedef struct S_vv1 S_vv1;
typedef struct S_vv23 S_vv23;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x88];
    short ff0;
    char unknownf2[0xa6];
    short f198;
    char unknown19a[0x170];
    short f30a;
    char unknown30c[0x24];
    short f330;
    char unknown332[0x2];
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
    char unknown3a8[0x44];
    int f3ec;
    float f3f0;
    float f3f4;
    char unknown3f8[0x4];
    int f3fc;
};
struct S_vv1 {
    Vector3 f00;
};
struct Arg0_334 {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0x2dc];
    Vector3 f324;
};
struct Frame {
    Block_frame_0 f00;
};
struct Arg0_36c {
    float f00;
    char unknown4[0x4];
    Arg0_36c_8 *f08;
};
struct S_vv23 {
    int f00;
};
extern void operation_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
extern int check_range_8c01cf68(void *, float);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern float call_8c130334(float, float);
extern int angle_difference(int, int);
extern int call_8c18e768(int, int);
extern void call_8c044410(Object *, float, void *);
extern void apply_object_velocity(void *);
extern void operation_8c0521a0(Object *);
extern void operation_8c05228c(Object *);
extern void call_8c0446f8(Object *, float, float, float, void *);
extern int call_8c0c3184(Object *, float);
void operation_8c0c046c(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int v11;
    int v15;
    int v14;
    S_vv23 *v23;
    short v31;
    int t1;
    int t2;
    float t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    o->f34 &= -0x1000001;
    if (o->f398 == -1) {
        return;
    }
    switch (o->f398) {
    case 0:
        o->f3a4 &= -0x40001;
        o->f34 &= -0x4040001;
        o->ff0 = 1;
        o->f3ec = 0;
        if (o->f334 != 0) {
            v1 = (S_vv1 *)((char *)o + 0x164);
            *(Vector3 *)&v1->f00 = *(Vector3 *)&o->f334->f324;
        }
        o->f398 = 1;
    case 1:
        operation_8c01c5f0(o);
        operation_8c04a43c((void *)o, 0.0f, (void *)0);
        t1 = check_range_8c01cf68((void *)o, 4.0f);
        if (t1 == 0) {
            t2 = check_range_8c01cf68((void *)o, 20.0f);
            if (t2 == 0) {
                goto L_8c0c051a;
            }
        }
        play_se_8c05fbf8(0x30023, (void *)(((char *)o + 0x3c)), 0, 0);
L_8c0c051a:;
        if (o->f334 != 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f334->f3c;
            vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(((char *)o + 0x3c)));
            if (!(((&frame)->f00.f00 * (&frame)->f00.f00 + (&frame)->f00.f08 * (&frame)->f00.f08) > 160000.0f)) {
                t3 = call_8c130334((&frame)->f00.f08, (&frame)->f00.f00);
                t4 = angle_difference((int)(-(int)(t3 * 65536.0f / 6.28318405f) + 0x4000), (int)(o->f64));
                if (0xaaa > t4) {
                    t5 = call_8c18e768((int)(o->f198), 4);
                    if (t5 >= o->f330) {
                        v14 = (int)0xa;
                    } else {
                        if (o->f3fc != 0) {
                            v11 = (int)0xa;
                        } else {
                            v11 = (int)9;
                        }
                        o->f3fc ^= 1;
                        v14 = (int)v11;
                    }
                    if (((o->f3a4 & 1)) != 0) {
                        return;
                    }
                    v15 = (int)(short)o->f30a;
                    if (v15 == v14) {
                        return;
                    }
                    o->f39c = (int)(v15);
                    o->f390 = (int)(v14);
                    return;
                }
            }
        }
        t6 = call_8c18e768((int)(o->f36c->f08), 2);
        o->f64 = (Arg0_64 *)((int)o->f64 + t6);
        call_8c044410(o, o->f3f4, (void *)(o->f64));
        apply_object_velocity((void *)o);
        v23 = (S_vv23 *)&o->f3ec;
        t7 = call_8c18e768((int)(o->f36c->f08), 2);
        v23->f00 += t7;
        if (o->f3ec > 0x10000) {
            o->f3f0 = 0.0f;
            o->f398 = 2;
        }
        operation_8c0521a0(o);
        operation_8c05228c(o);
        return;
    case 2:
        call_8c0446f8(o, o->f3f4, 100.0f, 50.0f, (void *)(o->f36c->f08));
        operation_8c01c5f0(o);
        operation_8c04a43c((void *)o, (float)0, (void *)(int)(0.0f));
        t8 = check_range_8c01cf68((void *)o, 4.0f);
        if (t8 == 0) {
            t9 = check_range_8c01cf68((void *)o, 20.0f);
            if (t9 == 0) {
                goto L_8c0c06a8;
            }
        }
        play_se_8c05fbf8(0x30023, (void *)(((char *)o + 0x3c)), 0, 0);
L_8c0c06a8:;
        o->f3f0 += o->f3f4;
        if (o->f3f0 > 100.0f) {
            t10 = call_8c0c3184(o, o->f36c->f00);
            if (t10 != 0) {
                o->f3ec = 0;
                o->f398 = 1;
            } else {
                if (((o->f3a4 & 1)) == 0) {
                    v31 = (short)o->f30a;
                    if (v31 != 0) {
                        o->f39c = (int)(v31);
                        o->f390 = 0;
                    }
                }
            }
        }
        operation_8c0521a0(o);
        operation_8c05228c(o);
    }
}
