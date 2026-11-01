/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04f5a0
 * function: operation_8c04f5a0
 * language: c
 * reference size: 684 bytes
 * compiled size: 684 bytes (+0.0%)
 * differing lines: 10 of 257 reference instruction lines
 * differing bytes: 8
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_38c Arg0_38c;
typedef struct Arg0_64 Arg0_64;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2e];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x8];
    float f70;
    char unknown74[0x84];
    float ff8;
    char unknownfc[0x210];
    short f30c;
    char unknown30e[0xa];
    float f318;
    char unknown31c[0x4];
    float f320;
    char unknown324[0x54];
    float f378;
    float f37c;
    char unknown380[0xc];
    Arg0_38c *f38c;
    char unknown390[0x2c];
    int f3bc;
};
struct Frame {
    Block_frame_0 f00;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c01c5f0(Object *);
extern void operation_8c04a43c(void *, float, void *);
extern int check_range_8c01cf68(void *, float);
extern int call_8c24e644(int, void *);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void apply_object_velocity(void *);
extern void create_effect_777c(void *, int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3be38c(int, Frame *, Frame *);
extern void njPopMatrix_8c38accc(int);
extern void call_8c3bdf60(Frame *, void *);
extern int get_current_area_8c032b10(void);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TObjCGrass_ctor_8c0542b0(int, int, int, Vector3);
extern void create_resource_effect_8c108170(void *, int);
extern void create_effect_at_8c108394(void *, int);
void operation_8c04f5a0(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    o->f34 |= 0x4040000;
    operation_8c01c5f0(o);
    if (o->f30c != 0) {
        if (o->f30c == 1) {
            goto L_8c04f60a;
        }
        if (o->f30c == 2) {
            goto L_8c04f652;
        }
        o->f30c = 0;
    }
    operation_8c04a43c((void *)o, 0.0f, (void *)0);
    t1 = check_range_8c01cf68((void *)o, 0.0f);
    if (t1 == 0) {
    } else {
        t2 = call_8c24e644(0x30004, (void *)(o->f38c));
        play_se_8c05fbf8(t2, (void *)(((char *)o + 0x3c)), 0, 0);
        o->f30c = 1;
        goto L_8c04f764;
L_8c04f60a:;
        apply_object_velocity((void *)o);
        o->f318 *= 0.5f;
        o->f320 *= 0.5f;
        t3 = check_range_8c01cf68((void *)o, 23.0f);
        if (t3 == 0) {
        } else {
            o->f30c = 2;
            create_effect_777c((void *)(((char *)o + 0x3c)), 0xf0);
            goto L_8c04f764;
L_8c04f652:;
            t4 = check_range_8c01cf68((void *)o, 32.0f);
            if (t4 != 0) {
                (&frame)->f00.f04 = 0.0f;
                (&frame)->f00.f00 = 0.0f;
                (&frame)->f00.f08 = -15.0f;
                njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                njRotateY_8c37df90(0, (void *)(o->f64));
                call_8c3be38c(0, (Frame *)((&frame)), (Frame *)((&frame)));
                njPopMatrix_8c38accc(1);
                call_8c3bdf60((Frame *)((&frame)), (void *)(((char *)o + 0x3c)));
                t5 = get_current_area_8c032b10();
                switch (t5) {
                case 3:
                case 4:
                case 5:
                    t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x184);
                    if (t6 != 0) {
                        TObjCGrass_ctor_8c0542b0(t6, (int)((int)(o->f37c + 12.0f)), 0xf0, *(Vector3 *)&(&frame)->f00);
                    }
                }
                t7 = call_8c24e644(0x3000a, (void *)(o->f38c));
                play_se_8c05fbf8(t7, (void *)(((char *)o + 0x3c)), 0, 0);
                create_resource_effect_8c108170((void *)(((char *)o + 0x3c)), 0xa);
                create_effect_at_8c108394((void *)(((char *)o + 0x3c)), 0x1e);
            }
            o->f70 -= 0.01f;
            if (0.0f > o->f70) {
                o->f70 = 0.0f;
            }
            o->f378 -= 0.01f;
            if (-5.0f > o->f378) {
                o->f34 |= 0x2000000;
                o->f378 = -5.0f;
                o->f04 |= 1;
            }
        }
    }
L_8c04f764:;
    if (32.0f > o->ff8) {
        *(int *)((char *)o + 0x3bc) += 1;
        if (o->f3bc == 4) {
            o->f3bc = 0;
            create_effect_777c((void *)(((char *)o + 0x3a8)), 0xf2);
        }
    }
}
