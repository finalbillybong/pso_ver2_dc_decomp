/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c041a2c
 * function: TQuadSpriteSclColRot_render_8c041a2c
 * language: c
 * reference size: 788 bytes
 * compiled size: 784 bytes (-0.5%)
 * differing lines: 302 of 355 reference instruction lines
 * differing bytes: 587
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c575528 S_L8c575528;
typedef struct S_c8c38c154 S_c8c38c154;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_2c_1c Arg0_2c_1c;
typedef struct Arg0_2c_4 Arg0_2c_4;
typedef struct Arg0_2c_8 Arg0_2c_8;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_24 S_vv11_24;
typedef struct S_vv9 S_vv9;
typedef struct S_vv9_10 S_vv9_10;
typedef struct Block_frame_64 {
    float f00;
    float f04;
    float f08;
} Block_frame_64;
typedef struct Block_frame_18 {
    float f00;
    float f04;
    float f08;
} Block_frame_18;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x4];
    int f28;
    Arg0_2c *f2c;
};
struct Arg0_2c {
    int f00;
    Arg0_2c_4 *f04;
    Arg0_2c_8 *f08;
    int f0c;
    char unknown10[0x4];
    float f14;
    float f18;
    Arg0_2c_1c *f1c;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    char unknown10[0x8];
    Block_frame_18 f18;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    char unknown40[0x4];
    float f44;
    float f48;
    float f4c;
    float f50;
    float f54;
    float f58;
    char unknown5c[0x8];
    Block_frame_64 f64;
};
struct S_L8c575528 {
    float f00;
    char unknown4[0x8];
    float f0c;
    float f10;
};
struct S_vv9 {
    char unknown0[0x10];
    S_vv9_10 *f10;
};
struct S_vv11 {
    int f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    S_vv11_24 *f24;
    char unknown28[0x1];
    char f29;
    short f2a;
};
extern float g_8c57555c;
extern float g_8c575560;
extern S_L8c575528 g_8c575528;
extern void set_blend_5_6(void);
extern void restore_child_blend(void);
extern void set_blend_5_7(void);
extern void set_child_blend(void);
extern void reset_state_8c391c94(void *);
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(void *, void *);
extern void call_8c3be280(int, void *, void *);
extern void sq_header3_8c38b02e(void *);
extern float njCos_8c38c154(int);
extern float njSin_8c37eb0c(int);
extern void call_8c38b150(void *);
extern void sq_flush_8c38af12(void);
extern void reset_state_8c391cc4(void);
extern void reset_manager_record_slots(void *);
void TQuadSpriteSclColRot_render_8c041a2c(Object *o)
{
    Frame frame;
    int v1;
    int v8;
    S_vv9 *v9;
    int v56;
    int v10;
    float v19;
    float v18;
    float v17;
    float v20;
    float v21;
    float v23;
    float v22;
    float v28;
    float v27;
    float v30;
    float v31;
    float v32;
    float v29;
    S_vv11 *v11;
    int v47;
    float t1;
    float t2;
    if (o->f28 == 0) {
        return;
    }
    v1 = (int)o->f2c->f00;
    if (((v1 & 2)) != 0) {
        if (((v1 & 4)) != 0) {
            set_blend_5_6();
            goto L_8c041a8a;
        }
        restore_child_blend();
    } else {
        if (((v1 & 4)) != 0) {
            set_blend_5_7();
        } else {
            set_child_blend();
        }
    }
L_8c041a8a:;
    (&frame)->f08 = (&g_8c575528)->f00;
    (&frame)->f0c = (&g_8c575528)->f00 * g_8c57555c;
    (&frame)->f08 *= g_8c575560;
    (&frame)->f04 = (&g_8c575528)->f0c;
    (&frame)->f00 = (&g_8c575528)->f10;
    reset_state_8c391c94((void *)((void *)&(&g_8c575528)->f10));
    sq_select_8c38aeb4(1);
    call_8c3827d8((void *)(o->f2c->f04));
    sq_header_8c38af22((void *)(o->f2c->f08), (void *)(o->f2c->f1c));
    v56 = (int)0;
    goto L_8c041cc6;
    v8 = (int)0;
    v9 = (S_vv9 *)/* ? clobbered */ 0;
L_8c041ae2:;
    v10 = (int)*(int *)((char *)((char *)o->f20 + 0x0) + (v8 * 0x2c));
    (&frame)->f44 = *(float *)((char *)((char *)v9->f10 + 0x0) + (v8 << 4));
    (&frame)->f48 = *(float *)((char *)((char *)v9->f10 + 0x4) + (v8 << 4));
    (&frame)->f4c = *(float *)((char *)((char *)v9->f10 + 0x8) + (v8 << 4)) - *(float *)((char *)((char *)v9->f10 + 0x0) + (v8 << 4));
    (&frame)->f50 = 0.0f;
    (&frame)->f54 = 0.0f;
    (&frame)->f58 = *(float *)((char *)((char *)v9->f10 + 0xc) + (v8 << 4)) - *(float *)((char *)((char *)v9->f10 + 0x4) + (v8 << 4));
    v47 = (int)v10;
    goto L_8c041cb6;
    v11 = (S_vv11 *)v10;
L_8c041b38:;
    (&frame)->f18.f00 = v11->f04 + v11->f10;
    (&frame)->f18.f04 = v11->f08 + v11->f14;
    (&frame)->f18.f08 = v11->f0c + v11->f18;
    if (v11->f29 != 1) {
        call_8c3be280(0, (void *)(&(&frame)->f18), (void *)(&(&frame)->f64));
    } else {
        *(Vector3 *)&(&frame)->f64 = *(Vector3 *)&(&frame)->f18;
    }
    if (1.0f <= (&frame)->f64.f08 || v11->f29 == 1) {
        float self;
        sq_header3_8c38b02e((void *)(v11->f24));
        if (v11->f29 != 1) {
            v17 = (float)(&frame)->f64.f00;
            v18 = (float)(1.0f / (&frame)->f64.f08);
            v19 = (float)(&frame)->f0c;
            v19 = (float)(v19 * v18);
            v20 = (float)(&frame)->f08;
            v17 = (float)(v17 * v19);
            v20 = (float)(v20 * v18);
            v17 = (float)(v17 + (&frame)->f04);
            v27 = (float)v20;
            v28 = (float)v19;
            v29 = (float)((&frame)->f64.f04 * v20 + (&frame)->f00);
            v30 = (float)v17;
        } else {
            v21 = (float)1.0f;
            v22 = (float)(&frame)->f64.f00;
            v23 = (float)(&frame)->f64.f04;
            v27 = (float)v21;
            v28 = (float)v21;
            v29 = (float)v23;
            v30 = (float)v22;
        }
        v31 = (float)(v28 * o->f2c->f14 * v11->f1c);
        v32 = (float)(v27 * o->f2c->f18 * v11->f20);
        t1 = njCos_8c38c154((int)(v11->f2a));
        self = t1;
        t2 = njSin_8c37eb0c((int)(v11->f2a));
        (&frame)->f24 = v30 - (v31 * self + v32 * -t2);
        (&frame)->f28 = v29 - (-v31 * -t2 + v32 * self);
        (&frame)->f2c = (&frame)->f64.f08;
        (&frame)->f30 = (v31 + v31) * self;
        (&frame)->f34 = -(v31 + v31) * -t2;
        (&frame)->f38 = (v32 + v32) * -t2;
        (&frame)->f3c = (v32 + v32) * self;
        call_8c38b150((void *)(&(&frame)->f24));
    } else {
    }
    v47 = (int)v11->f00;
L_8c041cb6:;
    v11 = (S_vv11 *)v47;
    if (v47 != 0) {
        goto L_8c041b38;
    }
    sq_flush_8c38af12();
    v56 = (int)(v8 + 1);
L_8c041cc6:;
    v8 = (int)v56;
    v9 = (S_vv9 *)o->f2c;
    if (o->f2c->f0c > v56) {
        goto L_8c041ae2;
    }
    reset_state_8c391cc4();
    reset_manager_record_slots((void *)o);
}
