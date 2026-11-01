/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0402c8
 * function: TQuadSpriteCol_render_8c0402c8
 * language: c
 * reference size: 584 bytes
 * compiled size: 584 bytes (+0.0%)
 * differing lines: 6 of 257 reference instruction lines
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
typedef struct S_L8c575528 S_L8c575528;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_2c_1c Arg0_2c_1c;
typedef struct Arg0_2c_4 Arg0_2c_4;
typedef struct Arg0_2c_8 Arg0_2c_8;
typedef struct S_vv18 S_vv18;
typedef struct S_vv18_10 S_vv18_10;
typedef struct S_vv20 S_vv20;
typedef struct S_vv20_24 S_vv20_24;
typedef struct Block_frame_2c {
    float f00;
    float f04;
    float f08;
} Block_frame_2c;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x8];
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
struct S_L8c575528 {
    float f00;
    char unknown4[0x8];
    float f0c;
    float f10;
};
struct Frame {
    Block_frame_0 f00;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    Block_frame_2c f2c;
};
struct S_vv18 {
    char unknown0[0xc];
    int f0c;
    S_vv18_10 *f10;
};
struct S_vv20 {
    int f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    char unknown1c[0x8];
    S_vv20_24 *f24;
    char unknown28[0x1];
    char f29;
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
extern void call_8c3be280(int, Frame *, void *);
extern void sq_header3_8c38b02e(void *);
extern void sq_quad_8c38b09e(void *, float);
extern void sq_flush_8c38af12(void);
extern void reset_state_8c391cc4(void);
extern void reset_manager_record_slots(void *);
void TQuadSpriteCol_render_8c0402c8(Object *o)
{
    Frame frame;
    int v1;
    float v12;
    int v17;
    S_vv18 *v18;
    int v52;
    int v19;
    float v14;
    float v13;
    float v15;
    float v16;
    float v29;
    float v30;
    float v31;
    float v32;
    float v33;
    float v34;
    float v35;
    S_vv20 *v20;
    int v46;
    float *row;
    v1 = (int)o->f2c->f00;
    if (((v1 & 2)) != 0) {
        if (((v1 & 4)) != 0) {
            set_blend_5_6();
            goto L_8c04031c;
        }
        restore_child_blend();
    } else {
        if (((v1 & 4)) != 0) {
            set_blend_5_7();
        } else {
            set_child_blend();
        }
    }
L_8c04031c:;
    v12 = (float)(&g_8c575528)->f00;
    v14 = (float)(v12 * g_8c57555c);
    v13 = (float)(v12 * g_8c575560);
    v15 = (float)(&g_8c575528)->f0c;
    v16 = (float)(&g_8c575528)->f10;
    reset_state_8c391c94((void *)((void *)&(&g_8c575528)->f10));
    sq_select_8c38aeb4(1);
    call_8c3827d8((void *)(o->f2c->f04));
    sq_header_8c38af22((void *)(o->f2c->f08), (void *)(o->f2c->f1c));
    for (v17 = 0; (v18 = (S_vv18 *)o->f2c, v18->f0c > v17); v17++) {
        v20 = (S_vv20 *)*(int *)((char *)((char *)o->f20 + 0x0) + (v17 * 0x2c));
        row = (float *)((char *)v18->f10 + (v17 << 4));
        (&frame)->f1c = row[0];
        (&frame)->f20 = row[1];
        (&frame)->f24 = row[2];
        (&frame)->f28 = row[3];
        for (; v20 != 0; v20 = (S_vv20 *)v20->f00) {
            (&frame)->f00.f00 = v20->f04 + v20->f10;
            (&frame)->f00.f04 = v20->f08 + v20->f14;
            (&frame)->f00.f08 = v20->f0c + v20->f18;
            if (v20->f29 != 1) {
                call_8c3be280(0, (Frame *)((&frame)), (void *)(&(&frame)->f2c));
            } else {
                *(Vector3 *)&(&frame)->f2c = *(Vector3 *)&(&frame)->f00;
            }
            if (!(1.0f > (&frame)->f2c.f08) || v20->f29 == 1) {
                sq_header3_8c38b02e((void *)(v20->f24));
                if (v20->f29 != 1) {
                    v29 = (float)(1.0f / (&frame)->f2c.f08);
                    v32 = (float)(v14 * v29);
                    v33 = (float)(v13 * v29);
                    v30 = (float)((&frame)->f2c.f00 * v32 + v15);
                    v31 = (float)((&frame)->f2c.f04 * v33 + v16);
                } else {
                    v29 = (float)(&frame)->f2c.f08;
                    v32 = (float)1.0f;
                    v33 = (float)1.0f;
                    v30 = (float)(&frame)->f2c.f00;
                    v31 = (float)(&frame)->f2c.f04;
                }
                v34 = (float)(v32 * o->f2c->f14);
                v35 = (float)(v33 * o->f2c->f18);
                (&frame)->f0c = v30 - v34;
                (&frame)->f14 = v30 + v34;
                (&frame)->f10 = v31 - v35;
                (&frame)->f18 = v31 + v35;
                sq_quad_8c38b09e((void *)(&(&frame)->f0c), v29);
            }
        }
        sq_flush_8c38af12();
    }
    reset_state_8c391cc4();
    reset_manager_record_slots((void *)o);
}
