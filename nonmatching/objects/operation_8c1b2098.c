/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b2098
 * function: operation_8c1b2098
 * language: c
 * reference size: 664 bytes
 * compiled size: 664 bytes (+0.0%)
 * differing lines: 14 of 268 reference instruction lines
 * differing bytes: 25
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
typedef struct S_L8c326594 S_L8c326594;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_0_0 Arg0_0_0;
typedef struct Arg0_3a8 Arg0_3a8;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x338];
    int f3a0;
    float f3a4;
    Arg0_3a8 *f3a8;
    int f3ac;
    int f3b0;
    char unknown3b4[0x24];
    float f3d8;
    char unknown3dc[0x14];
    float f3f0;
    char unknown3f4[0x2c];
    int f420;
};
struct Frame {
    Vector3 f00;
    int f0c;
    int f10;
    int f14;
    int f18;
    float f1c;
    float f20;
    float f24;
    int f28;
};
struct S_L8c326594 {
    char unknown0[0x8];
    int f08;
};
extern int g_8c4703c0;
extern S_L8c326594 g_8c326594;
extern float njCos_8c38c154(int);
extern int signed_angle_delta(int, int);
extern float game_njCos_wrapper_8c21c40c(float);
extern float njSin_8c37eb0c(void *);
extern void TBoss4Zanzo_create_8c1b30c4(void *, void *);
extern void operation_8c1b1668(void *, int);
void operation_8c1b2098(Object *o)
{
    Frame frame;
    int v64;
    int v22;
    float v10;
    float v9;
    float v8;
    float v15;
    float v16;
    int v18;
    int v24;
    int v19;
    int v20;
    int v23;
    int v21;
    int v7;
    float t1;
    int t2;
    float t3;
    float t4;
    int t5;
    float t6;
    v64 = (int)o->f3a0;
    if (v64 > 7) {
        t1 = njCos_8c38c154((int)((int)((1.0f - (float)(v64 + -7) / (float)o->f420) * 32768.0f)));
        o->f3a4 = (1.0f - t1) * 0.5f;
    } else {
        o->f3a4 = 1.0f;
    }
    v7 = (int)0x3ac;
    t2 = signed_angle_delta((int)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v7))), (int)(o->f3b0));
    o->f3a8 = (Arg0_3a8 *)((int)*(int *)((char *)((char *)o + 0x0) + (v7)) + (int)(o->f3a4 * (float)t2));
    v8 = (float)300.0f;
    v15 = (float)-50.0f;
    if (o->f3f0 > 0.0f) {
        t6 = game_njCos_wrapper_8c21c40c(o->f3f0);
        v9 = (float)(t6 * 30.0f + 300.0f);
        v10 = (float)(t6 * -45.0f + -50.0f);
        v15 = (float)v10;
        v8 = (float)v9;
    }
    t3 = njSin_8c37eb0c((void *)(o->f3a8));
    o->f3c.f00 = v8 * t3;
    o->f3c.f04 = v15;
    t4 = njCos_8c38c154((int)(o->f3a8));
    o->f3c.f08 = -v8 * t4;
    o->f64 = -(int)(o->f3a8);
    if (g_8c4703c0 == 3) {
        t5 = signed_angle_delta((int)(o->f3ac), (int)(o->f3b0));
        if (((o->f3a0 & 3)) == 0) {
            v16 = (float)o->f3a4;
            if (v16 > 0.05f && 0.95f > v16) {
                if (!(-0x4000 >= t5) && !(t5 >= 0x4000)) {
                    goto L_8c1b2284;
                }
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
                (&frame)->f0c = (int)(o->f64);
                v18 = (int)0x398;
                v19 = (int)0x42c;
                v20 = (int)0x3d0;
                (&frame)->f1c = o->f3d8;
                v21 = (int)0x430;
                (&frame)->f20 = 0.75f;
                (&frame)->f24 = 0.0f;
                (&frame)->f28 = 0xa;
                v22 = (int)0;
                while (2 > v22) {
                    v23 = (int)(v22 << 2);
                    v24 = (int)(*(int *)((char *)0x8c32658c + (v23)) << 4);
                    (&frame)->f10 = (int)(*(int *)((char *)((char *)*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v18)) + 0x0) + (v19)) + 0xc) + (v24)));
                    (&frame)->f14 = (int)(*(int *)((char *)((char *)*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v18)) + 0x0) + (v19)) + 0x8) + (v24)));
                    (&frame)->f18 = (int)(*(int *)((char *)((char *)*(Arg0_0_0 **)((char *)((char *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v18)) + 0x0) + (v21)) + 0x4) + (*(int *)((char *)&*(int *)((char *)&g_8c326594.f08 + (*(int *)((char *)((char *)o + 0x0) + (v20)) << 4)) + (v23)) << 3)));
                    TBoss4Zanzo_create_8c1b30c4((void *)o, (void *)(&frame));
                    v22 = (int)(v22 + 1);
                }
                v7 = (int)TBoss4Zanzo_create_8c1b30c4;
            }
        }
    }
L_8c1b2284:;
    if (!(--o->f3a0 >= 0)) {
        operation_8c1b1668((void *)o, 1);
    }
}
