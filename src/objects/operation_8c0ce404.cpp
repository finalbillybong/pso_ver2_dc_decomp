typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c46fac4 S_g8c46fac4;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
class Object;
class Arg0_s3cc;
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
    char unknown68[0x33c];
    int f3a4;
    char unknown3a8[0x6];
    short f3ae;
} ObjectData;
struct Frame {
    Vector3 f00;
};
class Arg0_s3cc {
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
typedef struct Arg0_s3ccData {

} Arg0_s3ccData;
extern Vector3 g_8c306c40;
extern int g_8c46f560;
extern S_g8c46fac4 *g_8c46fac4;
extern int g_8c575570;
extern "C" void call_8c013c58(Object *);
extern "C" void call_8c1086fc(void);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c38ae68(void);
extern "C" void operation_8c0cffe8(void *);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c37e2e4(int, float, float, float);
extern "C" int operation_8c03d338(void);
extern "C" void call_8c3aa716(void *);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c013e74(void);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c04a9e0(Object *, Frame *);
extern "C" void operation_8c0ce404(Object *o)
{
    Frame frame;
    int t1;
    int v6;
    int v3;
    int t2;
    int t3;
    switch (((ObjectData *)o)->f34 & 0x2000000) {
    case 0:
        t1 = o->v12(120.0f, 400.0f, 20.0f);
        if (t1 == 0) {
            return;
        }
        call_8c013c58(o);
        call_8c1086fc();
        if (((ObjectData *)o)->f3ae != 0) {
            call_8c3827d8(g_8c46fac4);
        } else {
            call_8c3827d8((void *)(((ObjectData *)o)->f28));
        }
        v3 = (int)1;
        call_8c38ae68();
        g_8c46f560 = (int)(g_8c575570);
        operation_8c0cffe8((void *)o);
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c37e2e4(0, 1.3f, 1.3f, 1.3f);
        g_8c575570 &= -0x401;
        t2 = operation_8c03d338();
        if (t2 == 1) {
            call_8c3aa716((void *)(((ObjectData *)o)->f38));
        } else {
            if (((((ObjectData *)o)->f3a4 & 4)) != 0) {
                t3 = ((Arg0_s3cc *)((char *)o + 0x3cc))->v8();
                if (t3 != 0) {
                    ((Arg0_s3cc *)((char *)o + 0x3cc))->v6();
                    if (t1 == 1) {
                        operation_8c01cc90((void *)o);
                    } else {
                        operation_8c01cd20((void *)o);
                    }
                    ((Arg0_s3cc *)((char *)o + 0x3cc))->v7();
                    goto L_8c0ce524;
                }
                v6 = (int)0;
                v3 = (int)v6;
            } else {
                if (t1 == 1) {
                    operation_8c01cc90((void *)o);
                } else {
                    operation_8c01cd20((void *)o);
                }
            }
        }
L_8c0ce524:;
        g_8c575570 = (int)(g_8c46f560);
        call_8c38ad10();
        operation_8c013e74();
        call_8c391cc4();
        if (((((ObjectData *)o)->f34 & 0x800)) == 0) {
            if (v3 != 0) {
                {
                    Vector3 *p_ = (Vector3 *)&g_8c306c40;
                    *(Vector3 *)&(&frame)->f00 = *p_;
                }
                call_8c04a9e0(o, (Frame *)((&frame)));
            }
        }
    }
}
