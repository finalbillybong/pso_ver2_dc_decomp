typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg0_100 Arg0_100;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_2c Arg0_38_2c_2c;
typedef struct Arg0_38_2c_2c_4 Arg0_38_2c_2c_4;
typedef struct Arg0_38_2c_4 Arg0_38_2c_4;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct Arg0_60 Arg0_60;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_68 Arg0_68;
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
    char unknown3c[0x24];
    Arg0_60 *f60;
    Arg0_64 *f64;
    Arg0_68 *f68;
    char unknown6c[0x8c];
    float ff8;
    float ffc;
    Arg0_100 *f100;
} ObjectData;
struct Arg0_38 {
    char unknown0[0x4];
    Arg0_38_4 *f04;
    char unknown8[0x24];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    char unknown0[0x4];
    Arg0_38_2c_4 *f04;
    char unknown8[0x24];
    Arg0_38_2c_2c *f2c;
};
struct Arg0_38_2c_2c {
    char unknown0[0x4];
    Arg0_38_2c_2c_4 *f04;
};
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37e02c(int, void *);
extern "C" void call_8c37dd28(int, void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c0ffcb0(Object *o)
{
    int t1;
    t1 = o->v11(((ObjectData *)o)->ff8, ((ObjectData *)o)->ffc);
    if (t1 != 0) {
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37e02c(0, (void *)(((ObjectData *)o)->f68));
        call_8c37dd28(0, (void *)(((ObjectData *)o)->f60));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        call_8c3aa702((void *)(((ObjectData *)o)->f38->f04));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f100));
        call_8c3aa702((void *)(((ObjectData *)o)->f38->f2c->f04));
        call_8c391c94();
        call_8c3aa702((void *)(((ObjectData *)o)->f38->f2c->f2c->f04));
        call_8c391cc4();
        call_8c38ad10();
    }
}
