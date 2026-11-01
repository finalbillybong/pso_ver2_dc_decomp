/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c0040
 * function: operation_8c0c0040
 * language: c++
 * reference size: 608 bytes
 * compiled size: 608 bytes (+0.0%)
 * differing lines: 96 of 237 reference instruction lines
 * differing bytes: 67
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
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
typedef struct Arg0_64 Arg0_64;
class Object;
class Arg0_s404;
class Arg0_s428;
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
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x4];
    float f6c;
    char unknown70[0x334];
    int f3a4;
    char unknown3a8[0x58];
    float f400;
    char unknown404[0x1c];
    float f420;
} ObjectData;
struct Frame {
    float f00;
    float f04;
    float f08;
};
class Arg0_s428 {
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
typedef struct Arg0_s428Data {

} Arg0_s428Data;
class Arg0_s404 {
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
typedef struct Arg0_s404Data {

} Arg0_s404Data;
extern int g_8c46f560;
extern int g_8c575570;
extern "C" int operation_8c03d338(void);
extern "C" int update_depth_mode(void *, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c013c58(Object *);
extern "C" void operation_8c1086fc(void);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void njTranslate_8c3829bc(int, float, float, float);
extern "C" void njRotateY_8c37df90(int, void *);
extern "C" void njScale_8c37e2e4(int, float, float, float);
extern "C" void call_8c3aa716(void *);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c013e74(void);
extern "C" void reset_state_8c391cc4(void);
extern "C" void call_8c04a9e0(Object *, Frame *);
extern "C" void operation_8c0c0040(Object *o)
{
    Frame frame;
    int t1;
    int v9;
    float v18;
    int v5;
    int t2;
    int t3;
    int t4;
    int t5;
    switch (((ObjectData *)o)->f34 & 0x2000000) {
    case 0:
        t1 = o->v12(150.0f, 400.0f, 20.0f);
        if (t1 == 0) {
            return;
        }
        t2 = operation_8c03d338();
        if (t2 != 1) {
            if (((((ObjectData *)o)->f3a4 & 0x40000)) != 0) {
                return;
            }
        }
        g_8c46f560 = (int)(g_8c575570);
        t3 = update_depth_mode((void *)(((char *)o + 0x428)), (void *)(((char *)o + 0x324)));
        if (t3 != 0) {
            ((Arg0_s428 *)((char *)o + 0x428))->v6();
        }
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        call_8c013c58(o);
        operation_8c1086fc();
        v5 = (int)1;
        njPushMatrixEx_8c38ae68();
        njTranslate_8c3829bc(0, ((ObjectData *)o)->f3c, ((ObjectData *)o)->f420 + (((ObjectData *)o)->f40 + ((ObjectData *)o)->f400), ((ObjectData *)o)->f44);
        njRotateY_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        njScale_8c37e2e4(0, ((ObjectData *)o)->f6c, ((ObjectData *)o)->f6c, ((ObjectData *)o)->f6c);
        g_8c575570 &= -0x401;
        t4 = operation_8c03d338();
        if (t4 == 1) {
            call_8c3aa716((void *)(((ObjectData *)o)->f38));
        } else {
            if (((((ObjectData *)o)->f3a4 & 4)) != 0) {
                t5 = ((Arg0_s404 *)((char *)o + 0x404))->v8();
                if (t5 != 0) {
                    ((Arg0_s404 *)((char *)o + 0x404))->v6();
                    if (t1 == 1) {
                        operation_8c01cc90((void *)o);
                    } else {
                        operation_8c01cd20((void *)o);
                    }
                    ((Arg0_s404 *)((char *)o + 0x404))->v7();
                    goto L_8c0c01a4;
                }
                v9 = (int)0;
                v5 = (int)v9;
            } else {
                if (t1 == 1) {
                    operation_8c01cc90((void *)o);
                } else {
                    operation_8c01cd20((void *)o);
                }
            }
        }
L_8c0c01a4:;
        njPopMatrixEx_8c38ad10();
        operation_8c013e74();
        reset_state_8c391cc4();
        if (((((ObjectData *)o)->f34 & 0x800)) == 0) {
            if (v5 != 0) {
                v18 = (float)((1.0f - ((ObjectData *)o)->f420 * 0.01f) * (((ObjectData *)o)->f6c * 5.0f));
                (&frame)->f08 = v18;
                (&frame)->f04 = v18;
                (&frame)->f00 = v18;
                call_8c04a9e0(o, (Frame *)((&frame)));
            }
        }
        ((Arg0_s428 *)((char *)o + 0x428))->v7();
        g_8c575570 = (int)(g_8c46f560);
    }
}
