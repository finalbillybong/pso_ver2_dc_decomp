/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0bbf24
 * function: operation_8c0bbf24
 * language: c
 * reference size: 600 bytes
 * compiled size: 600 bytes (+0.0%)
 * differing lines: 10 of 242 reference instruction lines
 * differing bytes: 5
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
typedef struct S_vv24 S_vv24;
typedef struct S_vv4 S_vv4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_10 S_vv6_10;
typedef struct S_vv6_14 S_vv6_14;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
};
struct S_vv6 {
    char f00;
    char unknown1[0xf];
    S_vv6_10 *f10;
    S_vv6_14 *f14;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_vv4 {
    char unknown0[0xc];
    Vector3 f0c;
};
struct S_vv5 {
    int f00;
};
struct S_vv24 {
    float f00;
};
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern void njPushMatrixEx_8c38ae68(void);
extern void njTranslateV_8c382a58(int, S_vv4 *);
extern void vector_sub_in_place_8c37f6f0(Frame *, S_vv4 *);
extern float njScalor_8c37e480(Frame *);
extern void njUnitVector_8c37b630(Frame *);
extern float call_8c12c714(float);
extern float call_8c130334(float, float);
extern void njRotateY_8c37df90(int, int);
extern float call_8c1302e4(float);
extern void njRotateX_8c37dd28(int, int);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void call_8c38c0e6(int, int);
extern void call_8c38c0f0(void *);
extern void njScale_8c37e2e4(int, float, float, float);
extern void call_8c3a944a(void *);
void operation_8c0bbf24(Object *o)
{
    Frame frame;
    int v1;
    S_vv6 *v6;
    char v3;
    S_vv5 *v5;
    S_vv4 *v4;
    int v7;
    int v11;
    int v12;
    int v14;
    int v2;
    S_vv24 *v24;
    float v25;
    float t1;
    float t2;
    float t3;
    float t4;
    float t5;
    if (o->f20 == 0) {
        return;
    }
    v1 = (int)o->f24;
    if (v1 == 0 || o->f28 == 0 || o->f30 == 0) {
        return;
    }
    v4 = (S_vv4 *)o->f30;
    v5 = (S_vv5 *)o->f28;
    v6 = (S_vv6 *)v1;
    v2 = (int)-1;
    while ((v3 = v6->f00) >= 2) {
        v7 = (int)((char)v3 + v2);
        while (v7 > 0) {
            njPushMatrixEx_8c38ae68();
            njTranslateV_8c382a58(0, v4);
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v4->f0c;
            vector_sub_in_place_8c37f6f0((Frame *)((&frame)), v4);
            t1 = njScalor_8c37e480((Frame *)((&frame)));
            if (t1 == 0.0f) {
                (&frame)->f00.f00 = 0.0f;
                (&frame)->f00.f04 = -1.0f;
                (&frame)->f00.f08 = 0.0f;
            } else {
                njUnitVector_8c37b630((Frame *)((&frame)));
            }
            v11 = (int)0;
            t2 = call_8c12c714((&frame)->f00.f00);
            t3 = call_8c12c714((&frame)->f00.f08);
            v14 = (int)v11;
            if ((t2 + t3) != 0.0f) {
                t5 = call_8c130334(-(&frame)->f00.f00, -(&frame)->f00.f08);
                v12 = (int)(int)(t5 * 65536.0f / 6.28318405f);
                njRotateY_8c37df90(v11, v12);
                v14 = (int)v12;
            }
            t4 = call_8c1302e4(-(&frame)->f00.f04);
            njRotateX_8c37dd28(0, (int)((int)(t4 * 65536.0f / 6.28318405f)));
            njRotateY_8c37df90(0, (int)(v5->f00 - v14));
            if (v7 == 1) {
                if (v6->f14 == 0) {
                    goto L_8c0bc048;
                }
                call_8c3aa716((void *)(v6->f14));
            } else {
                if (v6->f10 != 0) {
                    call_8c3aa716((void *)(v6->f10));
                }
            }
L_8c0bc048:;
            njPopMatrixEx_8c38ad10();
            v7 = (int)(v7 + -1);
            v4 = (S_vv4 *)((char *)v4 + 12);
        }
        v4 = (S_vv4 *)((char *)v4 + 12);
        v6 = (S_vv6 *)((char *)v6 + 24);
        v5 = (S_vv5 *)((char *)v5 + 16);
    }
    if (o->f2c != 0) {
        g_8c46f560 = (int)(g_8c575570);
        g_8c575570 |= 0x10;
        g_8c46f574 = (int)(g_8c5755a4);
        g_8c46f578 = (int)(g_8c5755a8);
        call_8c38c0e6(0, 0x800);
        call_8c38c0f0((void *)((void *)0x8c30594c));
        v24 = (S_vv24 *)o->f2c;
        while (!(0.0f > v24->f00)) {
            njPushMatrixEx_8c38ae68();
            njTranslateV_8c382a58(0, (S_vv4 *)((int)v24 + 4));
            v25 = (float)(v24->f00 * 0.2f);
            njScale_8c37e2e4(0, v25, v25, v25);
            call_8c3a944a((void *)((void *)0x8c2f1b44));
            njPopMatrixEx_8c38ad10();
            v24 = (S_vv24 *)((char *)v24 + 16);
        }
        g_8c5755a4 = (int)(g_8c46f574);
        g_8c5755a8 = (int)(g_8c46f578);
        g_8c575570 = (int)(g_8c46f560);
        v2 = (int)v24;
    }
}
