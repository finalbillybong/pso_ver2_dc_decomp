/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0d0d84
 * function: TTecZondeEff_render_8c0d0d84
 * language: c
 * reference size: 848 bytes
 * compiled size: 828 bytes (-2.4%)
 * differing lines: 468 of 369 reference instruction lines
 * differing bytes: 739
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -20 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46fc48 S_g8c46fc48;
typedef struct Object Object;
typedef struct S_vv15 S_vv15;
typedef struct S_vv16 S_vv16;
typedef struct S_x36848 S_x36848;
typedef struct S_x37184 S_x37184;
typedef struct S_x37408 S_x37408;
typedef struct S_x38864 S_x38864;
typedef struct S_x39200 S_x39200;
typedef struct S_x41440 S_x41440;
typedef struct S_x41552 S_x41552;
typedef struct S_x59904 S_x59904;
typedef struct S_x67008 S_x67008;
typedef struct S_x83568 S_x83568;
struct Object {
    char unknown0[0x3c];
    int f3c;
    char unknown40[0x244];
    int f284;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    float f20;
    int f24;
    char unknown28[0x2c];
    int f54;
    int f58;
    char unknown5c[0x30];
    float f8c;
    float f90;
    int f94;
    int f98;
    char unknown9c[0x8c];
    int f128;
    char unknown12c[0x26c];
};
struct S_x67008 {
    float f00;
};
struct S_x59904 {
    float f00;
};
struct S_x36848 {
    float f00;
};
struct S_x37184 {
    float f00;
};
struct S_x83568 {
    float f00;
};
struct S_x37408 {
    float f00;
};
struct S_vv15 {
    char unknown0[0x4];
    float f04;
    float f08;
};
struct S_x38864 {
    float f00;
};
struct S_vv16 {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    int f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    int f2c;
};
struct S_x39200 {
    float f00;
};
struct S_x41440 {
    float f00;
};
struct S_x41552 {
    float f00;
};
extern int g_8c46f560;
extern S_g8c46fc48 *g_8c46fc48;
extern float g_8c575528;
extern float g_8c57555c;
extern float g_8c575560;
extern int g_8c575570;
extern int get_current_area_8c032b10(void);
extern void reset_state_8c391c94(void *);
extern void state_set_4c_8c3809a4(int);
extern void call_8c3be280(int, int, void *);
extern float signed_inv_sqrt_8c37f6d8(float);
extern void set_child_blend(void);
extern void call_8c38d9a0(void *, int, void *, int);
extern void reset_state_8c391cc4(void);
extern void call_8c38c0f0(void *);
void TTecZondeEff_render_8c0d0d84(Object *o)
{
    Frame frame;
    float v2;
    int v1;
    int v7;
    float v4;
    float v9;
    float v6;
    int v5;
    float v12;
    float v13;
    float v19;
    float v18;
    int v11;
    int v10;
    S_vv15 *v15;
    float v17;
    float v14;
    float v39;
    S_vv16 *v16;
    float v20;
    float v40;
    float v21;
    int v3;
    float v22;
    float v23;
    float v24;
    float v25;
    int t1;
    int t2;
    float t3;
    t1 = get_current_area_8c032b10();
    if (t1 == 0) {
    } else {
        t2 = get_current_area_8c032b10();
        if (t2 == 0xf) {
        } else {
            g_8c46f560 = (int)(g_8c575570);
            g_8c575570 |= 0x10;
            reset_state_8c391c94((void *)((void *)&g_8c46f560));
            state_set_4c_8c3809a4(0);
            v1 = (int)0;
            v2 = (float)g_8c575528;
            v3 = (int)(o->f284 | 0xffffff);
            v4 = (float)(v2 * g_8c57555c);
            v6 = (float)(g_8c575528 * g_8c575560);
            v5 = (int)0x27c;
            while (o->f3c > v1) {
                v7 = (int)(v1 * 0xc);
                call_8c3be280(0, (int)((int)o + v7 + 0xdc), (void *)(&(&frame)->f18));
                if (1.0f > (&frame)->f20) {
                    (&frame)->f20 = 1.0f;
                }
                v9 = (float)(1.0f / (&frame)->f20);
                ((S_x67008 *)(v7 + (char *)&(&frame)->f8c))->f00 = (&frame)->f18 * (v4 * v9) + (&frame)->f14;
                ((S_x59904 *)(v7 + (char *)&(&frame)->f90))->f00 = (&frame)->f1c * (v6 * v9) + (&frame)->f10;
                ((S_x36848 *)(v7 + (char *)&(&frame)->f94))->f00 = v9;
                ((S_x37184 *)((v1 << 2) + (char *)&(&frame)->f58))->f00 = ((S_x83568 *)((int)o + v5))->f00 * (v4 * v9);
                ((S_x37408 *)((v1 << 2) + (char *)&(&frame)->f24))->f00 = v6 * v9 * 1.8f;
                v1 = (int)(v1 + 1);
            }
            v10 = (int)0;
            v11 = (int)-1;
            v12 = (float)(&frame)->f8c;
            v13 = (float)(&frame)->f90;
            (&frame)->f00 = 0.0f;
            v14 = (float)v12;
            v15 = (S_vv15 *)&(&frame)->f98;
            v16 = (S_vv16 *)&(&frame)->f128;
            v17 = (float)v13;
            v40 = (float)(v19 * t3);
            v39 = (float)(v18 * t3);
            while (((int)o->f3c + v11) > v10) {
                v18 = (float)v15->f04;
                (&frame)->f04 = v15->f04;
                v18 = (float)(v18 - v17);
                v19 = (float)(&frame)->f08;
                v19 = (float)(v19 - v14);
                t3 = signed_inv_sqrt_8c37f6d8(v19 * v19 + v18 * v18);
                v20 = (float)(v39 * ((S_x38864 *)((v10 << 2) + (char *)&(&frame)->f58))->f00 * 1.0f);
                v16->f00 = v14 + v20;
                v21 = (float)(-v40 * ((S_x39200 *)((v10 << 2) + (char *)&(&frame)->f24))->f00 * 1.0f);
                v16->f04 = v17 + v21;
                v16->f08 = (&frame)->f0c;
                v16->f0c = 0.0f;
                v16->f10 = (&frame)->f00;
                v16->f14 = (int)(v3);
                v16->f18 = v14 - v20;
                v22 = (float)(&frame)->f08;
                v16->f1c = v17 - v21;
                v23 = (float)(&frame)->f04;
                v16->f20 = (&frame)->f0c;
                v16->f24 = 1.0f;
                v16->f28 = (&frame)->f00;
                v16->f2c = (int)(v3);
                (&frame)->f00 += 1.0f;
                (&frame)->f0c = v15->f08;
                v10 = (int)(v10 + 1);
                v14 = (float)v22;
                v17 = (float)v23;
                v16 = (S_vv16 *)((char *)v16 + 48);
                v15 = (S_vv15 *)((char *)v15 + 12);
            }
            v24 = (float)(((S_x41440 *)((char *)&(&frame)->f54 + (o->f3c << 2)))->f00 * v39 * 1.0f);
            v25 = (float)(-v40 * ((S_x41552 *)((o->f3c << 2) + (char *)&(&frame)->f20))->f00 * 1.0f);
            v16->f00 = v14 + v24;
            v16->f04 = v17 + v25;
            v16->f08 = (&frame)->f0c;
            v16->f0c = 0.0f;
            v16->f10 = (&frame)->f00;
            v16->f14 = (int)(v3);
            v16->f18 = v14 - v24;
            v16->f1c = v17 - v25;
            v16->f20 = (&frame)->f0c;
            v16->f24 = 1.0f;
            v16->f28 = (&frame)->f00;
            v16->f2c = (int)(v3);
            set_child_blend();
            call_8c38d9a0((void *)(&(&frame)->f128), (int)(o->f3c << 1), g_8c46fc48, 1);
            reset_state_8c391cc4();
            call_8c38c0f0((void *)((void *)0x8c305fd8));
            g_8c575570 = (int)(g_8c46f560);
        }
    }
}
