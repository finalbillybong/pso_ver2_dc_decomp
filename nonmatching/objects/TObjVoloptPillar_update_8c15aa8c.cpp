/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c15aa8c
 * function: TObjVoloptPillar_update_8c15aa8c
 * language: c++
 * reference size: 732 bytes
 * compiled size: 728 bytes (-0.5%)
 * differing lines: 42 of 281 reference instruction lines
 * differing bytes: 671
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct S_g8c467880 S_g8c467880;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4da87c S_g8c4da87c;
typedef struct Object Object;
typedef struct Arg0_dc Arg0_dc;
typedef struct Arg0_f4 Arg0_f4;
class S_vv4;
typedef struct Block_frame_0 {
    char unknown0[0x4];
    float f04;
} Block_frame_0;
typedef struct Block_frame_20 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_20;
typedef struct Block_frame_14 {
    float f00;
    char unknown4[0x8];
} Block_frame_14;
typedef struct Block_frame_8 {
    int f00;
    float f04;
    char unknown8[0x4];
} Block_frame_8;
typedef struct Block_p0_3c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_p0_3c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x36];
    Block_p0_3c f3c;
    char unknown48[0x94];
    Arg0_dc *fdc;
    char unknowne0[0x4];
    int fe4;
    char unknowne8[0x4];
    int fec;
    char unknownf0[0x4];
    Arg0_f4 *ff4;
};
struct S_g8c4da87c {
    char unknown0[0x8];
    float f08;
    char unknownc[0x10];
    int f1c;
    char unknown20[0xc];
    int f2c;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
struct Frame {
    Block_frame_0 f00;
    Block_frame_8 f08;
    Block_frame_14 f14;
    Block_frame_20 f20;
};
class S_vv4 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25(void *, int, Block8);
};
typedef struct S_vv4Data {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
} S_vv4Data;
extern Block8 g_8c3165d8;
extern Vector3 g_8c3165e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4da87c *g_8c4da87c;
extern "C" void operation_8c15aec4(void *);
extern "C" void clear_words_8c053d64(void);
extern "C" void operation_8c0521a0(Object *);
extern "C" void njPushMatrix_8c38ade4(void *);
extern "C" void vector_sub_in_place_8c37f6f0(void *, void *);
extern "C" float call_8c130334(float, float);
extern "C" void njRotateY_8c37df90(int, int);
extern "C" void call_8c3be280(int, void *, int);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" int heap_alloc_8c122700(void *, unsigned int);
extern "C" void operation_8c18833c(void *, void *, int, int, void *, float, float);
extern "C" void operation_8c0a1ed0(int);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void TObjVoloptPillar_update_8c15aa8c(Object *o)
{
    Frame frame;
    S_vv4 *v4;
    int v3;
    int v12;
    int v1;
    int v2;
    float t1;
    int ang;
    int t2;
    switch (o->fe4) {
    case 0:
        o->fec = (int)(g_8c4da87c->f2c);
        o->fe4 = 1;
    case 1:
        if (--o->fec > 0) {
            return;
        }
        operation_8c15aec4((void *)o);
        o->fe4 = 2;
        return;
    case 2:
        o->f3c.f04 += -16.0f;
        if (o->f3c.f04 > 0.0f) {
            return;
        }
        o->fec = 0xf;
        o->fe4 = 3;
        o->fdc->f18 |= 2;
        clear_words_8c053d64();
        operation_8c0521a0(o);
        if (((o->fdc->f18 & 0x100000)) != 0) {
            v1 = (int)0x4000000;
            v3 = (int)0;
            v2 = (int)0x318;
            while (0x10 > v3) {
                v4 = (S_vv4 *)*(S_g8c467880 **)((char *)0x8c467880 + (v3 << 2));
                if (v4 == 0) {
                    goto L_8c15ac24;
                }
                *(Block8 *)&(&frame)->f00 = *(Block8 *)&g_8c3165d8;
                (&frame)->f00.f04 = (float)g_8c4da87c->f1c;
                v4->v25(o->ff4, 0, *(Block8 *)&(&frame)->f00);
                if (((((S_vv4Data *)v4)->f34 & v1)) == 0) {
                    njPushMatrix_8c38ade4((void *)((void *)0x8c400500));
                    *(Vector3 *)&(&frame)->f20 = *(Vector3 *)&((S_vv4Data *)v4)->f3c;
                    vector_sub_in_place_8c37f6f0((void *)(&(&frame)->f20), (void *)((void *)0x8c4d9b64));
                    t1 = call_8c130334((&frame)->f20.f00, (&frame)->f20.f08);
                    ang = (int)(t1 * 65536.0f / 6.28318405f);
                    *(Vector3 *)&(&frame)->f14 = *(Vector3 *)&g_8c3165e0;
                    (&frame)->f14.f00 = g_8c4da87c->f08;
                    njRotateY_8c37df90(0, ang);
                    call_8c3be280(0, (void *)(&(&frame)->f14), (int)((int)v4 + v2));
                    njPopMatrixEx_8c38ad10();
                }
                v3 = (int)(v3 + 1);
            }
            v12 = (int)v3;
        }
        v3 = (int)v12;
L_8c15ac24:;
        o->fdc->f18 = (unsigned int)o->fdc->f18 >> 1 << 1;
        *(Vector3 *)&(&frame)->f08 = *(Vector3 *)&o->f3c;
        (&frame)->f08.f04 = 5.0f;
        t2 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x4c);
        if (t2 != 0) {
            operation_8c18833c((void *)t2, (void *)(&(&frame)->f08.f00), 0x11e, 0xf, (void *)0, 0.25f, 40.0f);
        }
        operation_8c0a1ed0(1);
        play_se_8c05fbf8(0x30009, (void *)(&o->f3c), 0, 0);
        return;
    case 3:
        if (--o->fec > 0) {
            return;
        }
        o->fe4 = 4;
        return;
    case 4:
        o->f3c.f04 += 16.0f;
        if (!(90.0f > o->f3c.f04)) {
            o->f04 |= 1;
        }
        return;
    }
}
