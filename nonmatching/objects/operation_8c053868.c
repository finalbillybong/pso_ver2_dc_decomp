/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c053868
 * function: operation_8c053868
 * language: c
 * reference size: 624 bytes
 * compiled size: 628 bytes (+0.6%)
 * differing lines: 26 of 265 reference instruction lines
 * differing bytes: 458
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * runtime: equal on offline start: new character to Pioneer 2; offline start: Pioneer 2 office
 *   walk and NPC dialogue (emulator A/B: RAM, trace and sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg2 Arg2;
typedef struct S_vv19 S_vv19;
typedef struct S_vv19_4 S_vv19_4;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_4 S_vv7_4;
typedef struct Block_frame_18 {
    float f00;
    float f04;
    float f08;
} Block_frame_18;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
    Block_frame_c f0c;
    Block_frame_18 f18;
};
struct Arg2 {
    char unknown0[0x1c];
    Vector3 f1c;
};
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x1a];
    Vector3 f3c;
    Vector3 f48;
    char unknown54[0x10];
    int f64;
};
struct S_vv7 {
    char unknown0[0x4];
    S_vv7_4 *f04;
};
struct S_vv7_4 {
    Vector3 f00;
};
struct S_vv19 {
    char unknown0[0x4];
    S_vv19_4 *f04;
};
struct S_vv19_4 {
    Vector3 f00;
};
extern int g_8c418248;
extern float squared_distance_xz(void *, void *);
extern void vector_sub_in_place_8c37f6f0(void *, void *);
extern float errno_wrap_8c130334(float, float);
extern int signed_angle_delta(int, int);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, void *, void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void njUnitVector_8c37b630(void *);
extern void call_8c3bdf60(void *, void *);
extern int operation_8c011308(int, void *, int);
int operation_8c053868(Object *o, int a1, Arg2 *a2)
{
    Frame frame;
    int v1;
    float v2;
    int v3;
    unsigned short v6;
    float v4;
    S_vv7 *v7;
    int v10;
    S_vv19 *v19;
    int v22;
    float t1;
    float t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    t1 = squared_distance_xz((void *)(&o->f3c), (void *)(&o->f48));
    if (1e-14f > t1) {
        return 0;
    }
    *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&a2->f1c;
    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f18), (void *)(&o->f48));
    t2 = errno_wrap_8c130334((&frame)->f18.f00, (&frame)->f18.f08);
    t3 = signed_angle_delta((int)((int)(t2 * 65536.0f / 6.28318405f)), (int)(o->f64));
    v1 = (int)0x4000;
    if (v1 > (unsigned short)t3) {
        v2 = (float)0.25f;
        v3 = (int)v1;
        v4 = (float)v2;
    } else {
        v3 = (int)0xc000;
        if (v3 > (unsigned short)t3) {
            return 0;
        }
        v4 = (float)0.25f;
    }
    v6 = (unsigned short)o->f20;
    if (v6 >= (unsigned int)0x1000) {
        njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
        njRotateY_8c37df90(0, v3);
        call_8c3be38c(0, (void *)(&(&frame)->f18), (void *)(&(&frame)->f18));
        njPopMatrixEx_8c38ad10();
        if (((&frame)->f18.f00 * (&frame)->f18.f00 + (&frame)->f18.f08 * (&frame)->f18.f08) > 1e-07f) {
            (&frame)->f18.f04 = 0.0f;
            njUnitVector_8c37b630((void *)(&(&frame)->f18));
            (&frame)->f18.f00 *= v4;
            (&frame)->f18.f08 *= v4;
            call_8c3bdf60((void *)(&(&frame)->f18), (void *)(&o->f48));
            *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&(&frame)->f18;
            (&frame)->f0c.f04 += 10.0f;
            if (o->f20 == g_8c418248) {
                t4 = operation_8c011308((int)(&(&frame)->f0c), (void *)(((char *)o + 0x94)), 0x55);
                v7 = (S_vv7 *)t4;
            } else {
                t5 = operation_8c011308((int)(&(&frame)->f0c), (void *)(((char *)o + 0x94)), 0x15);
                v7 = (S_vv7 *)t5;
            }
            if (v7 == 0) {
                v10 = (int)0;
            } else {
                *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&v7->f04->f00;
                v10 = (int)1;
            }
            if (v10 != 0) {
                *(Vector3 *)&o->f3c = *(Vector3 *)&(&frame)->f18;
                return 1;
            }
        }
    }
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f48;
    (&frame)->f00.f04 += 10.0f;
    if (o->f20 == g_8c418248) {
        t6 = operation_8c011308((int)(&frame), (void *)(((char *)o + 0x94)), 0x55);
        v19 = (S_vv19 *)t6;
    } else {
        t7 = operation_8c011308((int)(&frame), (void *)(((char *)o + 0x94)), 0x15);
        v19 = (S_vv19 *)t7;
    }
    if (v19 == 0) {
        v22 = (int)0;
    } else {
        *(Vector3 *)&o->f48 = *(Vector3 *)&v19->f04->f00;
        v22 = (int)1;
    }
    if (v22 != 0) {
        *(Vector3 *)&o->f3c = *(Vector3 *)&o->f48;
        return 1;
    }
    return 0;
}
