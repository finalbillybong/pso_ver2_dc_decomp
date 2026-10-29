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
class Arg0_s3e8;
class Arg0_s404;
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
} ObjectData;
struct Frame {
    Vector3 f00;
};
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
};
typedef struct Arg0_s404Data {

} Arg0_s404Data;
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
    virtual int v8();
};
typedef struct Arg0_s3e8Data {

} Arg0_s3e8Data;
extern Vector3 g_8c30b964;
extern "C" int update_depth_mode(void *, void *);
extern "C" void call_8c1098a4(Object *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c013c58(Object *);
extern "C" void operation_8c1086fc(void);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" int operation_8c03d338(void);
extern "C" void call_8c3aa716(void *);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c013e74(void);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c04a9e0(Object *, Frame *);
extern "C" void operation_8c109064(Object *o)
{
    Frame frame;
    int v1;
    int t1;
    int t2;
    int t3;
    int t4;
    Frame *pm5;
    Arg0_s404 *pm7;
    ObjectData *pm8;
    void *pm9;
    switch (((ObjectData *)o)->f34 & 0x2000000) {
        case 0:
        v1 = (int)1;
        t1 = o->v12(200.0f, 400.0f, 40.0f);
        if (t1 == 0) {
            return;
        }
        pm9 = (void *)(((char *)o + 0x404));
        t2 = update_depth_mode(pm9, (void *)(((char *)o + 0x324)));
        if (0 != t2) {
            char *pm6;
            pm6 = (char *)o;
            ((Arg0_s404 *)(pm6 + 0x404))->v6();
        }
        call_8c1098a4(o);
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        call_8c013c58(o);
        operation_8c1086fc();
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        pm8 = (ObjectData *)o;
        call_8c37df90(0, (void *)((pm8)->f64));
        t3 = operation_8c03d338();
        if (t3 == 1) {
            call_8c3aa716((void *)(((ObjectData *)o)->f38));
        } else {
            if (((((ObjectData *)o)->f3a4 & 4)) != 0) {
                t4 = ((Arg0_s3e8 *)((char *)o + 0x3e8))->v8();
                if (t4 != 0) {
                    ((Arg0_s3e8 *)((char *)o + 0x3e8))->v6();
                    if (t1 == 1) {
                        operation_8c01cc90((void *)o);
                    } else {
                        operation_8c01cd20((void *)o);
                    }
                    ((Arg0_s3e8 *)((char *)o + 0x3e8))->v7();
                    goto L_8c109170;
                }
                v1 = (int)0;
            } else {
                if (t1 == 1) {
                    operation_8c01cc90((void *)o);
                } else {
                    operation_8c01cd20((void *)o);
                }
            }
        }
    L_8c109170:
        ;
        call_8c38ad10();
        operation_8c013e74();
        call_8c391cc4();
        if (((((ObjectData *)o)->f34 & 0x800)) == 0) {
            if (v1 != 0) {
                {
                    Vector3 *p_ = (Vector3 *)&g_8c30b964;
                    *(Vector3 *)&(&frame)->f00 = *p_;
                }
                pm5 = &frame;
                call_8c04a9e0(o, (Frame *)((pm5)));
            }
        }
        pm7 = (Arg0_s404 *)((char *)o + 0x404);
        (pm7)->v7();
    }
}
