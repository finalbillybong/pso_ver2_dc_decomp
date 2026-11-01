/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c0d34
 * function: operation_8c0c0d34
 * language: c
 * reference size: 1596 bytes
 * compiled size: 1596 bytes (+0.0%)
 * differing lines: 46 of 596 reference instruction lines
 * differing bytes: 53
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46f3ec S_g8c46f3ec;
typedef struct Object Object;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv1 S_vv1;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    Vector3 f48;
    Vector3 f54;
    char unknown60[0x7c];
    Arg0_dc *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x4];
    float f100;
    float f104;
    char unknown108[0x202];
    short f30a;
    char unknown30c[0xc];
    float f318;
    float f31c;
    float f320;
    char unknown324[0x10];
    int f334;
    char unknown338[0x34];
    Arg0_36c *f36c;
    char unknown370[0x20];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x4];
    Vector3 f3ac;
    char unknown3b8[0x3c];
    float f3f4;
    char unknown3f8[0x28];
    float f420;
};
struct S_vv1 {
    Vector3 f00;
};
struct Frame {
    Vector3 f00;
};
struct Arg0_36c {
    float f00;
    char unknown4[0x4];
    int f08;
};
struct S_g8c46f3ec {
    float f00;
};
struct Arg0_dc {
    char unknown0[0x44];
    int f44;
};
extern S_g8c46f3ec *g_8c46f3ec;
extern void call_8c044320(Object *, float, Vector3, Vector3);
extern void call_8c0c3128(Object *, float);
extern void vector_sub_in_place_8c37f6f0(Frame *, int);
extern void call_8c0c2130(Object *, Frame *);
extern void operation_8c01c5f0(Object *);
extern void refresh_follow_effect_8c052180(void *);
extern void create_effect_777c(void *, int);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void call_8c3bdf60(void *, void *);
extern float distance_xz(void *, void *);
extern int check_range_8c01cf68(void *, float);
extern void transform_actor_records(void *);
extern void operation_43fb4(void *, int, void *);
extern void operation_8c051ff4(void *, void *, void *);
extern void operation_8c0521a0(Object *);
extern void operation_8c04a43c(float, void *, void *);
void operation_8c0c0d34(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int v7;
    float v14;
    int v22;
    short v42;
    float v62;
    int v70;
    float t1;
    int t2;
    o->f34 &= -0x800001;
    switch (o->f398) {
    case 0:
        o->f398 = 1;
        if (((o->f34 & 0x1000000)) != 0) {
            if (((o->f3a4 & 0x40000)) != 0) {
                v1 = (S_vv1 *)&o->f3ac;
                *(Vector3 *)&v1->f00 = *(Vector3 *)&o->f54;
                call_8c044320(o, o->f3f4, *(Vector3 *)&o->f3c, *(Vector3 *)&v1->f00);
                o->f3a4 &= -0x40001;
                o->f34 &= -0x4040001;
                o->f420 = 50.0f;
            } else {
                call_8c0c3128(o, o->f36c->f00);
                call_8c044320(o, o->f3f4, *(Vector3 *)&o->f3c, *(Vector3 *)&o->f3ac);
            }
            o->ff0 = 7;
            return;
        }
        o->f34 |= 0x1000000;
        o->ff0 = 6;
        o->f420 = 0.0f;
        call_8c0c3128(o, o->f36c->f00);
        if (o->f334 != 0) {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
            vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (int)((int)o->f334 + 0x3c));
            call_8c0c2130(o, (Frame *)((&frame)));
            call_8c044320(o, o->f3f4, *(Vector3 *)&o->f3c, *(Vector3 *)&o->f3ac);
            return;
        }
        *(Vector3 *)&o->f3ac = *(Vector3 *)&o->f54;
        call_8c044320(o, o->f3f4, *(Vector3 *)&o->f3c, *(Vector3 *)&o->f3ac);
        return;
    case 1:
        operation_8c01c5f0(o);
        call_8c044320(o, g_8c46f3ec->f00, *(Vector3 *)&o->f3c, *(Vector3 *)&o->f3ac);
        if (50.0f > o->f420) {
            v7 = (int)1;
            if (o->ff0 == 6 && 22.0f > o->ff8) {
                v7 = (int)0;
            }
            if (v7 != 0) {
                o->f420 += 2.2f;
            }
            refresh_follow_effect_8c052180((void *)o);
            if (o->ff0 == 6) {
                v14 = (float)o->ff8;
                if (!(22.0f > v14) && (o->f100 + 22.0f) > v14) {
                    v22 = (int)1;
                    goto L_8c0c105e;
                }
            }
            v22 = (int)0;
L_8c0c105e:;
            if (v22 == 0) {
                goto L_8c0c111e;
            }
            create_effect_777c((void *)(&o->f3c), 0xf0);
            play_se_8c05fbf8(0x30020, (void *)(&o->f3c), 0, 0);
        } else {
            o->f31c = 0.0f;
            *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
            call_8c3bdf60((void *)(&o->f3c), (void *)(&o->f318));
            t1 = distance_xz((void *)(&o->f3c), (void *)(&o->f3ac));
            if (!(t1 > ((10.0f + o->f3f4) * (10.0f + o->f3f4)))) {
                o->f398 = 2;
                o->f320 = 0.0f;
                o->f318 = 0.0f;
            }
            t2 = check_range_8c01cf68((void *)o, 10.0f);
            if (t2 != 0) {
                create_effect_777c((void *)(&o->f3c), 0xf0);
                play_se_8c05fbf8(0x30020, (void *)(&o->f3c), 0, 0);
            }
            transform_actor_records((void *)o);
        }
L_8c0c111e:;
        if (o->f420 > 15.0f) {
            operation_43fb4((void *)o, (int)(o->f36c->f08 << 1), (void *)(&o->f318));
        }
        operation_8c051ff4((void *)o, (void *)(&o->f3c), (void *)0);
        return;
    case 2:
        o->fdc->f44 |= 1;
        operation_8c01c5f0(o);
        o->f420 += -2.3f;
        if (!(o->f420 > 0.0f)) {
            o->f420 = 0.0f;
            o->f34 |= 0x800000;
            o->f34 &= -0x1000001;
            o->f31c = 0.0f;
            if (o->ff0 == 8) {
                goto L_8c0c12a6;
            }
            if (((o->f3a4 & 1)) != 0) {
                goto L_8c0c12a6;
            }
            v42 = (short)o->f30a;
            if (v42 == 0) {
                goto L_8c0c12a6;
            }
            o->f39c = (int)(v42);
            o->f390 = 0;
        } else {
            if (o->ff0 == 7) {
                if (o->f420 > ((1.0f / o->f104 + 40.0f) * 2.3f)) {
                    goto L_8c0c12a6;
                }
                o->ff0 = 8;
            } else {
                if ((int)o->ff8 != 0x14 && (int)o->ff8 != 0x28) {
                    goto L_8c0c12a6;
                }
                create_effect_777c((void *)(&o->f3c), 0xf0);
            }
        }
L_8c0c12a6:;
        if (o->ff0 == 8) {
            v62 = (float)o->ff8;
            if (!(42.0f > v62) && (o->f100 + 42.0f) > v62) {
                v70 = (int)1;
                goto L_8c0c12ea;
            }
        }
        v70 = (int)0;
L_8c0c12ea:;
        if (v70 != 0) {
            play_se_8c05fbf8(0x30023, (void *)(&o->f3c), 0, 0);
        }
        operation_8c0521a0(o);
        operation_8c04a43c(0.0f, (void *)o, (void *)0);
        return;
    case -1:
        if (o->f390 != 4 && o->f390 != 5) {
            o->f420 = 0.0f;
        }
        o->fdc->f44 = (unsigned int)o->fdc->f44 >> 1 << 1;
        o->f3a4 &= -0x40001;
        return;
    }
}
