/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ced44
 * function: operation_8c0ced44
 * language: c
 * reference size: 1564 bytes
 * compiled size: 1560 bytes (-0.3%)
 * differing lines: 192 of 562 reference instruction lines
 * differing bytes: 1123
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46fab8 S_g8c46fab8;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_3b0 Arg0_3b0;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_dc Arg0_dc;
typedef struct S_vv1 S_vv1;
typedef struct S_x15344_0 S_x15344_0;
typedef struct S_x17136_0 S_x17136_0;
typedef struct S_x17248_0 S_x17248_0;
typedef struct S_x17584 S_x17584;
typedef struct S_x88464 S_x88464;
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
    char unknown68[0x74];
    Arg0_dc *fdc;
    char unknowne0[0xc];
    int fec;
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x9c];
    short f198;
    char unknown19a[0x170];
    short f30a;
    char unknown30c[0xc];
    float f318;
    char unknown31c[0x4];
    float f320;
    Vector3 f324;
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x28];
    int f384;
    char unknown388[0x8];
    int f390;
    char unknown394[0x4];
    int f398;
    int f39c;
    int f3a0;
    int f3a4;
    short f3a8;
    char unknown3aa[0x4];
    short f3ae;
    char unknown3b0[0x4];
    int f3b4;
    int f3b8;
    char unknown3bc[0x1];
    char f3bd;
    char f3be;
};
struct S_vv1 {
    char unknown0[0x18];
    int f18;
};
struct S_x88464 {
    int f00;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_g8c46fab8 {
    char unknown0[0x18];
    int f18;
};
struct S_x17248_0 {
    char unknown0[0x4];
    short f04;
};
struct S_x17584 {
    int f00;
};
extern int g_8c46fac4;
extern int g_8c46fac8;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c0d0118(Object *);
extern void call_8c044410(Object *, float, void *);
extern void call_8c0cff84(Object *);
extern float object_random_fraction(void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void call_8c0e87c0(int, int, Object *, int, int);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void operation_8c01c5f0(Object *);
extern int query_capped_segment(void *, void *);
extern void apply_object_velocity(void *);
extern void set_fields_8c0cfedc(void *);
extern void operation_8c0e8da8(void *);
extern float distance_xz(void *, void *);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern int mode_is_3_8c0e8d98(void *);
extern void operation_8c04a43c(void *, float, void *);
extern void operation_8c0521a0(void *);
extern void operation_8c05228c(void *);
void operation_8c0ced44(Object *o)
{
    Frame frame;
    int v3;
    int v84;
    int v7;
    int v79;
    int v86;
    int v61;
    int v4;
    int v29;
    char *v13;
    int v82;
    char *v83;
    int v2;
    int v28;
    int v78;
    int v9;
    int v62;
    int v30;
    char *v31;
    int v81;
    int t2;
    S_vv1 *v1;
    int v5;
    char *v6;
    char *v85;
    int v32;
    int v102;
    float t1;
    int v80;
    int t3;
    float t4;
    float t5;
    float t6;
    int t7;
    if (((o->f3a4 & 0x2000000)) != 0) {
        call_8c0d0118(o);
        return;
    }
    switch (o->f398) {
    case 0:
        o->f34 &= -0x200001;
        o->f3a4 &= -0x800001;
        v1 = (S_vv1 *)o->fdc;
        v1->f18 |= 0x14000000;
        o->f34 |= 0x4000000;
        o->ff0 = 4;
        call_8c044410(o, -7.0f, (void *)(o->f64));
        call_8c0cff84(o);
        v2 = (int)0x3b0;
        v3 = (int)0x20000;
        v4 = (int)0x3a4;
        v5 = (int)0;
        goto L_8c0ceece;
        v6 = (char *)v5;
L_8c0cee38:;
        v7 = (int)((int)(v6) << 2);
        if (*(int *)((char *)((char *)((int)o + v2) + 0x0) + (v7)) == 0) {
            t1 = object_random_fraction((void *)o);
            if (!(0.5f > t1)) {
                t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x134);
                if (t2 != 0) {
                    if (o->f384 != 0) {
                        v9 = (int)g_8c46fac8;
                    } else {
                        v9 = (int)g_8c46fac4;
                    }
                    call_8c0e87c0(t2, (int)(v6), o, v9, (int)((int)o + (int)(v6) * 0xc + 0x3f0));
                }
                *(int *)((char *)((char *)((int)o + v2) + 0x0) + (v7)) = (int)(t2);
                v13 = (char *)((S_x88464 *)((int)o + v4))->f00;
                ((S_x88464 *)((int)o + v4))->f00 = v3 << (int)(v6) | (int)(v13);
            }
        }
        v5 = (int)(v6 + 1);
L_8c0ceece:;
        v6 = (char *)v5;
        if (3 > v5) {
            goto L_8c0cee38;
        }
        play_se_8c05fbf8(0x30006, (void *)(((char *)o + 0x3c)), 0, 0);
        o->fdc->f18 |= 0x14000000;
        o->f34 |= 0x4000000;
        o->f3a8 += 1;
        o->f398 = 1;
    case 1:
        operation_8c01c5f0(o);
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f324;
        (&frame)->f00.f00 = o->f318 + (&frame)->f00.f00;
        (&frame)->f00.f08 = o->f320 + (&frame)->f00.f08;
        t3 = query_capped_segment((void *)o, (void *)(&frame));
        if (t3 == 0) {
            apply_object_velocity((void *)o);
        } else {
            o->f320 = 0.0f;
            o->f318 = 0.0f;
        }
        o->f318 *= 0.75f;
        o->f320 *= 0.75f;
        if (o->ff0 != 0xe) {
            goto L_8c0cf324;
        }
        if (o->f384 == 0) {
            if (!(o->f3a8 >= 5)) {
                goto L_8c0cf018;
            }
        }
        set_fields_8c0cfedc((void *)o);
        goto L_8c0cf324;
L_8c0cf018:;
        o->f320 = 0.0f;
        o->f318 = 0.0f;
        o->f3ae = 1;
        o->f3a0 = (int)((*(S_g8c46fab8 **)((char *)0x8c46fab8 + (o->f384 << 2)))->f18);
        o->f398 = 2;
        break;
    case 2:
        *(int *)((char *)o + 0x3a0) -= 1;
        if (o->f3a0 > 0) {
            goto L_8c0cf324;
        }
        v28 = (int)0x3b0;
        v29 = (int)0x3bc;
        v30 = (int)0;
        goto L_8c0cf0d0;
        v31 = (char *)v30;
L_8c0cf07c:;
        v32 = (int)((int)(v31) << 2);
        if (*(int *)((char *)((char *)((int)o + v28) + 0x0) + (v32)) != 0) {
            t4 = object_random_fraction((void *)o);
            if (!(0.5f > t4)) {
                *(char *)((char *)((char *)((int)o + v29) + 0x0) + ((int)(v31))) = 1;
                operation_8c0e8da8((void *)(*(S_x15344_0 **)((char *)((char *)((int)o + v28) + 0x0) + (v32))));
            } else {
                *(char *)((char *)((char *)((int)o + v29) + 0x0) + ((int)(v31))) = 0;
            }
        }
        v30 = (int)(v31 + 1);
L_8c0cf0d0:;
        v31 = (char *)v30;
        if (3 > v30) {
            goto L_8c0cf07c;
        }
        v61 = (int)o->f3b4;
        if (v61 != 0) {
            if (o->f3b8 != 0) {
                if ((o->f3bd + o->f3be) == 0) {
                    t6 = distance_xz((void *)(&o->f324), (void *)(v61 + 0x128));
                    t5 = distance_xz((void *)(&o->f324), (void *)((int)o->f3b8 + 0x128));
                    if (t5 > t6) {
                        v62 = (int)1;
                    } else {
                        v62 = (int)2;
                    }
                    *(char *)((char *)((char *)o + 0x3bc) + (v62)) = 1;
                    operation_8c0e8da8((void *)(*(Arg0_3b0 **)((char *)((char *)o + 0x3b0) + (v62 << 2))));
                }
            }
        }
        o->f3a4 |= 0x800000;
        o->f398 = 3;
        break;
    case 3:
        call_8c0cff84(o);
        call_8c05fd7c(0x30007, o, (void *)(((char *)o + 0x3c)), 0, 0);
        v78 = (int)0x3b0;
        v79 = (int)1;
        v80 = (int)0x20000;
        v81 = (int)0x3a4;
        v82 = (int)0;
        goto L_8c0cf220;
        v83 = (char *)v82;
L_8c0cf1c4:;
        v86 = (int)v79;
        if (*(char *)((char *)((char *)o + 0x3bc) + ((int)(v83))) != 0) {
            v84 = (int)((int)(v83) << 2);
            v86 = (int)v79;
            if (*(int *)((char *)((char *)((int)o + v78) + 0x0) + (v84)) != 0) {
                t7 = mode_is_3_8c0e8d98((void *)(*(S_x17136_0 **)((char *)((char *)((int)o + v78) + 0x0) + (v84))));
                if (t7 != 0) {
                    (*(S_x17248_0 **)((char *)((char *)((int)o + v78) + 0x0) + (v84)))->f04 |= 1;
                    *(int *)((char *)((char *)((int)o + v78) + 0x0) + (v84)) = 0;
                    v85 = (char *)((S_x17584 *)((int)o + v81))->f00;
                    ((S_x17584 *)((int)o + v81))->f00 = ~(v80 << (int)(v83)) & (int)(v85);
                    v86 = (int)v79;
                } else {
                    v86 = (int)0;
                }
            }
        }
        v82 = (int)(v83 + 1);
        v79 = (int)v86;
L_8c0cf220:;
        v83 = (char *)v82;
        if (3 > v82) {
            goto L_8c0cf1c4;
        }
        if (v79 == 0) {
            goto L_8c0cf324;
        }
        play_se_8c05fbf8(0x30008, (void *)(((char *)o + 0x3c)), 0, 0);
        o->f398 = 4;
        break;
    case 4:
        operation_8c01c5f0(o);
        if (((o->f34 & 0x800)) == 0) {
            if (!(25.0f > o->ff8)) {
                o->fdc->f18 &= -0x14000001;
                o->f34 &= -0x4000001;
            }
        }
        if (o->fec == 8) {
            goto L_8c0cf324;
        }
        o->f34 &= -0xa01;
        o->f330 = o->f35a = o->f198;
        o->f3a4 = (unsigned int)o->f3a4 >> 1 << 1;
        if (((o->f3a4 & 1)) == 0) {
            v102 = (int)o->f30a;
            if (v102 != 1) {
                o->f39c = (int)(v102);
                o->f390 = 1;
            }
        }
        o->fdc->f18 &= -0x14000001;
        o->f34 &= -0x4000001;
        break;
    case -1:
        o->f34 &= -0x201;
    }
L_8c0cf324:;
    operation_8c04a43c((void *)o, 0.0f, (void *)0);
    operation_8c0521a0((void *)o);
    operation_8c05228c((void *)o);
}
