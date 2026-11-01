/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b7fcc
 * function: operation_8c0b7fcc
 * language: c
 * reference size: 564 bytes
 * compiled size: 592 bytes (+5.0%)
 * differing lines: 238 of 251 reference instruction lines
 * differing bytes: 526
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +28 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c2856f8 S_L8c2856f8;
typedef struct S_L8c46f380 S_L8c46f380;
typedef struct Frame Frame;
typedef struct S_g8c2856f8 S_g8c2856f8;
typedef struct S_g8c2856f8_0 S_g8c2856f8_0;
typedef struct Object Object;
typedef struct Arg0_s2c Arg0_s2c;
typedef struct Arg1 Arg1;
typedef struct S_vv12 S_vv12;
typedef struct S_vv6 S_vv6;
typedef struct Block_frame_4 {
    int f00;
    float f04;
    int f08;
} Block_frame_4;
typedef struct Block_p0_2c {
    int f00;
    float f04;
    char unknown8[0x4];
} Block_p0_2c;
struct Object {
    char unknown0[0x18];
    void *dispatch;
    char unknown1c[0x8];
    int f24;
    int f28;
    Block_p0_2c f2c;
    float f38;
    float f3c;
    float f40;
    float f44;
    int f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    int f5c;
    int f60;
};
struct Arg1 {
    int f00;
    int f04;
    int f08;
};
struct Arg0_s2c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct S_L8c46f380 {
    Vector3 f00;
    Vector3 f0c;
};
struct Frame {
    Block_frame_4 f04;
};
struct S_L8c2856f8 {
    char unknown0[0x4];
    int f04;
};
struct S_vv6 {
    char unknown0[0x28];
    int f28;
};
struct S_vv12 {
    char unknown0[0x44];
    float f44;
    float f48;
};
extern S_L8c2856f8 g_8c2856f8;
extern S_L8c46f380 g_8c46f380;
extern char g_8c3053a8[];
extern void TObject_ctor_8c0330e4(void *, void *);
extern int create_effect_777c(void *, int);
Object *operation_8c0b7fcc(Object *o, Arg1 *a1, int a2, int a3, float f0)
{
    Frame frame;
    Object **home = &o;
    unsigned int v5;
    int v23;
    char *v1;
    int v24;
    int v3;
    int v7;
    S_vv6 *v6;
    int v8;
    char *v2;
    int v4;
    int v16;
    S_vv12 *v12;
    int t1;
    int t2;
    int t3;
    int t4;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a3);
    o->dispatch = (void *)0x8c26615c;
    o->f24 = a2;
    o->f28 = 0;
    o->f60 = 1;
    v2 = (char *)a1->f00;
    v23 = (int)a1->f04;
    o->f2c.f00 = (int)(v2);
    ((Arg0_s2c *)((char *)o + 0x2c))->f04 = (int)(v23);
    ((Arg0_s2c *)((char *)o + 0x2c))->f08 = (int)(a1->f08);
    o->f44 = f0;
    o->f48 = 0;
    o->f5c = 0;
    o->f38 = 1.2f;
    o->f3c = 1.2f;
    o->f40 = 1.2f;
    o->f4c = 1.0f;
    o->f50 = 1.0f;
    o->f54 = 1.0f;
    o->f58 = 1.0f;
    {
        Vector3 *p_ = (Vector3 *)&*(Vector3 *)(g_8c3053a8 + 0xc);
        *(Vector3 *)&(&g_8c46f380)->f00 = *p_;
    }
    *(Vector3 *)&(&g_8c46f380)->f0c = *(Vector3 *)&*(Vector3 *)(g_8c3053a8 + 0x18c);
    v1 = (char *)o->f2c.f00;
    v24 = (int)((Arg0_s2c *)((char *)o + 0x2c))->f04;
    (&frame)->f04.f00 = (int)(v1);
    (&frame)->f04.f04 = (int)(v24);
    (&frame)->f04.f08 = (int)(((Arg0_s2c *)((char *)o + 0x2c))->f08);
    (&frame)->f04.f04 += 5.0f;
    *(Vector3 *)&o->f2c = *(Vector3 *)&(&frame)->f04;
    create_effect_777c((void *)(&o->f2c), 0x1de);
    v3 = (int)0x1a4;
    (&frame)->f04.f04 = o->f2c.f04 + 8.0f;
    v6 = (S_vv6 *)/* ? clobbered */ 0;
    v7 = (int)/* ? clobbered */ 0;
    v4 = (int)0x1a5;
    v5 = (unsigned int)0;
    while ((unsigned int)*(int *)((char *)&g_8c2856f8.f04 + (o->f24 << 3)) > v5) {
        if (v7 == 2) {
            if (v5 == 0) {
                v8 = (int)v6->f28;
                if (v8 >= 0xf && 0x19 > v8) {
                    t1 = create_effect_777c((void *)(&(&frame)->f04), v3);
                    v12 = (S_vv12 *)t1;
                    goto L_8c0b8136;
                }
                if (v8 >= 0x19 && 0x1e > v8) {
                    t2 = create_effect_777c((void *)(&(&frame)->f04), v4);
                    v12 = (S_vv12 *)t2;
                    goto L_8c0b8136;
                }
                t3 = create_effect_777c((void *)(&(&frame)->f04), (int)(*(S_g8c2856f8_0 **)((char *)((char *)*(S_g8c2856f8 **)((char *)&g_8c2856f8 + ((int)(((char *)o + 0x30)))) + 0x0) + (v5 << 3))));
                v12 = (S_vv12 *)t3;
            } else {
                t4 = create_effect_777c((void *)(&(&frame)->f04), (int)(*(S_g8c2856f8_0 **)((char *)((char *)*(S_g8c2856f8 **)((char *)&g_8c2856f8 + ((int)(((char *)o + 0x30)))) + 0x0) + (v5 << 3))));
                v12 = (S_vv12 *)t4;
            }
L_8c0b8136:;
            v16 = (int)o->f28;
            if (v16 >= 0xf && 0x19 > v16) {
                if (!(1 >= v5)) {
                    goto L_8c0b819a;
                }
                if (v12 == 0) {
                    goto L_8c0b819a;
                }
                v12->f44 = 1.3f;
                v12->f48 = 1.3f;
                v12 = (S_vv12 *)((char *)v12 + 72);
                goto L_8c0b819a;
            }
            if (!(v16 >= 0xf)) {
                goto L_8c0b819a;
            }
            if (!(0x19 > v16)) {
                goto L_8c0b819a;
            }
            if (!(1 >= v5)) {
                goto L_8c0b819a;
            }
            if (v12 == 0) {
                goto L_8c0b819a;
            }
            v12->f44 = 1.8f;
            v12->f48 = 1.8f;
        } else {
            create_effect_777c((void *)(&(&frame)->f04), (int)(*(S_g8c2856f8_0 **)((char *)((char *)*(S_g8c2856f8 **)((char *)&g_8c2856f8 + ((int)(((char *)o + 0x30)))) + 0x0) + (v5 << 3))));
        }
        v12 = (S_vv12 *)/* ? clobbered */ 0;
L_8c0b819a:;
        v7 = (int)/* ? clobbered */ 0;
        v6 = (S_vv6 *)/* ? clobbered */ 0;
        v5 = (unsigned int)(v5 + 1);
    }
    return o;
}
