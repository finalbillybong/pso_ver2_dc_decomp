/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b8450
 * function: operation_8c0b8450
 * language: c
 * reference size: 504 bytes
 * compiled size: 508 bytes (+0.8%)
 * differing lines: 78 of 197 reference instruction lines
 * differing bytes: 454
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +4 bytes
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
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_g8c46ee80_ac S_g8c46ee80_ac;
typedef struct S_g8c46f1c0 S_g8c46f1c0;
typedef struct S_g8c46f1c0_c S_g8c46f1c0_c;
typedef struct Object Object;
struct Frame {
    void *f00;
    void *f04;
    int f08;
    int f0c;
    void *f10;
    void *f14;
    int f18;
    int f1c;
    Block16 f20;
    Vector3 f30;
};
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0xc];
    float f38;
    float f3c;
    float f40;
    char unknown44[0x18];
    int f5c;
    int f60;
};
struct S_g8c46ee80 {
    char unknown0[0xac];
    S_g8c46ee80_ac *fac;
};
struct S_g8c46f1c0 {
    char unknown0[0xc];
    S_g8c46f1c0_c *f0c;
};
extern Vector3 g_8c30532c;
extern Block16 g_8c305338;
extern S_g8c46ee80 *g_8c46ee80;
extern S_g8c46f1c0 *g_8c46f1c0;
extern int g_8c46f560;
extern int g_8c575570;
extern int get_current_area_8c032b10(void);
extern void adjust_vector_by_metric(void *, void *, float);
extern void step_effect_color_alpha(void *, void *, float);
extern void call_8c38c0f0(void *);
extern void call_8c0a0214(Frame *);
extern void njPushMatrixEx_8c38ae68(void);
extern void translate_current_matrix_v_8c382a40(void *);
extern void njScale_8c37e2e4(int, float, float, float);
extern void njRotateY_8c37df90(int, void *);
extern void call_8c3827d8(void *);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c0a0270(Frame *);
void operation_8c0b8450(Object *o)
{
    Frame frame;
    int v6;
    float v8;
    float v7;
    float v5;
    float v12;
    float v13;
    float v14;
    float v20;
    float v19;
    float v18;
    int t1;
    t1 = get_current_area_8c032b10();
    if (t1 == 0 || get_current_area_8c032b10() == 0xf) {
        return;
    }
    *(Vector3 *)&(&frame)->f30 = *(Vector3 *)&g_8c30532c;
    *(Block16 *)&(&frame)->f20 = *(Block16 *)&g_8c305338;
    if (!(1.8f > o->f38)) {
        if (o->f60 != 0) {
            o->f60 = 0;
        }
        adjust_vector_by_metric((void *)(&o->f38), (void *)(&(&frame)->f30), 0.05f);
    } else {
        adjust_vector_by_metric((void *)(&o->f38), (void *)(&(&frame)->f30), 0.15f);
    }
    step_effect_color_alpha((void *)(((char *)o + 0x4c)), (void *)(&(&frame)->f20), 0.035f);
    (&frame)->f10 = (void *)0x8c3055f4;
    (&frame)->f14 = (void *)0x8c305310;
    (&frame)->f18 = (int)o->f5c + 1;
    (&frame)->f1c = 0;
    (&frame)->f00 = (void *)0x8c3055f4;
    (&frame)->f04 = (void *)0x8c305310;
    (&frame)->f08 = (int)o->f5c + 0x21;
    (&frame)->f0c = 1;
    g_8c46f560 = (int)(g_8c575570);
    g_8c575570 |= 0x10;
    call_8c38c0f0((void *)(((char *)o + 0x4c)));
    call_8c0a0214((Frame *)((&frame)));
    call_8c0a0214((Frame *)(&(&frame)->f10));
    v5 = (float)o->f38;
    v6 = (int)o->f28;
    v7 = (float)o->f3c;
    v8 = (float)o->f40;
    if (v6 < 0xf || 0x19 <= v6) {
        v12 = (float)v8;
        v13 = (float)v7;
        v14 = (float)v5;
        if (v6 >= 0x19) {
            v12 = (float)v8;
            v13 = (float)v7;
            v14 = (float)v5;
            if (0x1e > v6) {
                v12 = (float)(v8 * 1.8f);
                v13 = (float)(v7 * 1.8f);
                v14 = (float)(v5 * 1.8f);
            }
        }
        v18 = (float)v12;
        v19 = (float)v13;
        v20 = (float)v14;
    } else {
        v18 = (float)(v8 * 1.3f);
        v19 = (float)(v7 * 1.3f);
        v20 = (float)(v5 * 1.3f);
    }
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x2c)));
    njScale_8c37e2e4(0, v20, v19, v18);
    njRotateY_8c37df90(0, (void *)(g_8c46ee80->fac));
    call_8c3827d8((void *)((void *)0x8c305310));
    call_8c3aa716((void *)(g_8c46f1c0->f0c));
    njPopMatrixEx_8c38ad10();
    g_8c575570 = (int)(g_8c46f560);
    call_8c0a0270((Frame *)((&frame)));
    call_8c0a0270((Frame *)(&(&frame)->f10));
}
