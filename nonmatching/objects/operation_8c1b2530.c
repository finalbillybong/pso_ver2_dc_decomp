/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1b2530
 * function: operation_8c1b2530
 * language: c
 * reference size: 1304 bytes
 * compiled size: 1328 bytes (+1.8%)
 * differing lines: 358 of 489 reference instruction lines
 * differing bytes: 1249
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +24 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct S_c8c1794c8_18 S_c8c1794c8_18;
typedef struct S_c8c1794c8_1c S_c8c1794c8_1c;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_3a8 Arg0_3a8;
typedef struct Arg0_434 Arg0_434;
typedef struct S_x49168 S_x49168;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
typedef struct Block_p0_410 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_p0_410;
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    int f64;
    char unknown68[0x328];
    int f390;
    char unknown394[0xc];
    int f3a0;
    float f3a4;
    Arg0_3a8 *f3a8;
    char unknown3ac[0x4];
    int f3b0;
    char unknown3b4[0x1c];
    int f3d0;
    char unknown3d4[0x4];
    float f3d8;
    char unknown3dc[0x8];
    int f3e4;
    char unknown3e8[0x8];
    float f3f0;
    char unknown3f4[0x4];
    float f3f8;
    char unknown3fc[0x4];
    float f400;
    float f404;
    char unknown408[0x4];
    float f40c;
    Block_p0_410 f410;
    char unknown41c[0x8];
    int f424;
    char unknown428[0xc];
    Arg0_434 *f434;
};
struct Frame {
    Block_frame_0 f00;
    Vector3 f0c;
};
struct S_x49168 {
    Vector3 f00;
};
struct S_c8c1794c8 {
    char unknown0[0x18];
    S_c8c1794c8_18 *f18;
    S_c8c1794c8_1c *f1c;
};
extern int g_8c4703c0;
extern void mark_effect_for_release(void *);
extern int create_effect_769c(void *, int);
extern void set_effect_bits(void *, unsigned short);
extern void call_8c05fd7c(int, Object *, void *, int, int);
extern int create_effect_777c(void *, int);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void operation_8c191504(int);
extern S_c8c1794c8 *record30_8c1794c8(int);
extern void TTecRaBarta_create_8c0b7684(void *, void *, void *, void *);
extern void TTecRaFoie_create_8c0b7cf0(void *, void *, void *, void *);
extern void call_8c102e38(Frame *, int, int, int, float);
extern float njScalor_8c37e480(void *);
extern void njUnitVector_8c37b630(void *);
extern float call_8c130334(float, float);
extern int signed_angle_delta(int, int);
extern float njSin_8c37eb0c(int);
extern float njCos_8c38c154(int);
extern float game_njCos_wrapper_8c21c40c(float);
extern void call_8c1b1da0(Object *);
extern void operation_8c1b1668(void *, int);
void operation_8c1b2530(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    float v46;
    int v84;
    int v85;
    int v104;
    int v120;
    float v123;
    float v122;
    float v121;
    float v128;
    int t1;
    int t2;
    S_c8c1794c8 *t3;
    S_c8c1794c8 *t4;
    float t5;
    float t6;
    float t7;
    float t8;
    int t9;
    float t10;
    float t11;
    float t12;
    int t13;
    float t14;
    v1 = (int)((int)o->f390 + -6);
    *(Vector3 *)&(&frame)->f0c = *(Vector3 *)&((S_x49168 *)((char *)(int *)((char *)o + 0x450) + v1 * 0xc))->f00;
    if (o->f3a0 == 0x4b) {
        v2 = (int)*(int *)((char *)0x8c3266e8 + (v1 << 2));
        if (v2 != -1) {
            o->f3d0 = (int)(v2);
            o->f3d8 = 0.0f;
            o->f3e4 = (int)(*(int *)((char *)0x8c326594 + (v2 << 4)));
        }
    }
    if (o->f3d0 != 6 && o->f3d0 != 7) {
    } else {
        if (o->f3d8 > 17.0f) {
            if (o->f434 == 0) {
                goto L_8c1b261a;
            }
            mark_effect_for_release((void *)(o->f434));
            o->f434 = (Arg0_434 *)0;
        } else {
            if (!(8.0f > o->f3d8) && o->f434 == 0) {
                t1 = create_effect_769c((void *)(&(&frame)->f0c), 0xf7);
                o->f434 = (Arg0_434 *)t1;
                if (t1 != 0) {
                    set_effect_bits((void *)(o->f434), (unsigned short)0x40);
                }
            }
        }
L_8c1b261a:;
        v46 = (float)o->f3d8;
        if (!(8.0f > v46) && !(v46 > 17.0f)) {
            call_8c05fd7c(0x30012, o, (void *)(&o->f3c), 0, 1);
        }
    }
    if (o->f3a0 == 0x26) {
        t2 = create_effect_777c((void *)(&(&frame)->f0c), 0xfd);
        if (t2 != 0) {
            set_effect_bits((void *)t2, (unsigned short)0x40);
        }
        play_se_8c05fbf8(0x30013, (void *)(&o->f3c), 0, 1);
        operation_8c191504(1);
    }
    if (!(0x26 >= o->f3a0)) {
    } else {
        if (!(o->f3a0 >= 4)) {
        } else {
            if (((o->f3a0 & 1)) != 0) {
            } else {
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f410;
                (&frame)->f00.f00 += o->f404 * 20.0f;
                (&frame)->f00.f08 += o->f40c * 20.0f;
                if (v1 == 0) {
                    t3 = record30_8c1794c8(0x36);
                    TTecRaBarta_create_8c0b7684((void *)o, (void *)(&frame), (void *)(&frame), (void *)(t3->f1c));
                } else {
                    t4 = record30_8c1794c8(0x36);
                    TTecRaFoie_create_8c0b7cf0((void *)o, (void *)(&frame), (void *)(&frame), (void *)(t4->f18));
                }
                call_8c102e38((Frame *)((&frame)), -0x5db4, 1, 1, 2.5f);
                o->f404 *= -1.0f;
                o->f40c *= -1.0f;
                t5 = njScalor_8c37e480((void *)(&o->f410));
                if (t5 > 280.0f) {
                    njUnitVector_8c37b630((void *)(&o->f410));
                    o->f410.f00 *= 280.0f;
                    o->f410.f08 *= 280.0f;
                    t12 = call_8c130334(o->f410.f00, o->f410.f08);
                    v84 = (int)(int)(t12 * 65536.0f / 6.28318405f);
                    t6 = call_8c130334(o->f3f8, o->f400);
                    t13 = signed_angle_delta((int)((int)(t6 * 65536.0f / 6.28318405f)), v84);
                    v85 = (int)((int)(t6 * 65536.0f / 6.28318405f) + t13);
                    t7 = njSin_8c37eb0c(v85);
                    o->f3f8 = -t7;
                    t8 = njCos_8c38c154(v85);
                    o->f400 = -t8;
                    v1 = (int)v85;
                }
                o->f410.f00 += o->f3f8 * 50.0f;
                o->f410.f08 += o->f400 * 50.0f;
            }
        }
    }
    v104 = (int)o->f3a0;
    if (v104 > 0x87) {
        o->f3f0 = (float)(0x96 - v104) / 15.0f;
    } else {
        if (v104 >= 0x11) {
            o->f3f0 = 1.0f;
        } else {
            if (v104 > 2) {
                o->f3f0 = (float)(v104 + -2) / 15.0f;
            } else {
                o->f3f0 = 0.0f;
            }
        }
    }
    v120 = (int)0x3ac;
    t9 = signed_angle_delta((int)(*(Arg0_0 **)((char *)((char *)o + 0x0) + (v120))), (int)(o->f3b0));
    o->f3a8 = (Arg0_3a8 *)((int)*(int *)((char *)((char *)o + 0x0) + (v120)) + (int)(o->f3a4 * (float)t9));
    v121 = (float)300.0f;
    v128 = (float)-50.0f;
    if (o->f3f0 > 0.0f) {
        t14 = game_njCos_wrapper_8c21c40c(o->f3f0);
        v122 = (float)(t14 * 30.0f + 300.0f);
        v123 = (float)(t14 * -45.0f + -50.0f);
        v128 = (float)v123;
        v121 = (float)v122;
    }
    t10 = njSin_8c37eb0c((int)(o->f3a8));
    o->f3c = v121 * t10;
    o->f40 = v128;
    t11 = njCos_8c38c154((int)(o->f3a8));
    o->f44 = -v121 * t11;
    o->f64 = -(int)(o->f3a8);
    if (!(--o->f3a0 >= 0)) {
        if (g_8c4703c0 == 3) {
            call_8c1b1da0(o);
        }
        operation_8c1b1668((void *)o, (int)(o->f424));
    }
}
