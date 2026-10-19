typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
class Object;
class Arg0_s3ac;
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
    char unknown3c[0x24];
    Arg0_60 *f60;
    Arg0_64 *f64;
    char unknown68[0x33c];
    int f3a4;
    char unknown3a8[0x28];
    float f3d0;
    char unknown3d4[0x4];
    float f3d8;
    char unknown3dc[0x18];
    short f3f4;
} ObjectData;
class Arg0_s3ac {
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
typedef struct Arg0_s3acData {

} Arg0_s3acData;
extern int g_8c575570;
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c013c58(Object *);
extern "C" void call_8c1086fc(void);
extern "C" void call_8c38ae68(void);
extern "C" int operation_8c03d338(void);
extern "C" void call_8c126480(Object *, int);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37dd28(int, void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c3829bc(int, float, float, float);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c013e74(void);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c11e000(Object *, int);
extern "C" void operation_8c1268c8(Object *o)
{
    int t1;
    int v4;
    int v1;
    int t2;
    int t3;
    switch (((ObjectData *)o)->f34 & 0x2000000) {
    case 0:
        t1 = o->v12(150.0f, 400.0f, 30.0f);
        if (t1 == 0) {
            return;
        }
        v1 = (int)1;
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        call_8c013c58(o);
        call_8c1086fc();
        call_8c38ae68();
        g_8c575570 &= -0x401;
        t2 = operation_8c03d338();
        if (t2 == 1) {
            call_8c126480(o, 4);
            call_8c382a40((void *)(((char *)o + 0x3c)));
            call_8c37dd28(0, (void *)(((ObjectData *)o)->f60));
            call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            call_8c3aa716((void *)(((ObjectData *)o)->f38));
        } else {
            call_8c126480(o, (int)(((ObjectData *)o)->f3f4));
            call_8c3829bc(0, 0.0f, ((ObjectData *)o)->f3d0 + ((ObjectData *)o)->f3d8, 0.0f);
            call_8c382a40((void *)(((char *)o + 0x3c)));
            call_8c37dd28(0, (void *)(((ObjectData *)o)->f60));
            call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
            if (((((ObjectData *)o)->f3a4 & 4)) != 0) {
                t3 = ((Arg0_s3ac *)((char *)o + 0x3ac))->v8();
                if (t3 != 0) {
                    ((Arg0_s3ac *)((char *)o + 0x3ac))->v6();
                    if (t1 == 1) {
                        operation_8c01cc90((void *)o);
                    } else {
                        operation_8c01cd20((void *)o);
                    }
                    ((Arg0_s3ac *)((char *)o + 0x3ac))->v7();
                    goto L_8c126a10;
                }
                v4 = (int)0;
                v1 = (int)v4;
            } else {
                if (t1 == 1) {
                    operation_8c01cc90((void *)o);
                } else {
                    operation_8c01cd20((void *)o);
                }
            }
        }
L_8c126a10:;
        call_8c38ad10();
        operation_8c013e74();
        call_8c391cc4();
        call_8c11e000(o, v1);
    }
}
