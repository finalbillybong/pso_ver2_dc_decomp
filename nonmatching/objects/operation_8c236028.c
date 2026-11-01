/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c236028
 * function: operation_8c236028
 * language: c
 * reference size: 1248 bytes
 * compiled size: 1240 bytes (-0.6%)
 * differing lines: 252 of 442 reference instruction lines
 * differing bytes: 1059
 * provenance: generator draft (mode switch2)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
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
typedef struct S_L8c339628 S_L8c339628;
typedef struct S_L8c339628_18 S_L8c339628_18;
typedef struct S_L8c339628_4 S_L8c339628_4;
typedef struct S_L8c339628_8 S_L8c339628_8;
typedef struct S_L8c339628_c S_L8c339628_c;
typedef struct S_L8c46f564 S_L8c46f564;
typedef struct S_L8c5755ac S_L8c5755ac;
typedef struct Frame Frame;
typedef struct S_g8c339628 S_g8c339628;
typedef struct S_g8c510b28 S_g8c510b28;
typedef struct S_g8c510b28_42c S_g8c510b28_42c;
typedef struct S_g8c510b28_42c_28 S_g8c510b28_42c_28;
typedef struct S_g8c510b28_42c_38 S_g8c510b28_42c_38;
typedef struct S_g8c510b28_42c_8 S_g8c510b28_42c_8;
typedef struct Object Object;
typedef struct Arg0_350 Arg0_350;
typedef struct Arg0_354 Arg0_354;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
    float f0c;
} Block_frame_c;
typedef struct Block_frame_1c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_1c;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
    Block_frame_1c f1c;
};
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0xc];
    int f60;
    int f64;
    char unknown68[0x2e8];
    Arg0_350 *f350;
    Arg0_354 *f354;
    char unknown358[0x8];
    Vector3 f360;
    char unknown36c[0x8];
    int f374;
};
struct S_L8c5755ac {
    char unknown0[0xc];
    int f0c;
};
struct S_L8c46f564 {
    char unknown0[0xc];
    int f0c;
};
struct S_g8c510b28 {
    char unknown0[0x42c];
    S_g8c510b28_42c *f42c;
};
struct S_g8c510b28_42c {
    char unknown0[0x8];
    S_g8c510b28_42c_8 *f08;
    char unknownc[0x1c];
    S_g8c510b28_42c_28 *f28;
    char unknown2c[0xc];
    S_g8c510b28_42c_38 *f38;
};
struct S_L8c339628 {
    char unknown0[0x4];
    S_L8c339628_4 *f04;
    S_L8c339628_8 *f08;
    S_L8c339628_c *f0c;
    char unknown10[0x8];
    S_L8c339628_18 *f18;
};
extern char g_8c510b2c[];
extern float njScalor_8c37e480(void *);
extern void call_8c0c510c(void *, void *, void *);
extern void njUnitVector_8c37b630(void *);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be280(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern void call_8c38c0e6(int, int);
extern int angle_step(int, int, int);
extern void njTranslateV_8c382a58(int, Frame *);
extern void njScale_8c37e2e4(int, float, float, float);
extern void call_8c38c0f0(void *);
extern void call_8c37d90c(int, void *, void *);
extern void call_8c3827d8(void *);
extern void call_8c3a944a(void *);
extern void operation_8c23679c(int);
void operation_8c236028(Object *o)
{
    Frame frame;
    char *v10;
    int v8;
    int v9;
    float v11;
    float v17;
    float t1;
    int t2;
    int t3;
    {
        Block16 *p_ = (Block16 *)&*(Block16 *)0x8c33964c;
        *(Block16 *)&(&frame)->f0c = *p_;
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3c;
    (&frame)->f00.f04 = *(float *)(g_8c510b2c + 0x1c) - *(float *)(g_8c510b2c + 0x1c) * 2.0f / 10.0f + (&frame)->f00.f04;
    (&frame)->f0c.f04 = (float)*(unsigned char *)(g_8c510b2c + 0x17) / 255.0f;
    (&frame)->f0c.f08 = (float)*(unsigned char *)(g_8c510b2c + 0x18) / 255.0f;
    (&frame)->f0c.f0c = (float)*(unsigned char *)(g_8c510b2c + 0x19) / 255.0f;
    if (o->f374 != 0) {
        (&frame)->f0c.f00 = 1.0f;
    } else {
        (&frame)->f0c.f00 = 0.25f;
    }
    *(Vector3 *)&(&frame)->f1c = *(Vector3 *)&o->f360;
    (&frame)->f1c.f04 = 0.0f;
    t1 = njScalor_8c37e480((void *)(&(&frame)->f1c));
    call_8c0c510c((void *)(&(&frame)->f1c), (void *)(&o->f64), (void *)(((char *)o + 0x68)));
    *(int *)((char *)o + 0x350) &= 0xffff;
    o->f64 = (unsigned short)o->f64;
    if (t1 != 0.0f) {
        njUnitVector_8c37b630((void *)(&(&frame)->f1c));
        *(Vector3 *)&o->f48 = *(Vector3 *)&(&frame)->f1c;
    } else {
        *(Vector3 *)&(&frame)->f1c = *(Vector3 *)&o->f48;
    }
    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
    njRotateY_8c37df90(0, 0x4000);
    call_8c3be280(0, (void *)(&(&frame)->f1c), (void *)(&(&frame)->f1c));
    njPopMatrix_8c38accc(1);
    *(int *)0x8c46f560 = (int)(*(int *)0x8c575570);
    *(Vector3 *)&*(Vector3 *)0x8c46f564 = *(Vector3 *)&*(Vector3 *)0x8c5755ac;
    v10 = (char *)((S_L8c5755ac *)0x8c5755ac)->f0c;
    ((S_L8c46f564 *)0x8c46f564)->f0c = (int)(v10);
    *(int *)0x8c46f574 = (int)(*(int *)0x8c5755a4);
    *(int *)0x8c46f578 = (int)(*(int *)0x8c5755a8);
    *(int *)0x8c575570 |= 0x810;
    v8 = (int)-1;
    v9 = (int)0x800;
    call_8c38c0e6(v8, v9);
    v11 = (float)(float)(int)(t1 * 4096.0f * 65536.0f / 360.0f);
    if (v11 != 0.0f) {
        t2 = angle_step((int)(o->f350), (int)(o->f64), (int)((int)v11));
        o->f350 = (Arg0_350 *)t2;
        t3 = angle_step((int)(o->f354), (int)(o->f60), (int)((int)v11));
        o->f354 = (Arg0_354 *)t3;
    }
    o->f60 += (int)(t1 * 7.0f * 65536.0f / 360.0f);
    njPushMatrix_8c38ade4((void *)0);
    njTranslateV_8c382a58(0, (Frame *)((&frame)));
    v17 = (float)(*(float *)(g_8c510b2c + 0x1c) * 0.15f);
    njScale_8c37e2e4(0, v17, v17, v17);
    call_8c38c0f0((void *)(&(&frame)->f0c));
    call_8c37d90c(0, (void *)(&(&frame)->f1c), (void *)(o->f354));
    njRotateY_8c37df90(0, (int)(o->f350));
    if ((void *)0x8c339628 == 0) {
    } else {
        if (*(int *)0x8c510b28 == 0) {
        } else {
            switch ((unsigned int)(*(unsigned short *)(g_8c510b2c + 0x48))) {
            case 0:
                call_8c3827d8((void *)(*(S_g8c339628 **)0x8c339628));
                call_8c3a944a((void *)((*(S_g8c510b28 **)0x8c510b28)->f42c->f38));
                break;
            case 1:
                call_8c3827d8((void *)(((S_L8c339628 *)0x8c339628)->f04));
                call_8c3a944a((void *)((*(S_g8c510b28 **)0x8c510b28)->f42c->f08));
                break;
            case 2:
                call_8c3827d8((void *)(((S_L8c339628 *)0x8c339628)->f08));
                call_8c3a944a((void *)((*(S_g8c510b28 **)0x8c510b28)->f42c->f08));
                break;
            case 3:
                call_8c3827d8((void *)(((S_L8c339628 *)0x8c339628)->f0c));
                call_8c3a944a((void *)((*(S_g8c510b28 **)0x8c510b28)->f42c->f08));
                break;
            case 6:
                call_8c3827d8((void *)(((S_L8c339628 *)0x8c339628)->f18));
                call_8c3a944a((void *)((*(S_g8c510b28 **)0x8c510b28)->f42c->f28));
            case 4:
            case 5:
                break;
            }
        }
    }
    call_8c38c0f0((void *)((void *)0x8c305fd8));
    njPopMatrix_8c38accc(1);
    *(int *)0x8c5755a4 = (int)(*(int *)0x8c46f574);
    *(int *)0x8c5755a8 = (int)(*(int *)0x8c46f578);
    *(Block16 *)&*(Block16 *)0x8c5755ac = *(Block16 *)&*(Block16 *)0x8c46f564;
    *(int *)0x8c575570 = (int)(*(int *)0x8c46f560);
    operation_8c23679c((int)o);
}
