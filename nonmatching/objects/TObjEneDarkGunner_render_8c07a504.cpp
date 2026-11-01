/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07a504
 * function: TObjEneDarkGunner_render_8c07a504
 * language: c++
 * reference size: 740 bytes
 * compiled size: 736 bytes (-0.5%)
 * differing lines: 126 of 288 reference instruction lines
 * differing bytes: 554
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct S_g8c469a98 S_g8c469a98;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_40c Arg0_40c;
typedef struct Arg0_440 Arg0_440;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
typedef struct S_vv21 S_vv21;
class Object;
class Arg0_s424;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    float f08;
    float f0c;
} Block_frame_c;
class Object {
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
    virtual int v12(float, float, float);
};
typedef struct ObjectData {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x8];
    int f34;
    char unknown38[0x4];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    Arg0_68 *f68;
    char unknown6c[0x338];
    int f3a4;
    float f3a8;
    char unknown3ac[0x94];
    Arg0_440 *f440;
} ObjectData;
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
};
struct S_vv21 {
    char unknown0[0x344];
    int f344;
};
class Arg0_s424 {
public:
    char unknown0[0x14];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual int v8();
};
typedef struct Arg0_s424Data {

} Arg0_s424Data;
extern Block16 g_8c2fdb68;
extern Vector3 g_8c2fdb88;
extern S_g8c469a98 *g_8c469a98;
extern int g_8c46f560;
extern int g_8c575570;
extern "C" void call_8c013c58(Object *);
extern "C" void operation_8c1086fc(void);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void njRotateZ_8c37e02c(int, void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c38c0e6(int, int);
extern "C" float njSin_8c37eb0c(void *);
extern "C" float call_8c12c714(float);
extern "C" void call_8c38c0f0(void *);
extern "C" void call_8c3827d8(void *);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c07a7f0(void *);
extern "C" void operation_8c013e74(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void call_8c04a9e0(Object *, Frame *);
extern "C" void TObjEneDarkGunner_render_8c07a504(Object *o)
{
    Frame frame;
    float v82;
    int v17;
    int v16;
    char *v19;
    int v20;
    S_vv21 *v21;
    int t1;
    int v23;
    int v6;
    int v1;
    float t2;
    float t3;
    int t4;
    switch (((ObjectData *)o)->f34 & 0x2000000) {
    case 0:
        t1 = o->v12(150.0f, 400.0f, 15.0f);
        if (t1 == 0) {
            return;
        }
        call_8c013c58(o);
        operation_8c1086fc();
        v1 = (int)1;
        njPushMatrixEx_8c38ae68();
        g_8c46f560 = (int)(g_8c575570);
        g_8c575570 &= -0x11;
        njTranslate_8c3829bc(0, ((ObjectData *)o)->f3c, ((ObjectData *)o)->f40 + ((ObjectData *)o)->f3a8, ((ObjectData *)o)->f44);
        njRotateZ_8c37e02c(0, (void *)(((ObjectData *)o)->f68));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        if (((((ObjectData *)o)->f3a4 & 0x400000)) != 0) {
            g_8c575570 |= 0x820;
            call_8c38c0e6(0xff00, 0x800);
            t2 = njSin_8c37eb0c((void *)(((ObjectData *)o)->f440));
            t3 = call_8c12c714(t2);
            {
                Block16 *p_ = (Block16 *)&g_8c2fdb68;
                *(Block16 *)&(&frame)->f0c = *p_;
            }
            v82 = (float)(t3 * -0.25f);
            (&frame)->f0c.f04 = v82;
            (&frame)->f0c.f08 = v82;
            (&frame)->f0c.f0c = v82;
            call_8c38c0f0((void *)(&(&frame)->f0c));
            call_8c3827d8(g_8c469a98);
        } else {
            call_8c3827d8((void *)(((ObjectData *)o)->f28));
        }
        if (((((ObjectData *)o)->f3a4 & 4)) != 0) {
            t4 = ((Arg0_s424 *)((char *)o + 0x424))->v8();
            if (t4 != 0) {
                ((Arg0_s424 *)((char *)o + 0x424))->v6();
                if (t1 == 1) {
                    operation_8c01cc90((void *)o);
                } else {
                    operation_8c01cd20((void *)o);
                }
                ((Arg0_s424 *)((char *)o + 0x424))->v7();
                goto L_8c07a678;
            }
            v6 = (int)0;
            v1 = (int)v6;
        } else {
            if (t1 == 1) {
                operation_8c01cc90((void *)o);
            } else {
                operation_8c01cd20((void *)o);
            }
        }
L_8c07a678:;
        if (((((ObjectData *)o)->f3a4 & 0x400000)) != 0) {
            call_8c38c0f0((void *)((void *)0x8c2fdb78));
            call_8c38c0e6(0xff00, 0);
        }
        g_8c575570 = (int)(g_8c46f560);
        njPopMatrixEx_8c38ad10();
        operation_8c07a7f0((void *)o);
        operation_8c013e74();
        reset_state_8c391cc4();
        v16 = (int)0;
        if (t1 == 1 && ((((ObjectData *)o)->f3a4 & 0x200000)) != 0) {
            v16 = (int)1;
        }
        v17 = (int)0;
        if (v16 != 0) {
            if (((((ObjectData *)o)->f34 & 0x22)) == 0) {
                v17 = (int)1;
            }
        }
        for (v20 = 0; v20 < 4; v20++) {
            v21 = (S_vv21 *)*(Arg0_40c **)((char *)((char *)o + 0x40c) + (v20 << 2));
            if (v21 != 0) {
                if (v17 != 0) {
                    v21->f344 = 1;
                } else {
                    v21->f344 = 0;
                }
            }
        }
        v23 = (int)((ObjectData *)o)->f34;
        if (((v23 & 0x800)) == 0) {
            if (v1 != 0) {
                if (((v23 & 0x800000)) != 0) {
                    *(Vector3 *)&(&frame)->f00 = g_8c2fdb88;
                    call_8c04a9e0(o, (Frame *)((&frame)));
                }
            }
        }
    }
}
