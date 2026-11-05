/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1aae20
 * function: TBoss2Fin_render_8c1aae20
 * language: c
 * reference size: 508 bytes
 * compiled size: 508 bytes (+0.0%)
 * differing lines: 50 of 201 reference instruction lines
 * differing bytes: 24
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * class header: src/include/classes/TBoss2Fin.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c4182cc S_g8c4182cc;
typedef struct S_g8c4da370 S_g8c4da370;
typedef struct S_g8c4da370_42c S_g8c4da370_42c;
typedef struct S_g8c4da370_42c_2c S_g8c4da370_42c_2c;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct S_vv37 S_vv37;
typedef struct S_vv7 S_vv7;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_10 S_vv8_10;
typedef struct S_vv8_14 S_vv8_14;
typedef struct S_vv9 S_vv9;
typedef struct Block_frame_0 {
    float f00;
    float f04;
    float f08;
} Block_frame_0;
struct S_g8c4da370 {
    char unknown0[0x42c];
    S_g8c4da370_42c *f42c;
};
struct S_g8c4da370_42c {
    char unknown0[0x2c];
    S_g8c4da370_42c_2c *f2c;
};
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    char unknown2c[0x4];
    int f30;
};
struct Frame {
    Block_frame_0 f00;
};
struct S_vv9 {
    char unknown0[0xc];
    Vector3 f0c;
};
struct S_vv7 {
    int f00;
};
struct S_vv8 {
    char unknown0[0x10];
    S_vv8_10 *f10;
    S_vv8_14 *f14;
};
struct S_vv37 {
    char f00;
};
extern float g_8c286290;
extern float g_8c286294;
extern S_g8c4182cc *g_8c4182cc;
extern S_g8c4da370 *g_8c4da370;
extern char g_8c418280[];
extern void call_8c3827d8(void *);
extern void call_8c3a9cec(float, float);
extern void njPushMatrixEx_8c38ae68(void);
extern void njTranslateV_8c382a58(int, S_vv9 *);
extern void vector_sub_in_place_8c37f6f0(Frame *, S_vv9 *);
extern float njScalor_8c37e480(Frame *);
extern void njUnitVector_8c37b630(Frame *);
extern float call_8c12c714(float);
extern float errno_wrap_8c130334(float, float);
extern void njRotateY_8c37df90(int, int);
extern float errno_wrap_8c1302e4(float);
extern void njRotateX_8c37dd28(int, int);
extern void njScale_8c37e2e4(int, float, float, float);
extern void call_8c3aa716(void *);
extern void njPopMatrixEx_8c38ad10(void);
extern void operation_8c0149c8(void *);
void TBoss2Fin_render_8c1aae20(Object *o)
{
    Frame frame;
    S_vv8 *v8;
    S_vv7 *v7;
    S_vv9 *v9;
    int neg;
    char c;
    int k;
    int n;
    int a;
    int b;
    float t2;
    float t3;
    float t4;
    float t5;
    float s;
    call_8c3827d8((void *)(g_8c4da370->f42c->f2c));
    s = g_8c286294;
    call_8c3a9cec(*(float *)(g_8c418280 + 0x1c) * s, *(float *)(g_8c418280 + 0x20) * s);
    v8 = (S_vv8 *)o->f24;
    neg = -1;
    v7 = (S_vv7 *)o->f28;
    k = -0x4000;
    v9 = (S_vv9 *)o->f30;
    for (; (c = ((S_vv37 *)v8)->f00) >= 2; v8 = (S_vv8 *)((char *)v8 + 0x18), v7 = (S_vv7 *)((char *)v7 + 0x10)) {
        for (n = c + neg; n > 0; n--, v9 = (S_vv9 *)((char *)v9 + 0xc)) {
            njPushMatrixEx_8c38ae68();
            njTranslateV_8c382a58(0, v9);
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&v9->f0c;
            vector_sub_in_place_8c37f6f0((Frame *)((&frame)), v9);
            if (njScalor_8c37e480((Frame *)((&frame))) == 0.0f) {
                (&frame)->f00.f00 = 0.0f;
                (&frame)->f00.f04 = -1.0f;
                (&frame)->f00.f08 = 0.0f;
            } else {
                njUnitVector_8c37b630((Frame *)((&frame)));
            }
            a = 0;
            t2 = call_8c12c714((&frame)->f00.f00);
            t3 = call_8c12c714((&frame)->f00.f08);
            if ((t2 + t3) != 0.0f) {
                t5 = errno_wrap_8c130334(-(&frame)->f00.f00, -(&frame)->f00.f08);
                b = (int)(t5 * 65536.0f / 6.28318405f);
                njRotateY_8c37df90(a, b);
                a = b;
            }
            t4 = errno_wrap_8c1302e4(-(&frame)->f00.f04);
            njRotateX_8c37dd28(0, (int)(t4 * 65536.0f / 6.28318405f));
            njRotateY_8c37df90(0, v7->f00 - a);
            njPushMatrixEx_8c38ae68();
            njScale_8c37e2e4(0, g_8c286290, g_8c286290, g_8c286290);
            njRotateX_8c37dd28(0, k);
            if (n == 1) {
                if (v8->f14 != 0) {
                    call_8c3aa716((void *)(v8->f14));
                }
            } else {
                if (v8->f10 != 0) {
                    call_8c3aa716((void *)(v8->f10));
                }
            }
            njPopMatrixEx_8c38ad10();
            njPopMatrixEx_8c38ad10();
        }
        v9 = (S_vv9 *)((char *)v9 + 0xc);
    }
    operation_8c0149c8(g_8c4182cc);
}
