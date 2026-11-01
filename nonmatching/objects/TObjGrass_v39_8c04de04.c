/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04de04
 * function: TObjGrass_v39_8c04de04
 * language: c
 * reference size: 508 bytes
 * compiled size: 508 bytes (+0.0%)
 * differing lines: 114 of 217 reference instruction lines
 * differing bytes: 54
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
typedef struct Frame Frame;
typedef struct S_g8c4671a4 S_g8c4671a4;
typedef struct S_g8c4671a4_0 S_g8c4671a4_0;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_33c Arg0_33c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_0 S_vv11_0;
typedef struct S_vv11_0_0 S_vv11_0_0;
typedef struct S_vv13 S_vv13;
typedef struct S_vv1_dc S_vv1_dc;
typedef struct S_vv28 S_vv28;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    int f64;
    char unknown68[0x2cc];
    Arg0_334 *f334;
    char unknown338[0x4];
    Arg0_33c *f33c;
    char unknown340[0x7a];
    short f3ba;
};
struct S_vv28 {
    char unknown0[0x34];
    int f34;
};
struct Frame {
    float f00;
    char unknown4[0x4];
    float f08;
};
struct S_vv1 {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0xa4];
    S_vv1_dc *fdc;
    char unknowne0[0x270];
    int f350;
};
struct S_vv1_dc {
    char unknown0[0xc];
    float f0c;
};
struct S_g8c4671a4 {
    int f00;
};
struct Arg0_33c {
    char unknown0[0x8];
    float f08;
    int f0c;
};
struct S_vv11 {
    S_vv11_0 *f00;
};
struct S_vv13 {
    char unknown0[0x8];
    float f08;
    int f0c;
};
extern int g_8c2e2ad8;
extern S_g8c4671a4 *g_8c4671a4;
extern void call_8c0121a0(Object *, int, void *, int);
extern float object_distance_xz(void *, void *, void *);
extern float call_8c130334(float, float);
extern int angle_difference(int, int);
int TObjGrass_v39_8c04de04(Object *o)
{
    Frame frame;
    S_vv28 *v28;
    S_vv1 *v1;
    unsigned short v4;
    int v5;
    float v3;
    int v10;
    int v9;
    S_vv11 *v11;
    S_vv13 *v13;
    int v12;
    float t1;
    float r;
    float t2;
    int t3;
    if (o->f334 == 0) {
    } else {
        if (o->f33c == 0) {
        } else {
            v28 = (S_vv28 *)o->f334;
            switch (v28->f34 & 0x2000800) {
            case 0:
                if (((o->f34 & 0x2000)) != 0) {
                    o->f3ba = 2;
                    call_8c0121a0(o, 0, (void *)(*(S_g8c4671a4_0 **)((char *)&g_8c4671a4->f00 + (o->f3ba << 2))), 0);
                    return 1;
                }
                t2 = object_distance_xz((void *)o, (void *)v28, (void *)(&frame));
                t1 = call_8c130334((&frame)->f00, (&frame)->f08);
                t3 = angle_difference((int)(o->f64), (int)((int)(t1 * 65536.0f / 6.28318405f)));
                v1 = (S_vv1 *)o->f334;
                if (v1->fdc != 0) {
                    v3 = (float)v1->fdc->f0c;
                } else {
                    v3 = (float)10.0f;
                }
                v4 = (unsigned short)v1->f20;
                if ((unsigned int)0x1000 > v4) {
                    v5 = (int)(((v1->f350 & 1)) != 0);
                    if (v5 != 1) {
                        if (g_8c2e2ad8 != 1) {
                            goto L_8c04df14;
                        }
                        if (((v1->f34 & 0x20)) == 0) {
                            goto L_8c04df14;
                        }
                    }
                    o->f33c = (Arg0_33c *)g_8c4671a4->f00;
                    r = o->f33c->f08 + v3;
                    if (!(t2 > r * r)) {
                        if (o->f33c->f0c >= t3) {
                            o->f3ba = 0;
                            call_8c0121a0(o, 0, (void *)(*(S_g8c4671a4_0 **)((char *)&g_8c4671a4->f00 + (o->f3ba << 2))), 0);
                            return 1;
                        }
                    }
                    return 0;
L_8c04df14:;
                    v9 = (int)0x33c;
                    v10 = (int)0;
                    v11 = (S_vv11 *)(void *)&g_8c4671a4;
                    v12 = (int)t3;
                    while (2 > v10) {
                        *(int *)((char *)((char *)o + 0x0) + (v9)) = (int)(*(int *)((char *)((char *)v11->f00 + 0x0) + (v10 << 2)));
                        v13 = (S_vv13 *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v9));
                        r = v13->f08 + v3;
                        if (!(t2 > r * r)) {
                            if (v13->f0c >= v12) {
                                o->f3ba = v10;
                                call_8c0121a0(o, 0, (void *)(*(S_vv11_0_0 **)((char *)((char *)v11->f00 + 0x0) + (o->f3ba << 2))), 0);
                                return 1;
                            }
                        }
                        v10 = (int)(v10 + 1);
                    }
                } else {
                    if ((unsigned int)0x4000 > v4) {
                        o->f33c = (Arg0_33c *)g_8c4671a4->f00;
                        r = o->f33c->f08 + v3;
                        if (!(t2 > r * r)) {
                            if (o->f33c->f0c >= t3) {
                                o->f3ba = 0;
                                call_8c0121a0(o, 0, (void *)(*(S_g8c4671a4_0 **)((char *)&g_8c4671a4->f00 + (o->f3ba << 2))), 0);
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
