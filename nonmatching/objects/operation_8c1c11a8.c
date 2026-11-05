/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1c11a8
 * function: operation_8c1c11a8
 * language: c
 * reference size: 492 bytes
 * compiled size: 500 bytes (+1.6%)
 * differing lines: 120 of 205 reference instruction lines
 * differing bytes: 240
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +8 bytes
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1beb7c S_c8c1beb7c;
typedef struct Frame Frame;
typedef struct S_g8c289000 S_g8c289000;
typedef struct Object Object;
typedef struct Block_p0_3c {
    float f00;
    float f04;
    float f08;
} Block_p0_3c;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x3c];
    Block_p0_3c f3c;
    char unknown48[0x18];
    int f60;
    int f64;
    int f68;
    char unknown6c[0x28];
    float f94;
    char unknown98[0x4];
    int f9c;
};
struct S_c8c1beb7c {
    char unknown0[0x4];
    int f04;
};
struct Frame {
    Block_frame_0 f00;
    float f0c;
    char unknown10[0x4];
    float f14;
};
extern S_c8c1beb7c *operation_8c1beb7c(int);
extern void set_stream_mode_8c3ab8f8(S_c8c1beb7c *, float);
extern void call_8c3ac038(void *, int);
extern void call_8c3bdf60(void *, void *);
extern float errno_wrap_8c130334(float, float);
extern int signed_angle_delta(int, int);
int operation_8c1c11a8(Object *o)
{
    Frame frame;
    int v2;
    float v1;
    float v5;
    float v6;
    float v7;
    float v10;
    float v12;
    int v11;
    int v15;
    int v16;
    int v14;
    int v17;
    int v18;
    int v19;
    int v20;
    int v22;
    int v24;
    int v25;
    int v29;
    int v28;
    int v32;
    int v13;
    S_c8c1beb7c *t1;
    S_c8c1beb7c *t2;
    int t3;
    float t4;
    v1 = (float)o->f94;
    t1 = operation_8c1beb7c((int)(*(S_g8c289000 **)((char *)0x8c289000 + (o->f9c << 2))));
    v2 = (int)-1;
    v5 = (float)(float)(unsigned int)(t1->f04 + v2);
    v6 = (float)v1;
    if (v1 > v5) {
        v6 = (float)v5;
    }
    set_stream_mode_8c3ab8f8(t1, v6);
    call_8c3ac038((void *)(&(&frame)->f0c), 0);
    v7 = (float)o->f94;
    v7 = (float)(v7 + 2.0f);
    t2 = operation_8c1beb7c((int)(*(S_g8c289000 **)((char *)0x8c289000 + (o->f9c << 2))));
    v11 = (int)1;
    v10 = (float)(float)(unsigned int)(t2->f04 + -1);
    v12 = (float)v7;
    if (v7 > v10) {
        v11 = (int)0;
        v12 = (float)v10;
    }
    set_stream_mode_8c3ab8f8(t2, v12);
    call_8c3ac038((void *)(&frame), 0);
    *(Vector3 *)&o->f3c = *(Vector3 *)&(&frame)->f00;
    call_8c3bdf60((void *)(&o->f3c), (void *)(&(&frame)->f0c));
    o->f3c.f00 *= 0.5f;
    o->f3c.f04 *= 0.5f;
    o->f3c.f08 *= 0.5f;
    t4 = errno_wrap_8c130334((&frame)->f00.f00 - (&frame)->f0c, (&frame)->f00.f08 - (&frame)->f14);
    v13 = (int)(int)(t4 * 65536.0f / 6.28318405f);
    t3 = signed_angle_delta((int)(o->f64), v13);
    o->f64 = (int)(v13);
    v14 = (int)o->f68;
    v15 = (int)o->f60;
    if (t3 > 0x30) {
        v16 = (int)v15;
        if (v15 > 0) {
            v16 = (int)0;
        }
        v17 = (int)(v16 + -0x40);
        if (-0x200 > (v16 + -0x40)) {
            v17 = (int)-0x200;
        }
        v28 = (int)(v14 + v17);
        v32 = (int)v17;
        if (!(-0x3800 > (v14 + v17))) {
            goto L_8c1c132a;
        }
        v28 = (int)-0x3800;
        v29 = (int)v17;
    } else {
        if (-0x30 > t3) {
            v18 = (int)v15;
            if (!(v15 >= 0)) {
                v18 = (int)0;
            }
            v19 = (int)(v18 + 0x40);
            if ((v18 + 0x40) > 0x200) {
                v19 = (int)0x200;
            }
            v28 = (int)(v14 + v19);
            v32 = (int)v19;
            if (!((v14 + v19) > 0x3800)) {
                goto L_8c1c132a;
            }
            v24 = (int)0x3800;
            v25 = (int)v19;
        } else {
            v25 = (int)0;
            if (v14 > 0x100) {
                v22 = (int)(v14 - 0x100);
            } else {
                v20 = (int)0;
                if (-0x100 > v14) {
                    v20 = (int)(v14 + 0x100);
                }
                v22 = (int)v20;
            }
            v24 = (int)v22;
        }
        v28 = (int)v24;
        v29 = (int)v25;
    }
    v32 = (int)v29;
L_8c1c132a:;
    o->f68 = (int)(v28);
    o->f60 = (int)(v32);
    return (int)(v11);
}
