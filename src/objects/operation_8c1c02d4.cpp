typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2c44 S_g8c4e2c44;
typedef struct S_g8c4e2c48 S_g8c4e2c48;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_4 Arg0_38_2c_4;
typedef struct Arg0_38_4 Arg0_38_4;
typedef struct Arg0_64 Arg0_64;
typedef struct Arg0_b0 Arg0_b0;
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
    char unknown68[0x2c];
    float f94;
    float f98;
    char unknown9c[0x4];
    float fa0;
    char unknowna4[0xc];
    Arg0_b0 *fb0;
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
};
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c3aa702(void *);
extern "C" void call_8c3829bc(int, float, float, float);
extern "C" void call_8c391c94(void);
extern "C" void call_8c3aa716(void *);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c1c02d4(Object *o)
{
    int t1;
    t1 = o->v11(((ObjectData *)o)->f94, ((ObjectData *)o)->f98);
    if (t1 != 0) {
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        call_8c3827d8((void *)(((ObjectData *)o)->f28));
        call_8c3aa702((void *)(((ObjectData *)o)->f38->f04));
        call_8c38ae68();
        call_8c3829bc(0, 0.0f, ((ObjectData *)o)->fa0, 0.0f);
        call_8c37df90(0, (void *)(((ObjectData *)o)->fb0));
        call_8c3aa702((void *)(((ObjectData *)o)->f38->f2c->f04));
        call_8c391c94();
        call_8c3827d8((void *)(*(S_g8c4e2c48 **)0x8c4e2c48));
        call_8c3aa716((void *)(*(S_g8c4e2c44 **)0x8c4e2c44));
        call_8c391cc4();
        call_8c38ad10();
        call_8c38ad10();
    }
}
