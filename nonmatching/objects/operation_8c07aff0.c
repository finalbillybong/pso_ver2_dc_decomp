/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07aff0
 * function: operation_8c07aff0
 * language: c
 * reference size: 528 bytes
 * compiled size: 532 bytes (+0.8%)
 * differing lines: 36 of 215 reference instruction lines
 * differing bytes: 500
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct Frame Frame;
typedef struct S_g8c469a8c S_g8c469a8c;
typedef struct Object Object;
typedef struct S_vv14 S_vv14;
typedef struct S_vv9 S_vv9;
typedef struct S_x6576 S_x6576;
typedef struct Block_p0_318 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_318;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x2c4];
    Block_p0_318 f318;
    Vector3 f324;
    char unknown330[0x94];
    int f3c4;
};
struct Frame {
    Vector3 f00;
    Vector3 f0c;
    Vector3 f18;
    Vector3 f24;
};
struct S_g8c469a8c {
    float f00;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_c8c011214_4 {
    char unknown0[0xc];
    float f0c;
    char unknown10[0x4];
    float f14;
};
struct S_x6576 {
    Vector3 f00;
};
struct S_vv9 {
    char unknown0[0x3c];
    Vector3 f3c;
};
struct S_vv14 {
    Vector3 f00;
};
extern S_g8c469a8c *g_8c469a8c;
extern void scale_vector_to_length(void *, float);
extern void call_8c3bdf60(void *, void *);
extern S_c8c011214 *operation_8c011214(int, int, int);
extern float errno_wrap_8c130334(float, float);
extern int signed_angle_delta(int, int);
extern int rand(void);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, int, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern int operation_8c051ff4(void *, void *, void *);
extern void vector_sub_in_place_8c37f6f0(S_vv14 *, void *);
void operation_8c07aff0(Object *o)
{
    Frame frame;
    S_vv14 *v14;
    int v8;
    float v15;
    S_c8c011214 *t1;
    int v7;
    int v2;
    int v6;
    char *v1;
    S_vv9 *v9;
    float t2;
    int t3;
    int t4;
    int t5;
    float t6;
    *(Vector3 *)&o->f48 = *(Vector3 *)&o->f3c;
    *(Vector3 *)&(&frame)->f24 = *(Vector3 *)&o->f324;
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&o->f318;
    scale_vector_to_length((void *)(&(&frame)->f18), g_8c469a8c->f00 + 10.0f);
    v1 = (char *)&(&frame)->f24;
    call_8c3bdf60(v1, (void *)(&(&frame)->f18));
    t1 = operation_8c011214((int)(&o->f324), (int)v1, -1);
    if (t1 != 0) {
        t6 = errno_wrap_8c130334(o->f318.f00, o->f318.f08);
        v2 = (int)(int)(t6 * 65536.0f / 6.28318405f);
        t2 = errno_wrap_8c130334(t1->f04->f0c, t1->f04->f14);
        v15 = (float)(t2 * 65536.0f / 6.28318405f);
        t3 = signed_angle_delta(v2, (int)((int)v15));
        o->f3c4 = (int)v15 - (0x8000 - t3);
    }
    t4 = rand();
    if (0.5f > ((float)t4 / 32768.0f)) {
        v6 = (int)-1;
    } else {
        v6 = (int)1;
    }
    v9 = (S_vv9 *)o;
    v7 = (int)0x318;
    v8 = (int)0;
    while (0xf > v8) {
        if (v8 == 0) {
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x6576 *)((int)v9 + v7))->f00;
        } else {
            njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
            njRotateY_8c37df90(0, (int)(v6 * (v8 << 0xc)));
            call_8c3be38c(0, (int)((int)v9 + v7), (void *)(&(&frame)->f0c));
            njPopMatrixEx_8c38ad10();
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v9->f3c;
        call_8c3bdf60((void *)(&frame), (void *)(&(&frame)->f0c));
        t5 = operation_8c051ff4((void *)v9, (void *)(&frame), (void *)0);
        if (t5 == 1) {
            *(Vector3 *)&v9->f3c = *(Vector3 *)&(&frame)->f00;
            v14 = (S_vv14 *)((int)v9 + 0x318);
            *(Vector3 *)&v14->f00 = *(Vector3 *)&v9->f3c;
            vector_sub_in_place_8c37f6f0(v14, (void *)((int)v9 + 0x48));
            return;
        }
        v8 = (int)(v8 + 1);
    }
}
