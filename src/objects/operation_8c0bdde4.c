typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46f3a4 S_g8c46f3a4;
typedef struct S_g8c46f3a4_0 S_g8c46f3a4_0;
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
typedef struct Arg0_334_dc Arg0_334_dc;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv1 S_vv1;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x2a2];
    short f30a;
    char unknown30c[0x28];
    Arg0_334 *f334;
    char unknown338[0x4];
    int f33c;
    char unknown340[0x50];
    int f390;
    char unknown394[0x4];
    short f398;
};
struct S_vv1 {
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
struct S_vv5 {
    char unknown0[0x8];
    float f08;
    int f0c;
};
struct S_vv6 {
    char unknown0[0x8];
    float f08;
    int f0c;
};
extern S_g8c46f3a4 *g_8c46f3a4;
extern float object_distance_xz(void *, void *, void *);
extern float call_8c130334(float, float);
extern int angle_difference(int, int);
int operation_8c0bdde4(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int v4;
    float v3;
    S_vv5 *v5;
    S_vv6 *v6;
    float t1;
    float t2;
    int t3;
    if (o->f30a >= 3) {
        v1 = (S_vv1 *)o->f334;
        if (v1 != 0 && o->f33c != 0 && ((v1->f34 & 0x2000800)) == 0) {
            t2 = object_distance_xz((void *)o, (void *)v1, (void *)(&frame));
            t1 = call_8c130334((&frame)->f00, (&frame)->f08);
            t3 = angle_difference((int)(o->f64), (int)((int)(t1 * 65536.0f / 6.28318405f)));
            if (o->f334->fdc != 0) {
                v3 = (float)o->f334->fdc->f0c;
            } else {
                v3 = (float)10.0f;
            }
            v4 = (int)o->f390;
            if (((v4 & 8)) != 0) {
                o->f398 = 2;
                v5 = (S_vv5 *)*(S_g8c46f3a4_0 **)((char *)((char *)g_8c46f3a4 + 0x0) + (o->f398 << 2));
                if (t2 > ((v3 + v5->f08) * (v3 + v5->f08))) {
                    goto L_8c0bdede;
                }
                if (v5->f0c >= t3) {
                    return 1;
                }
                goto L_8c0bdede;
            }
            if (((v4 & 0x10)) != 0) {
                o->f398 = 1;
                if (t2 > ((v3 + 150.0f) * (v3 + 150.0f))) {
                    goto L_8c0bdede;
                }
                if (0xaaa >= t3) {
                    return 1;
                }
                goto L_8c0bdede;
            }
            o->f398 = 0;
            v6 = (S_vv6 *)*(S_g8c46f3a4_0 **)((char *)((char *)g_8c46f3a4 + 0x0) + (o->f398 << 2));
            if (!(t2 > ((v3 + v6->f08) * (v3 + v6->f08))) && v6->f0c >= t3) {
                return 1;
            }
        }
    }
L_8c0bdede:;
    return 0;
}
