/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c107750
 * function: TDeadSpot_ctor_8c107750
 * language: c
 * reference size: 1340 bytes
 * compiled size: 1372 bytes (+2.4%)
 * differing lines: 642 of 592 reference instruction lines
 * differing bytes: 1242
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +32 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011290 S_c8c011290;
typedef struct S_c8c011290_4 S_c8c011290_4;
typedef struct Frame Frame;
typedef struct S_frame_10 S_frame_10;
typedef struct S_frame_14 S_frame_14;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct S_vv1 S_vv1;
typedef struct S_vv6 S_vv6;
typedef struct S_x15152 S_x15152;
typedef struct S_x15920 S_x15920;
typedef struct S_x16208 S_x16208;
typedef struct S_x23984 S_x23984;
typedef struct S_x24176 S_x24176;
typedef struct S_x24464 S_x24464;
typedef struct Block_frame_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_3c;
typedef struct Block_p0_20 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_20;
typedef struct Block_frame_18 {
    float f00;
    float f04;
    float f08;
} Block_frame_18;
typedef struct Block_c8c011290_4_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_c8c011290_4_0;
struct Object {
    int tag;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    Block_p0_20 f20;
    char unknown2c[0x90];
    int fbc;
    int fc0;
    float fc4;
    float fc8;
};
struct Frame {
    char unknown0[0x4];
    float f04;
    float f08;
    char unknownc[0x4];
    S_frame_10 *f10;
    S_frame_14 *f14;
    Block_frame_18 f18;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    Block_frame_3c f3c;
};
struct S_vv1 {
    char unknown0[0xc];
    float f0c;
    float f10;
    int f14;
    char unknown18[0xc];
    float f24;
    float f28;
    int f2c;
    char unknown30[0xc];
    float f3c;
    float f40;
    int f44;
    char unknown48[0xc];
    float f54;
    float f58;
    int f5c;
};
struct Arg2 {
    Vector3 f00;
};
struct S_c8c011290 {
    char unknown0[0x4];
    S_c8c011290_4 *f04;
};
struct S_c8c011290_4 {
    Block_c8c011290_4_0 f00;
};
struct S_vv6 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
};
struct S_x16208 {
    float f00;
};
struct S_x15152 {
    float f00;
};
struct S_x15920 {
    float f00;
};
struct S_x23984 {
    float f00;
};
struct S_x24176 {
    float f00;
};
struct S_x24464 {
    float f00;
};
extern int g_8c30b770;
extern void TObject_ctor_8c0330e4(void *, void *);
extern S_c8c011290 *operation_8c011290(int, int);
extern int rand(void);
extern void call_8c0c510c(void *, void *, void *);
extern void njPushMatrixEx_8c38ae68(void);
extern void njUnitMatrix_8c37b5c4(int);
extern void njRotateY_8c37df90(int, void *);
extern void njRotateZ_8c37e02c(int, void *);
extern void njRotateX_8c37dd28(int, int);
extern void call_8c3be3f8(int, void *, void *, int);
extern void njPopMatrixEx_8c38ad10(void);
typedef struct StkArg {
    int f00;
    int f04;
} StkArg;
Object *TDeadSpot_ctor_8c107750(Object *o, int a1, Arg2 *a2, int a3, float f0, StkArg sp)
{
    Frame frame;
    Object **home = &o;
    int v2;
    S_vv1 *v1;
    S_vv6 *v6;
    float v4;
    float v9;
    float v8;
    float v5;
    float v7;
    float v11;
    float v10;
    float v13;
    float v12;
    float v14;
    float v15;
    float v16;
    int v22;
    int v20;
    S_c8c011290 *t1;
    int v18;
    int v38;
    int v17;
    int v19;
    int t2;
    int t3;
    S_c8c011290 *t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t12;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2698cc;
    o->tag = (int)(g_8c30b770);
    o->size = 0xcc;
    o->fbc = a3;
    o->fc0 = (int)(sp.f00);
    o->fc4 = f0;
    o->fc8 = -((float)sp.f04 * 0.2f);
    v1 = (S_vv1 *)((char *)o + 0x5c);
    v1->f0c = 0.0f;
    v1->f10 = 0.0f;
    v1->f14 = -1;
    v1->f24 = 0.0f;
    v1->f28 = 1.0f;
    v1->f2c = -1;
    v1->f3c = 1.0f;
    v1->f40 = 0.0f;
    v1->f44 = -1;
    v1->f54 = 1.0f;
    v1->f58 = 1.0f;
    v1->f5c = -1;
    *(Vector3 *)&(&frame)->f3c = *(Vector3 *)&a2->f00;
    (&frame)->f3c.f04 += 5.0f;
    t1 = operation_8c011290((int)(&(&frame)->f3c), 0x16ef);
    if (t1 == 0) {
        o->f04 |= 1;
        return o;
    }
    *(Vector3 *)&o->f20 = *(Vector3 *)&t1->f04->f00;
    t2 = rand();
    o->f20.f04 += (float)t2 / 32768.0f * 0.5f + 0.213456f;
    (&frame)->f24 = 0.0f;
    (&frame)->f28 = 0.0f;
    (&frame)->f2c = 1.0f;
    (&frame)->f30 = 0.0f;
    (&frame)->f34 = 1.0f;
    (&frame)->f38 = 0.0f;
    call_8c0c510c((void *)(((char *)t1->f04 + 0xc)), (void *)(&(&frame)->f14), (void *)(&(&frame)->f10));
    v2 = (int)(&frame)->f10;
    if (0x3000 > v2 || v2 > 0x5000) {
        o->f04 |= 1;
        return o;
    }
    njPushMatrixEx_8c38ae68();
    njUnitMatrix_8c37b5c4(0);
    njRotateY_8c37df90(0, (void *)((&frame)->f14));
    njRotateZ_8c37e02c(0, (void *)((&frame)->f10));
    t3 = rand();
    njRotateX_8c37dd28(0, (int)((int)((float)t3 / 32768.0f * 65536.0f)));
    call_8c3be3f8(0, (void *)(&(&frame)->f24), (void *)(&(&frame)->f24), 2);
    njPopMatrixEx_8c38ad10();
    (&frame)->f08 = (&frame)->f24;
    (&frame)->f04 = (&frame)->f28;
    v4 = (float)(&frame)->f30;
    v5 = (float)(&frame)->f34;
    v6 = (S_vv6 *)((char *)o + 0x2c);
    v7 = (float)(&frame)->f38;
    t5 = rand();
    v8 = (float)((float)t5 / 32768.0f * 1.19999993f + 0.35f);
    t6 = rand();
    v9 = (float)((float)t6 / 32768.0f * 1.19999993f + 0.35f);
    v6->f00 = v4 * v9 + (&frame)->f08 * v8;
    v6->f04 = v5 * v9 + (&frame)->f04 * v8;
    v6->f08 = v7 * v9 + (&frame)->f2c * v8;
    t7 = rand();
    v10 = (float)((float)t7 / 32768.0f * 1.19999993f + 0.35f);
    t8 = rand();
    v11 = (float)((float)t8 / 32768.0f * 1.19999993f + 0.35f);
    v6->f0c = v4 * v11 - (&frame)->f08 * v10;
    v6->f10 = v5 * v11 - (&frame)->f04 * v10;
    v6->f14 = v7 * v11 - (&frame)->f2c * v10;
    t9 = rand();
    v12 = (float)((float)t9 / 32768.0f * 1.19999993f + 0.35f);
    t10 = rand();
    v13 = (float)((float)t10 / 32768.0f * 1.19999993f + 0.35f);
    v6->f18 = -v4 * v13 + (&frame)->f08 * v12;
    v6->f1c = -v5 * v13 + (&frame)->f04 * v12;
    v6->f20 = -v7 * v13 + (&frame)->f2c * v12;
    t11 = rand();
    v14 = (float)((float)t11 / 32768.0f * 1.19999993f + 0.35f);
    t12 = rand();
    (&frame)->f08 *= v14;
    v15 = (float)((float)t12 / 32768.0f * 1.19999993f + 0.35f);
    v6->f24 = -v4 * v15 - (&frame)->f08;
    (&frame)->f04 *= v14;
    v6->f28 = -v5 * v15 - (&frame)->f04 * v14;
    v6->f2c = -v7 * v15 - (&frame)->f2c * v14;
    v16 = (float)o->fc4;
    if (!(v16 > 5.0f)) {
        v20 = (int)((int)v6 + 0x2c);
    } else {
        v17 = (int)0x16ef;
        v38 = (int)0;
        v20 = (int)((int)v6 + 0x2c);
        goto L_8c107c68;
        v18 = (int)0;
        do {
            v19 = (int)(v18 * 0xc);
            *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&o->f20;
            (&frame)->f18.f00 += ((S_x16208 *)((char *)(int *)((char *)o + 0x2c) + v19))->f00 * v16;
            (&frame)->f18.f04 += ((S_x15152 *)((char *)(int *)((char *)o + 0x30) + v19))->f00 * v16;
            v20 = (int)0;
            (&frame)->f18.f08 += ((S_x15920 *)((char *)(int *)((char *)o + 0x34) + v19))->f00 * v16;
            t4 = operation_8c011290((int)(&(&frame)->f18), v17);
            if (t4 != 0) {
                if (!(-3.0f > (t4->f04->f00.f04 - (&frame)->f18.f04))) {
                    goto L_8c107c3a;
                }
                v22 = (int)1;
            } else {
                v22 = (int)1;
            }
            v20 = (int)v22;
L_8c107c3a:;
            if (v20 != 0) {
                ((S_x23984 *)((char *)(int *)((char *)o + 0x2c) + v19))->f00 *= 0.2f;
                ((S_x24176 *)((char *)(int *)((char *)o + 0x30) + v19))->f00 *= 0.2f;
                ((S_x24464 *)((char *)(int *)((char *)o + 0x34) + v19))->f00 *= 0.2f;
            }
            v18 = (int)(v18 + 1);
            v38 = (int)v18;
L_8c107c68:;
            v18 = (int)v38;
        } while (4 > v38);
    }
    return o;
}
