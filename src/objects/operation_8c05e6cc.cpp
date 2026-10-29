typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_28_0 Arg0_28_0;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
class Object;
struct Frame {
    Vector3 f00;
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
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x378];
    int f3e0;
} ObjectData;
struct Arg0_28 {
    Arg0_28_0 *f00;
};
struct Arg0_28_0 {
    char unknown0[0x8];
    int f08;
    char unknownc[0x8];
    int f14;
    char unknown18[0x8];
    int f20;
    char unknown24[0x8];
    int f2c;
};
extern Vector3 g_8c2f374c;
extern "C" void call_8c05ba9c(Object *, Frame *);
extern "C" void call_8c3827d8(Arg0_28 *);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void operation_8c05baa8(void);
extern "C" void operation_8c1086fc(void);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c05e6cc(Object *o)
{
    Frame frame;
    char *v1;
    int v6;
    char *v2;
    int v5;
    int t1;
    int mask;
    t1 = o->v11(400.0f, 20.0f);
    if (t1 != 0) {
        {
            Vector3 *p_ = (Vector3 *)&g_8c2f374c;
            *(Vector3 *)&(&frame)->f00 = *p_;
        }
        call_8c05ba9c(o, (Frame *)((&frame)));
        mask = 0x400;
        if (((((ObjectData *)o)->f3e0 & mask)) != 0) {
            v1 = (char *)((ObjectData *)o)->f28->f00->f08;
            v2 = (char *)((ObjectData *)o)->f28->f00->f14;
            ((ObjectData *)o)->f28->f00->f08 = (int)(((ObjectData *)o)->f28->f00->f20);
            ((ObjectData *)o)->f28->f00->f14 = (int)(((ObjectData *)o)->f28->f00->f2c);
            v5 = (int)v2;
            v6 = (int)v1;
        }
        call_8c3827d8((Arg0_28 *)(((ObjectData *)o)->f28));
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        operation_8c05baa8();
        operation_8c1086fc();
        call_8c3aa716((void *)(((ObjectData *)o)->f38));
        call_8c391cc4();
        call_8c38ad10();
        if (((((ObjectData *)o)->f3e0 & 0x400)) != 0) {
            ((ObjectData *)o)->f28->f00->f08 = (int)v6;
            ((ObjectData *)o)->f28->f00->f14 = (int)v5;
        }
    }
}
