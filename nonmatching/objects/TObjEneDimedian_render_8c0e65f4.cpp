/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0e65f4
 * function: TObjEneDimedian_render_8c0e65f4
 * language: c++
 * reference size: 676 bytes
 * compiled size: 676 bytes (+0.0%)
 * differing lines: 64 of 262 reference instruction lines
 * differing bytes: 244
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
typedef struct S_g8c46fe94 S_g8c46fe94;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_30 Arg0_38_2c_30;
typedef struct Arg0_38_2c_30_4 Arg0_38_2c_30_4;
typedef struct Arg0_38_2c_30_4_4 Arg0_38_2c_30_4_4;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv13 S_vv13;
class Object;
class Arg0_s3c4;
class Arg0_s3e8;
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
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x2a2];
    short f30a;
    char unknown30c[0x78];
    int f384;
    char unknown388[0x24];
    int f3ac;
} ObjectData;
struct Arg0_38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    char unknown0[0x30];
    Arg0_38_2c_30 *f30;
};
struct Arg0_38_2c_30 {
    char unknown0[0x4];
    Arg0_38_2c_30_4 *f04;
};
struct Arg0_38_2c_30_4 {
    char unknown0[0x4];
    Arg0_38_2c_30_4_4 *f04;
};
struct Arg0_38_2c_30_4_4 {
    char unknown0[0x6];
    short f06;
};
struct S_vv13 {
    int f00;
};
struct Frame {
    float f00;
    float f04;
    float f08;
};
class Arg0_s3c4 {
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
typedef struct Arg0_s3c4Data {

} Arg0_s3c4Data;
class Arg0_s3e8 {
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
};
typedef struct Arg0_s3e8Data {

} Arg0_s3e8Data;
extern int g_8c418244;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern "C" void call_8c0344f0(void *, int, int, int);
extern "C" int operation_8c05bbf8(void);
extern "C" void update_context_blend(void *);
extern "C" int update_depth_mode(void *, void *);
extern "C" void call_8c013c58(Object *);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" int operation_8c03d338(void);
extern "C" void call_8c3aa716(Arg0_38 *);
extern "C" void operation_8c1086fc(void);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c013e74(void);
extern "C" void call_8c04a9e0(Object *, Frame *);
extern "C" void TObjEneDimedian_render_8c0e65f4(Object *o)
{
    Frame frame;
    int v1;
    int v8;
    int t2;
    short v11;
    int t1;
    int t3;
    int t4;
    t1 = ((ObjectData *)o)->f384 << 2;
    v1 = (int)g_8c418244;
    if ((int)v1 != *(int *)((char *)0x8c46fea0 + t1)) {
        *(int *)((char *)0x8c46fea0 + t1) = (int)v1;
        call_8c0344f0((void *)(*(S_g8c46fe94 **)((char *)0x8c46fe94 + (((ObjectData *)o)->f384 << 2))), 0xe, 0, 0);
    }
    v8 = (int)0;
    t1 = operation_8c05bbf8();
    if (t1 != 0) {
        update_context_blend((void *)(((char *)o + 0x3e8)));
        v8 = update_depth_mode((void *)(((char *)o + 0x3e8)), (void *)(((char *)o + 0x324)));
    }
    t2 = o->v12(200.0f, 400.0f, 30.0f);
    if (t2 == 0) {
        return;
    }
    call_8c013c58(o);
    call_8c3827d8((void *)(((ObjectData *)o)->f28));
    njPushMatrixEx_8c38ae68();
    translate_current_matrix_v_8c382a40((void *)(((char *)o + 0x3c)));
    njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
    t3 = operation_8c03d338();
    if (t3 == 1) {
        call_8c3aa716((Arg0_38 *)(((ObjectData *)o)->f38));
    } else {
        switch (((ObjectData *)o)->f30a) {
        case 0:
        case 1:
        case 8:
            v11 = ((ObjectData *)o)->f38->f2c->f30->f04->f04->f06;
            ((ObjectData *)o)->f38->f2c->f30->f04->f04->f06 = (unsigned char)v11;
        }
        operation_8c1086fc();
        if (((ObjectData *)o)->f3ac == 1) {
            t4 = ((Arg0_s3c4 *)((char *)o + 0x3c4))->v8();
                if (t4 != 0) {
                t2 = 0x8c46f560;
                ((S_vv13 *)t2)->f00 = (int)(g_8c575570);
                g_8c46f574 = (int)(g_8c5755a4);
                g_8c46f578 = (int)(g_8c5755a8);
                ((Arg0_s3c4 *)((char *)o + 0x3c4))->v6();
                operation_8c01cc90((void *)o);
                ((Arg0_s3c4 *)((char *)o + 0x3c4))->v7();
                g_8c5755a4 = (int)(g_8c46f574);
                g_8c5755a8 = (int)(g_8c46f578);
                g_8c575570 = (int)(((S_vv13 *)t2)->f00);
            }
        } else {
            if (v8 != 0) {
                ((Arg0_s3e8 *)((char *)o + 0x3e8))->v6();
            }
            if (t2 == 1) {
                operation_8c01cc90((void *)o);
            } else {
                operation_8c01cd20((void *)o);
            }
            if (v8 != 0) {
                ((Arg0_s3e8 *)((char *)o + 0x3e8))->v7();
            }
            }
        reset_state_8c391cc4();
        switch (((ObjectData *)o)->f30a) {
        case 0:
        case 1:
        case 8:
            ((ObjectData *)o)->f38->f2c->f30->f04->f04->f06 = v11;
        }
    }
    njPopMatrixEx_8c38ad10();
    operation_8c013e74();
    if (((ObjectData *)o)->f30a != 0 && ((ObjectData *)o)->f30a != 1 && ((ObjectData *)o)->f30a != 8 && ((ObjectData *)o)->f30a != 9) {
        (&frame)->f00 = 1.5f;
        (&frame)->f04 = 1.0f;
        (&frame)->f08 = 2.0f;
        call_8c04a9e0(o, (Frame *)((&frame)));
    }
}
