/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c039924
 * function: TObjEneMoja_v39_8c039924
 * language: c
 * reference size: 572 bytes
 * compiled size: 576 bytes (+0.7%)
 * differing lines: 42 of 239 reference instruction lines
 * differing bytes: 391
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +4 bytes
 * class header: src/include/classes/TObjEneMoja.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c462a04 S_g8c462a04;
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_334_dc Arg0_334_dc;
typedef struct Arg0_33c Arg0_33c;
typedef struct S_vv32 S_vv32;
typedef struct S_x35024 S_x35024;
typedef struct S_x41216 S_x41216;
typedef struct S_x63312 S_x63312;
typedef struct S_x67904 S_x67904;
typedef struct S_x72592 S_x72592;
typedef struct S_x88400 S_x88400;
struct Object {
    char unknown0[0x64];
    int f64;
    char unknown68[0x2a2];
    short f30a;
    char unknown30c[0x28];
    Arg0_334 *f334;
    char unknown338[0x4];
    Arg0_33c *f33c;
    char unknown340[0x44];
    int f384;
    char unknown388[0x14];
    int f39c;
    int f3a0;
    char unknown3a4[0xc];
    float f3b0;
};
struct S_vv32 {
    char unknown0[0x34];
    int f34;
};
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct Arg0_334 {
    char unknown0[0xdc];
    Arg0_334_dc *fdc;
};
struct Arg0_334_dc {
    char unknown0[0xc];
    float f0c;
};
struct Arg0_33c {
    char unknown0[0x8];
    float f08;
    int f0c;
};
struct S_x88400 {
    float f00;
};
struct S_x67904 {
    float f00;
};
struct S_x35024 {
    Vector3 f00;
};
struct S_x41216 {
    Vector3 f00;
};
struct S_x72592 {
    Vector3 f00;
};
struct S_x63312 {
    Vector3 f00;
};
extern S_g8c462a04 *g_8c462a04;
extern float object_distance_xz(void *, void *, void *);
extern float call_8c130334(float, float);
extern int angle_difference(int, int);
extern float object_random_fraction(void *);
extern void call_8c0441d8(Object *, Vector3);
extern void move_and_capture_position(void *, int, Vector3);
int TObjEneMoja_v39_8c039924(Object *o)
{
    Frame frame;
    S_vv32 *v32;
    int t3;
    float v1;
    int v8;
    int v7;
    int v11;
    int v3;
    int v6;
    int v5;
    int v12;
    float t1;
    float t2;
    int v4;
    float t4;
    float t5;
    if (!(o->f30a > 1)) {
    } else {
        if (o->f334 == 0) {
        } else {
            if (o->f33c == 0) {
            } else {
                v32 = (S_vv32 *)o->f334;
                switch (v32->f34 & 0x2000800) {
                case 0:
                    t2 = object_distance_xz((void *)o, (void *)v32, (void *)(&frame));
                    t1 = call_8c130334((&frame)->f00, (&frame)->f08);
                    t3 = angle_difference((int)(o->f64), (int)((int)(t1 * 65536.0f / 6.28318405f)));
                    if (o->f334->fdc != 0) {
                        v1 = (float)o->f334->fdc->f0c;
                    } else {
                        v1 = (float)10.0f;
                    }
                    v3 = (int)0x3a0;
                    v4 = (int)0x3ac;
                    v7 = (int)0;
                    v5 = (int)0x324;
                    v6 = (int)-1;
                    while (3 > v7) {
                        o->f33c = (Arg0_33c *)*(int *)((char *)((char *)g_8c462a04 + 0x0) + (o->f384 * 3 + v7 << 2));
                        v8 = (int)o->f33c->f0c;
                        t1 = o->f33c->f08 + v1;
                        if (!(t2 > t1 * t1)) {
                            if (v8 >= t3) {
                                o->f39c = (int)(v7);
                                switch (o->f39c) {
                                case 0:
                                    if (o->f3a0 == -1) {
                                        o->f3a0 = 0;
                                    }
                                    return 1;
                                case 1:
                                    v11 = (int)*(int *)((char *)((char *)o + 0x0) + (v3));
                                    if (v11 == v6) {
                                        goto L_8c039adc;
                                    }
                                    if (1e-07f > ((S_x88400 *)((int)o + v4))->f00) {
                                        goto L_8c039adc;
                                    }
                                    t4 = object_random_fraction((void *)o);
                                    if (((S_x67904 *)((int)o + v4))->f00 > t4) {
                                        return 1;
                                    }
                                    *(int *)((char *)((char *)o + 0x0) + (v3)) = (int)(v6);
                                    call_8c0441d8(o, *(Vector3 *)&((S_x35024 *)((int)o + v5))->f00);
                                    move_and_capture_position((void *)o, (int)((int)o + v5), *(Vector3 *)&((S_x41216 *)((int)o + v5))->f00);
                                    break;
                                case 2:
                                    v12 = (int)*(int *)((char *)((char *)o + 0x0) + (v3));
                                    if (v12 != v6) {
                                        if (t2 > 22500.0f) {
                                            t5 = object_random_fraction((void *)o);
                                            if (o->f3b0 > t5) {
                                                return 1;
                                            }
                                        }
                                        *(int *)((char *)((char *)o + 0x0) + (v3)) = (int)(v6);
                                        call_8c0441d8(o, *(Vector3 *)&((S_x72592 *)((int)o + v5))->f00);
                                        move_and_capture_position((void *)o, (int)((int)o + v5), *(Vector3 *)&((S_x63312 *)((int)o + v5))->f00);
                                    }
                                }
                            }
                        }
L_8c039adc:;
                        v7 = (int)(v7 + 1);
                    }
                }
            }
        }
    }
    return 0;
}
