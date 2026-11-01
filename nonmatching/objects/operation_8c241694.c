/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c241694
 * function: operation_8c241694
 * language: c
 * reference size: 996 bytes
 * compiled size: 1028 bytes (+3.2%)
 * differing lines: 414 of 410 reference instruction lines
 * differing bytes: 964
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
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct S_c8c0541b4 S_c8c0541b4;
typedef struct S_c8c1581d8 S_c8c1581d8;
typedef struct Frame Frame;
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct S_g8c44bea0 S_g8c44bea0;
typedef struct S_g8c4689e0 S_g8c4689e0;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
typedef struct Arg1 Arg1;
typedef struct S_vv13 S_vv13;
typedef struct S_vv23 S_vv23;
typedef struct S_vv6 S_vv6;
typedef struct S_vv7 S_vv7;
typedef struct S_x20800 S_x20800;
typedef struct Block_frame_54 {
    float f00;
    float f04;
    float f08;
} Block_frame_54;
typedef struct Block_frame_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_3c;
typedef struct Block_p1_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p1_0;
typedef struct Block_frame_8 {
    int f00;
    char unknown4[0xc];
} Block_frame_8;
typedef struct Block_frame_18 {
    int f00;
    char unknown4[0x8];
} Block_frame_18;
struct Object {
    char unknown0[0xe4];
    short fe4;
    char unknowne6[0x56];
    Arg0_13c *f13c;
    char unknown140[0xe0];
    float f220;
    char unknown224[0x4];
    int f228;
    int f22c;
};
struct Frame {
    int f04;
    Block_frame_8 f08;
    Block_frame_18 f18;
    int f24;
    char unknown28[0x8];
    short f30;
    short f32;
    short f34;
    char unknown36[0x2];
    float f38;
    Block_frame_3c f3c;
    float f48;
    float f4c;
    float f50;
    Block_frame_54 f54;
};
struct Arg1 {
    Block_p1_0 f00;
};
struct Arg0_13c_s754 {
    char unknown0[0x30];
    int f30;
};
struct S_vv6 {
    short f00;
    short f02;
};
struct S_c8c0541b4 {
    char unknown0[0xdc];
    int fdc;
};
struct S_vv7 {
    Vector3 f00;
};
struct S_x20800 {
    char unknown0[0xc];
    float f0c;
};
struct S_c8c1581d8 {
    float f00;
};
struct Arg0_13c {
    char unknown0[0x20];
    short f20;
    char unknown22[0x42];
    int f64;
    char unknown68[0x2bc];
    Vector3 f324;
    char unknown330[0x424];
    short f754;
};
struct S_vv13 {
    char unknown0[0x20];
    short f20;
    char unknown22[0xba];
    int fdc;
};
struct S_vv23 {
    char unknown0[0x2];
    short f02;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_c8c011214_4 {
    Vector3 f00;
    char unknownc[0xc];
    int f18;
};
extern Vector3 g_8c33a9c4;
extern Block16 g_8c33a9d0;
extern S_g8c44be9c *g_8c44be9c;
extern S_g8c44bea0 *g_8c44bea0;
extern S_g8c4689e0 *g_8c4689e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_c8c0541b4 *operation_8c0541b4(short, short);
extern void vector_sub_in_place_8c37f6f0(void *, Arg1 *);
extern float njUnitVector_8c37b630(void *);
extern void call_8c3bdf60(void *, Arg1 *);
extern void njPushMatrix_8c38ade4(void *);
extern int operation_8c1aaabc(void *);
extern S_c8c1581d8 *operation_8c1581d8(void *, short);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern S_c8c011214 *operation_8c011214(int, int, int);
extern float call_8c38d7d8(Arg1 *, int);
extern void TItemAttacker_ctor_8c1c682c(int, void *, int, void *);
extern void TItemEffLandHit_ctor_8c1c5f48(void *, void *, void *, void *, int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void extra_b6394(void *, void *, void *, int, void *, int, float);
extern int operation_8c0750cc(void *);
int operation_8c241694(Object *o, Arg1 *a1, int a2, int a3, int a4)
{
    Frame frame;
    int *home3 = &a3;
    int v66;
    int v2;
    int v1;
    int v5;
    int v10;
    int v67;
    S_vv7 *v7;
    float v8;
    S_vv6 *v6;
    S_c8c011214 *t4;
    S_vv13 *v13;
    float v24;
    float v35;
    float v46;
    S_c8c0541b4 *t1;
    int t2;
    S_c8c1581d8 *t3;
    S_vv23 *v23;
    float t5;
    int t6;
    int t7;
    float t8;
    float t9;
    float t10;
    (void)home3;
    v66 = (int)o->f13c;
    (&frame)->f04 = 0;
    if (v66 == 0) {
    } else {
        if (o->fe4 != 2) {
        } else {
            if (((int)((char *)o->f13c + 0x754) + 0x30) == 0) {
            } else {
                v1 = (int)(&frame)->f04;
                *(Vector3 *)&(&frame)->f54 = *(Vector3 *)&a1->f00;
                v2 = (int)((Arg0_13c_s754 *)((char *)o->f13c + 0x754))->f30;
                if (v2 < 0 || v2 > 0xa) {
                    v5 = (int)0;
                } else {
                    v5 = (int)v2;
                }
                v13 = (S_vv13 *)v1;
                v10 = (int)v1;
                if (v5 > a2) {
                    v6 = (S_vv6 *)(((int)((char *)o->f13c + 0x754) + 0x30) + (a2 << 2) + 4);
                    t1 = operation_8c0541b4(v6->f00, v6->f02);
                    v10 = (int)v1;
                    if (t1 != 0) {
                        v67 = (int)t1->fdc;
                        v7 = (S_vv7 *)((char *)(v67 + v6->f02 * 0x2c) + 0x1c);
                        *(Vector3 *)&(&frame)->f54 = *(Vector3 *)&v7->f00;
                        vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f54), a1);
                        t8 = njUnitVector_8c37b630((void *)(&(&frame)->f54));
                        v8 = (float)(t8 - ((S_x20800 *)(v67 + v6->f02 * 0x2c))->f0c);
                        (&frame)->f54.f00 *= v8;
                        (&frame)->f54.f04 *= v8;
                        (&frame)->f54.f08 *= v8;
                        call_8c3bdf60((void *)(&(&frame)->f54), a1);
                        v10 = (int)1;
                    }
                    v13 = (S_vv13 *)t1;
                }
                if (v10 == 0) {
                    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                    t2 = operation_8c1aaabc((void *)(&o->f13c->f754));
                    t3 = operation_8c1581d8((void *)o, (short)t2);
                    (&frame)->f4c = 0.0f;
                    (&frame)->f48 = 0.0f;
                    (&frame)->f50 = t3->f00;
                    njRotateY_8c37df90(0, (int)(o->f13c->f64 + a3));
                    call_8c3be280(0, (void *)(&(&frame)->f48), (void *)(&(&frame)->f54));
                    njPopMatrixEx_8c38ad10();
                    call_8c3bdf60((void *)(&(&frame)->f54), a1);
                }
                *(Vector3 *)&(&frame)->f3c = *(Vector3 *)&o->f13c->f324;
                (&frame)->f3c.f04 = a1->f00.f04;
                t4 = operation_8c011214((int)(&(&frame)->f3c), (int)(&(&frame)->f54), 0x40000100);
                if (t4 != 0) {
                } else {
                    if (v13 == 0) {
                    } else {
                        v23 = (S_vv23 *)(((int)((char *)o->f13c + 0x754) + 0x30) + (a2 << 2) + 4);
                        t9 = call_8c38d7d8(a1, (int)(v13->fdc + v23->f02 * 0x2c + 0x1c));
                        v24 = (float)(t9 / o->f220);
                        if (a4 == 0) {
                            v46 = (float)v24;
                            goto L_8c2419a4;
                        }
                        (&frame)->f24 = 0;
                        operation_8c1aaabc((void *)(&o->f13c->f754));
                        (&frame)->f30 = o->f13c->f20;
                        (&frame)->f32 = v13->f20;
                        (&frame)->f34 = v23->f02;
                        (&frame)->f38 = *(float *)((char *)0x8c2e73b4 + (o->f13c->f754 << 2));
                        TItemAttacker_ctor_8c1c682c((int)g_8c4689e0, (void *)a1, (int)((int)v24), (void *)(&(&frame)->f24));
                        (&frame)->f04 = 1;
                        v46 = (float)v24;
                        goto L_8c2419a4;
                    }
                    t10 = call_8c38d7d8(a1, (int)(&(&frame)->f54));
                    v46 = (float)(t10 / o->f220);
                    goto L_8c2419a4;
                }
                *(Vector3 *)&(&frame)->f54 = *(Vector3 *)&t4->f04->f00;
                t5 = call_8c38d7d8(a1, (int)(&(&frame)->f54));
                v35 = (float)(t5 / o->f220);
                if (((t4->f04->f18 & 0x100)) != 0 && o->f228 != 0) {
                    TItemEffLandHit_ctor_8c1c5f48(g_8c44be9c, (void *)o, (void *)a1, (void *)(&(&frame)->f54.f00), (int)((int)(t5 / o->f220)));
                }
                v46 = (float)v35;
L_8c2419a4:;
                *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&g_8c33a9c4;
                *(Block16 *)&(&frame)->f08 = *(Block16 *)&g_8c33a9d0;
                t6 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x68);
                if (t6 != 0) {
                    extra_b6394((void *)t6, (void *)(&(&frame)->f08.f00), (void *)(&(&frame)->f18.f00), 1, (void *)(o->f13c), (int)g_8c44bea0, 0.2f);
                }
                if (o->f22c != 0) {
                    t7 = operation_8c0750cc((void *)o);
                    if (t7 == 1) {
                        ((void (*)(Object *, Arg1 *, void *, float))(o->f22c))(o, a1, (void *)(&(&frame)->f54), v46);
                    }
                }
            }
        }
    }
    return (int)((&frame)->f04);
}
