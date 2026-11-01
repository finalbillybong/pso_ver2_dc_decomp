/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c089a30
 * function: operation_8c089a30
 * language: c++
 * reference size: 352 bytes
 * compiled size: 352 bytes (+0.0%)
 * differing lines: 20 of 132 reference instruction lines
 * differing bytes: 43
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
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Frame Frame;
typedef struct Arg0_100 Arg0_100;
typedef struct Arg0_104 Arg0_104;
typedef struct Arg0_108 Arg0_108;
typedef struct Arg0_10c Arg0_10c;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_fc Arg0_fc;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_2c S_vv2_2c;
typedef struct S_vv2_4 S_vv2_4;
typedef struct S_vv2_4_4 S_vv2_4_4;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_2c S_vv5_2c;
typedef struct S_vv5_4 S_vv5_4;
typedef struct S_vv6 S_vv6;
typedef struct S_vv6_14 S_vv6_14;
typedef struct S_vv6_18 S_vv6_18;
typedef struct S_vv6_1c S_vv6_1c;
typedef struct S_vv6_30 S_vv6_30;
typedef struct S_vv6_4 S_vv6_4;
class Object;
struct Frame {
    char f00;
    char unknown1[0x3];
};
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
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x28];
    int f90;
    char unknown94[0x64];
    float ff8;
    Arg0_fc *ffc;
    Arg0_100 *f100;
    Arg0_104 *f104;
    Arg0_108 *f108;
    Arg0_10c *f10c;
} ObjectData;
struct Arg0_104 {
    char unknown0[0x2c];
    int f2c;
};
struct S_vv2 {
    char unknown0[0x4];
    S_vv2_4 *f04;
    char unknown8[0x24];
    S_vv2_2c *f2c;
};
struct S_vv2_4 {
    char unknown0[0x4];
    S_vv2_4_4 *f04;
};
struct S_vv5 {
    char unknown0[0x4];
    S_vv5_4 *f04;
    char unknown8[0x24];
    S_vv5_2c *f2c;
};
struct S_vv6 {
    char unknown0[0x4];
    S_vv6_4 *f04;
    char unknown8[0xc];
    S_vv6_14 *f14;
    S_vv6_18 *f18;
    S_vv6_1c *f1c;
    char unknown20[0x10];
    S_vv6_30 *f30;
};
extern "C" void call_8c0345cc(void *, int);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void call_8c3a9436(void *);
extern "C" void reset_state_8c391c94(void);
extern "C" void call_8c37ddbc(int, void *, void *, void *);
extern "C" void njRotateX_8c37dd28(int, void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void call_8c3ac53a(Arg0_104 *, void *, float);
extern "C" void operation_8c089a30(Object *o)
{
    Frame frame;
    int v1;
    S_vv2 *v2;
    S_vv5 *v5;
    S_vv6 *v6;
    int t1;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        *(SBlock4 *)&(&frame)->f00 = *(SBlock4 *)&*(char *)0x8c2fffa4;
        v1 = (int)((ObjectData *)o)->f104->f2c;
        v2 = (S_vv2 *)v1;
        while (v2 != 0) {
            if (v2->f04 != 0) {
                call_8c0345cc((void *)(v2->f04->f04), (int)(*(unsigned short *)((char *)&(&frame)->f00 + (((ObjectData *)o)->f90 << 1))));
            }
            v2 = (S_vv2 *)v2->f2c;
        }
        v5 = (S_vv5 *)((ObjectData *)o)->f100;
        call_8c3827d8((void *)(((ObjectData *)o)->f10c));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        njPushMatrixEx_8c38ae68();
        translate_current_matrix_v_8c382a40((void *)((int)v5 + 8));
        call_8c3a9436((void *)(v5->f04));
        reset_state_8c391c94();
        v6 = (S_vv6 *)v5->f2c;
        while (v6 != 0) {
            njPushMatrixEx_8c38ae68();
            translate_current_matrix_v_8c382a40((void *)((int)v6 + 8));
            call_8c37ddbc(0, (void *)(v6->f14), (void *)(v6->f18), (void *)(v6->f1c));
            njRotateX_8c37dd28(0, (void *)(((ObjectData *)o)->ffc));
            call_8c3a9436((void *)(v6->f04));
            njPopMatrixEx_8c38ad10();
            v6 = (S_vv6 *)v6->f30;
        }
        reset_state_8c391cc4();
        njPopMatrixEx_8c38ad10();
        reset_state_8c391c94();
        call_8c3ac53a((Arg0_104 *)(((ObjectData *)o)->f104), (void *)(((ObjectData *)o)->f108), ((ObjectData *)o)->ff8);
        reset_state_8c391cc4();
        njPopMatrixEx_8c38ad10();
    }
}
