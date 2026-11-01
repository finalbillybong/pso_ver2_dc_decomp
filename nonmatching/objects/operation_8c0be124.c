/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0be124
 * function: operation_8c0be124
 * language: c
 * reference size: 1408 bytes
 * compiled size: 1408 bytes (+0.0%)
 * differing lines: 4 of 463 reference instruction lines
 * differing bytes: 6
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
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Frame Frame;
typedef struct S_g8c46f3ac S_g8c46f3ac;
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_36c Arg0_36c;
typedef struct Arg0_36c_8 Arg0_36c_8;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct Arg0_dc Arg0_dc;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xa4];
    Arg0_dc *fdc;
    char unknowne0[0x8];
    int fe8;
    int fec;
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0xc];
    float f108;
    char unknown10c[0x200];
    short f30c;
    char unknown30e[0xa];
    float f318;
    float f31c;
    float f320;
    Vector3 f324;
    char unknown330[0x4];
    S_c8c021ef8 *f334;
    char unknown338[0x1c];
    unsigned short f354;
    short f356;
    char unknown358[0x14];
    Arg0_36c *f36c;
    char unknown370[0x1c];
    Arg0_38c *f38c;
    char unknown390[0x28];
    Arg0_3b8 *f3b8;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct S_c8c021ef8 {
    char unknown0[0x324];
    Vector3 f324;
    char unknown330[0x4c];
    int f37c;
};
struct Frame {
    Vector3 f00;
};
struct Arg0_334 {
    char unknown0[0x324];
    Vector3 f324;
};
struct Arg0_36c {
    char unknown0[0x4];
    float f04;
    Arg0_36c_8 *f08;
};
struct S_g8c46f3ac {
    float f00;
    float f04;
};
extern int g_8c44be04;
extern S_g8c46f3ac *g_8c46f3ac;
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c012a14(int);
extern void vector_sub_in_place_8c37f6f0(Frame *, void *);
extern int operation_43fb4(void *, int, void *);
extern void operation_8c04a43c(float, void *, void *);
extern int query_capped_segment(void *, void *);
extern void call_8c044320(Object *, float, Vector3, Vector3);
extern int check_range_8c01cf68(void *, float);
extern int call_8c24e644(int, void *);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void operation_8c0be070(Object *);
extern void call_8c0bf7b8(Object *);
extern void apply_object_velocity(void *);
extern void operation_8c01c5f0(Object *);
extern int angle_halfway(int, int);
extern void operation_8c0521a0(Object *);
extern void operation_8c05228c(Object *);
extern void minimap_add_marker_8c102cd0(void *, int, int, int);
extern void operation_8c027090(Object *);
void operation_8c0be124(Object *o)
{
    Frame frame;
    int v1;
    float v26;
    float v34;
    float v42;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int v_off;
    o->fdc->f18 |= 1;
    o->f34 &= -0x6040001;
    v1 = (unsigned short)o->f354;
    if ((unsigned int)0x1000 > (unsigned int)(unsigned short)v1) {
        t1 = lookup_low_id((int)((unsigned short)v1));
        if (t1 != 0 && t1->f37c == g_8c44be04) {
            o->f334 = t1;
            goto L_8c0be1c2;
        }
        o->f334 = (S_c8c021ef8 *)0;
    } else {
        if ((unsigned int)0x4000 > (unsigned int)(unsigned short)v1) {
            t2 = operation_8c012a14(v1);
            o->f334 = (S_c8c021ef8 *)t2;
        } else {
            o->f354 = 0xffff;
            o->f334 = (S_c8c021ef8 *)0;
        }
    }
L_8c0be1c2:;
    switch (o->f30c) {
    case 0:
        if (o->f334 == 0) {
            o->f30c = 0;
            o->f34 &= -0x200001;
            o->f356 = 0;
            goto L_8c0be634;
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f334->f324;
        vector_sub_in_place_8c37f6f0((Frame *)((&frame)), (void *)(&o->f324));
        t3 = operation_43fb4((void *)o, (int)(o->f36c->f08), (void *)(&frame));
        if (((o->f34 & 0x800000)) == 0) {
            operation_8c04a43c(0.0f, (void *)o, (void *)0);
        }
        if (!(0x10 > t3)) {
            goto L_8c0be634;
        }
        o->f30c = 1;
        o->ff0 = 2;
        o->f108 = g_8c46f3ac->f00;
        o->fe8 |= 0x100;
        t4 = query_capped_segment((void *)o, (void *)(&o->f334->f324));
        if (t4 == 1) {
            o->f320 = 0.0f;
            o->f31c = 0.0f;
            o->f318 = 0.0f;
            goto L_8c0be634;
        }
        call_8c044320(o, o->f36c->f04, *(Vector3 *)&o->f324, *(Vector3 *)&o->f334->f324);
        break;
    case 1:
        o->ff0 = 2;
        t5 = check_range_8c01cf68((void *)o, 12.0f);
        if (t5 == 0) {
            goto L_8c0be634;
        }
        o->f30c = 2;
        t6 = call_8c24e644(0x30001, (void *)(o->f38c));
        play_se_8c05fbf8(t6, (void *)(((char *)o + 0x3c)), 0, 0);
        break;
    case 2:
        o->ff0 = 2;
        t7 = check_range_8c01cf68((void *)o, 16.0f);
        if (t7 != 0) {
            operation_8c0be070(o);
        }
        v26 = (float)o->ff8;
        if (!(15.0f > v26)) {
            if (!(v26 > 20.0f)) {
                call_8c0bf7b8(o);
            }
        }
        t8 = check_range_8c01cf68((void *)o, 21.0f);
        if (t8 == 0) {
            goto L_8c0be634;
        }
        o->f30c = 3;
        break;
    case 3:
        o->ff0 = 2;
        apply_object_velocity((void *)o);
        t9 = check_range_8c01cf68((void *)o, 32.0f);
        if (t9 == 0) {
            goto L_8c0be634;
        }
        o->f30c = 4;
        t10 = call_8c24e644(0x30001, (void *)(o->f38c));
        play_se_8c05fbf8(t10, (void *)(((char *)o + 0x3c)), 0, 0);
        break;
    case 4:
        o->ff0 = 2;
        t11 = check_range_8c01cf68((void *)o, 37.0f);
        if (t11 != 0) {
            operation_8c0be070(o);
        }
        v34 = (float)o->ff8;
        if (!(32.0f > v34)) {
            if (!(v34 > 40.0f)) {
                call_8c0bf7b8(o);
            }
        }
        t12 = check_range_8c01cf68((void *)o, 42.0f);
        if (t12 == 0) {
            goto L_8c0be634;
        }
        o->f30c = 5;
        break;
    case 5:
        o->ff0 = 2;
        apply_object_velocity((void *)o);
        t13 = check_range_8c01cf68((void *)o, 52.0f);
        if (t13 == 0) {
            goto L_8c0be634;
        }
        o->f30c = 6;
        t14 = call_8c24e644(0x30001, (void *)(o->f38c));
        play_se_8c05fbf8(t14, (void *)(((char *)o + 0x3c)), 0, 0);
        break;
    case 6:
        o->ff0 = 2;
        t15 = check_range_8c01cf68((void *)o, 54.0f);
        if (t15 != 0) {
            operation_8c0be070(o);
        }
        v42 = (float)o->ff8;
        if (!(52.0f > v42)) {
            if (!(v42 > 60.0f)) {
                call_8c0bf7b8(o);
            }
        }
        if (o->fec == 4) {
            goto L_8c0be634;
        }
        o->f30c = 7;
        o->f356 = (int)g_8c46f3ac->f04;
        break;
    case 7:
        if (!((short)--*(short *)((char *)o + 0x356) >= 0)) {
            o->f30c = 0;
            o->f34 &= -0x200001;
            o->f356 = 0;
        }
    }
L_8c0be634:;
    operation_8c01c5f0(o);
    v_off = 0x3b8;
    t16 = angle_halfway(*(int *)((char *)o + v_off), 0);
    *(int *)((char *)o + v_off) = t16;
    operation_8c0521a0(o);
    operation_8c05228c(o);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
    operation_8c027090(o);
}
