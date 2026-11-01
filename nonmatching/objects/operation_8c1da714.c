/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1da714
 * function: operation_8c1da714
 * language: c
 * reference size: 608 bytes
 * compiled size: 608 bytes (+0.0%)
 * differing lines: 64 of 237 reference instruction lines
 * differing bytes: 300
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
typedef struct S_L8c46f5a0 S_L8c46f5a0;
typedef struct S_L8c46f5c0 S_L8c46f5c0;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_e4 Arg0_e4;
typedef struct Block_L8c46f5a0_0 {
    float f00;
    float f04;
    float f08;
} Block_L8c46f5a0_0;
struct Object {
    char unknown0[0x54];
    Vector3 f54;
    char unknown60[0x4];
    Arg0_64 *f64;
    char unknown68[0x38];
    float fa0;
    float fa4;
    float fa8;
    float fac;
    float fb0;
    float fb4;
    int fb8;
    char unknownbc[0xc];
    Vector3 fc8;
    float fd4;
    float fd8;
    char unknowndc[0x4];
    int fe0;
    Arg0_e4 *fe4;
    int fe8;
};
struct S_L8c46f5a0 {
    Block_L8c46f5a0_0 f00;
};
extern S_L8c46f5a0 g_8c46f5a0;
extern S_L8c46f5c0 g_8c46f5c0;
extern char gc_8c46f5c0[];
extern float njSin_8c37eb0c(void *);
extern int rand(void);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrix_8c38accc(int);
extern void call_8c3bdf60(void *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float call_8c130334(float, float);
extern int angle_step(int, int, int);
extern float squared_distance_xz(void *, void *);
void operation_8c1da714(Object *o)
{
    float v2;
    float v1;
    int v4;
    float t1;
    int t2;
    int t3;
    int t4;
    float t5;
    int t6;
    float t7;
    o->fa8 += o->fa4;
    v1 = (float)o->fa0;
    v2 = (float)o->fa8;
    if (v2 > v1) {
        o->fa8 = v2 - v1;
    }
    o->fe4 = (Arg0_e4 *)((int)o->fe4 + o->fe0);
    t1 = njSin_8c37eb0c((void *)(o->fe4));
    o->fd8 = o->fd4 * t1;
    switch (o->fb8) {
    case 0:
        o->fb8 = 1;
        (&g_8c46f5a0)->f00.f00 = 0.0f;
        t2 = rand();
        (&g_8c46f5a0)->f00.f04 = o->fb0 * ((float)t2 / 32768.0f);
        t3 = rand();
        (&g_8c46f5a0)->f00.f08 = o->fb4 * ((float)t3 / 32768.0f);
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        t4 = rand();
        njRotateY_8c37df90(0, (int)((int)((float)t4 / 32768.0f * 360.0f * 65536.0f / 360.0f)));
        call_8c3be38c(0, (void *)((void *)&g_8c46f5a0), (void *)((void *)&g_8c46f5a0));
        njPopMatrix_8c38accc(1);
        *(Vector3 *)&o->fc8 = *(Vector3 *)&o->f54;
        call_8c3bdf60((void *)(&o->fc8), (void *)((void *)&g_8c46f5a0));
        return;
    case 1:
        *(Vector3 *)&(&g_8c46f5a0)->f00 = *(Vector3 *)&o->fc8;
        vector_sub_in_place_8c37f6f0((void *)((void *)&g_8c46f5a0), (void *)(((char *)o + 0x3c)));
        t5 = call_8c130334((&g_8c46f5a0)->f00.f00, (&g_8c46f5a0)->f00.f08);
        t6 = angle_step((int)(o->f64), (int)((int)(t5 * 65536.0f / 6.28318405f)), 0x100);
        o->f64 = (Arg0_64 *)t6;
        *(float *)(gc_8c46f5c0 + 0x4) = 0.0f;
        *(float *)(gc_8c46f5c0 + 0x0) = 0.0f;
        *(float *)(gc_8c46f5c0 + 0x8) = o->fac;
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, (int)(o->f64));
        call_8c3be38c(0, (void *)((void *)&g_8c46f5c0), (void *)((void *)&g_8c46f5c0));
        njPopMatrix_8c38accc(1);
        call_8c3bdf60((void *)(((char *)o + 0x3c)), (void *)((void *)&g_8c46f5c0));
        t7 = squared_distance_xz((void *)(&o->fc8), (void *)(((char *)o + 0x3c)));
        if (!(o->fb4 > t7)) {
            v4 = (int)o->fe8;
            o->fe8 = v4 + 1;
            if (!((float)v4 > 150.0f)) {
                return;
            }
        }
        o->fb8 = 0;
        o->fe8 = 0;
    }
}
