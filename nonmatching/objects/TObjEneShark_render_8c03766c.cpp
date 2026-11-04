/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c03766c
 * function: TObjEneShark_render_8c03766c
 * language: c++
 * reference size: 800 bytes
 * compiled size: 800 bytes (+0.0%)
 * differing lines: 18 of 318 reference instruction lines
 * differing bytes: 25
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order; review found and
 *   fixed behaviour defects of the generator draft; not proven equivalent to the original
 * class header: src/include/classes/TObjEneShark.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_30 Arg0_38_2c_30;
typedef struct Arg0_38_2c_30_30 Arg0_38_2c_30_30;
typedef struct Arg0_38_2c_30_30_4 Arg0_38_2c_30_30_4;
typedef struct Arg0_38_2c_30_30_4_4 Arg0_38_2c_30_30_4_4;
typedef struct Arg0_38_2c_30_4 Arg0_38_2c_30_4;
typedef struct Arg0_38_2c_30_4_4 Arg0_38_2c_30_4_4;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv101 S_vv101;
typedef struct S_vv101_2c S_vv101_2c;
typedef struct S_vv102 S_vv102;
typedef struct S_vv102_30 S_vv102_30;
typedef struct S_vv103 S_vv103;
typedef struct S_vv103_30 S_vv103_30;
typedef struct S_vv104 S_vv104;
typedef struct S_vv104_4 S_vv104_4;
typedef struct S_vv105 S_vv105;
typedef struct S_vv105_4 S_vv105_4;
typedef struct S_vv106 S_vv106;
typedef struct S_vv11 S_vv11;
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
    char unknown2c[0x8];
    int f34;
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x2a2];
    short f30a;
    char unknown30c[0x88];
    int f394;
    char unknown398[0x4];
    float f39c;
    char unknown3a0[0xc];
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
    char unknown8[0x28];
    Arg0_38_2c_30_30 *f30;
};
struct Arg0_38_2c_30_4 {
    char unknown0[0x4];
    Arg0_38_2c_30_4_4 *f04;
};
struct Arg0_38_2c_30_4_4 {
    char unknown0[0x6];
    short f06;
};
struct S_vv105 {
    char unknown0[0x4];
    S_vv105_4 *f04;
};
struct S_vv104 {
    char unknown0[0x4];
    S_vv104_4 *f04;
};
struct S_vv103 {
    char unknown0[0x30];
    S_vv103_30 *f30;
};
struct S_vv102 {
    char unknown0[0x30];
    S_vv102_30 *f30;
};
struct S_vv101 {
    char unknown0[0x2c];
    S_vv101_2c *f2c;
};
struct S_vv106 {
    char unknown0[0x4];
    short f04;
    short f06;
};
struct Arg0_38_2c_30_30 {
    char unknown0[0x4];
    Arg0_38_2c_30_30_4 *f04;
};
struct Arg0_38_2c_30_30_4 {
    char unknown0[0x4];
    Arg0_38_2c_30_30_4_4 *f04;
};
struct Arg0_38_2c_30_30_4_4 {
    char unknown0[0x4];
    short f04;
    short f06;
};
struct S_vv11 {
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
extern int g_8c4627fc;
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern "C" int operation_8c05bbf8(void);
extern "C" void update_context_blend(void *);
extern "C" int update_depth_mode(void *, void *);
extern "C" void call_8c013c58(Object *);
extern "C" void call_8c3827d8(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" int operation_8c03d338(void);
extern "C" void call_8c3aa716(Arg0_38 *);
extern "C" void operation_8c1086fc(void);
extern "C" void set_transform_node_callback(void *);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void reset_state_8c391cc4(void);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c013e74(void);
extern "C" void call_8c04a9e0(Object *, Frame *);
extern "C" void operation_8c03798c();
#define OD ((ObjectData *)o)
extern "C" void TObjEneShark_render_8c03766c(Object *self)
{
    Frame frame;
    short a;
    short c;
    short b;
    Object *o;
    int ctx;
    int r;
    o = self;
    if ((OD->f34 & 0x2000000) != 0) {
        return;
    }
    ctx = 0;
    if (operation_8c05bbf8() != 0) {
        update_context_blend((void *)((char *)o + 0x3e8));
        ctx = update_depth_mode((void *)((char *)o + 0x3e8), (void *)((char *)o + 0x324));
    }
    r = o->v12(200.0f, 400.0f, 30.0f);
    if (r == 0) {
        return;
    }
    call_8c013c58(o);
    call_8c3827d8((void *)(OD->f28));
    njPushMatrixEx_8c38ae68();
    njTranslate_8c3829bc(0, 0.0f, OD->f39c, 0.0f);
    translate_current_matrix_v_8c382a40((void *)((char *)o + 0x3c));
    njRotateY_8c37df90(0, (void *)(OD->f64));
    if (operation_8c03d338() == 1) {
        call_8c3aa716((Arg0_38 *)(OD->f38));
    } else {
        switch (OD->f30a) {
        case 0:
        case 1:
        case 8:
        case 9:
            a = OD->f38->f2c->f30->f04->f04->f06;
            OD->f38->f2c->f30->f04->f04->f06 = (unsigned char)a;
        }
        if (OD->f394 == 0) {
            b = OD->f38->f2c->f30->f30->f04->f04->f04;
            c = OD->f38->f2c->f30->f30->f04->f04->f06;
            OD->f38->f2c->f30->f30->f04->f04->f04 = -0xb4;
            OD->f38->f2c->f30->f30->f04->f04->f06 = -1;
        }
        operation_8c1086fc();
        g_8c4627fc = 0;
        set_transform_node_callback(operation_8c03798c);
        if (OD->f3ac == 1) {
            if (((Arg0_s3c4 *)((char *)o + 0x3c4))->v8() != 0) {
                g_8c46f560 = g_8c575570;
                g_8c46f574 = g_8c5755a4;
                g_8c46f578 = g_8c5755a8;
                ((Arg0_s3c4 *)((char *)o + 0x3c4))->v6();
                operation_8c01cc90((void *)o);
                ((Arg0_s3c4 *)((char *)o + 0x3c4))->v7();
                g_8c5755a8 = g_8c46f578;
                g_8c575570 = g_8c46f560;
                g_8c5755a4 = g_8c46f574;
            }
        } else {
            if (ctx != 0) {
                ((Arg0_s3e8 *)((char *)o + 0x3e8))->v6();
            }
            if (r == 1) {
                operation_8c01cc90((void *)o);
            } else {
                operation_8c01cd20((void *)o);
            }
            if (ctx != 0) {
                ((Arg0_s3e8 *)((char *)o + 0x3e8))->v7();
            }
        }
        set_transform_node_callback((void *)0);
        reset_state_8c391cc4();
        if (OD->f394 == 0) {
            OD->f38->f2c->f30->f30->f04->f04->f04 = b;
            OD->f38->f2c->f30->f30->f04->f04->f06 = c;
        }
        switch (OD->f30a) {
        case 0:
        case 1:
        case 8:
        case 9:
            OD->f38->f2c->f30->f04->f04->f06 = a;
        }
    }
    njPopMatrixEx_8c38ad10();
    operation_8c013e74();
    if (OD->f30a != 0) {
        if (OD->f30a != 1) {
            if (OD->f30a != 8) {
                if (OD->f30a != 9) {
                    (&frame)->f00 = 1.5f;
                    (&frame)->f04 = 1.0f;
                    (&frame)->f08 = 2.0f;
                    call_8c04a9e0(o, (Frame *)((&frame)));
                }
            }
        }
    }
}
