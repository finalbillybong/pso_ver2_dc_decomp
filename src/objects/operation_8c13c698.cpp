typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9c40 S_g8c4d9c40;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_38_2c Arg0_38_2c;
typedef struct Arg0_38_2c_4 Arg0_38_2c_4;
typedef struct Arg0_3d0 Arg0_3d0;
typedef struct Arg0_64 Arg0_64;
class Object;
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
    char unknown2c[0x8];
    int f34;
    Arg0_38 *f38;
    float f3c;
    float f40;
    float f44;
    char unknown48[0x1c];
    Arg0_64 *f64;
    char unknown68[0x33c];
    int f3a4;
    float f3a8;
    char unknown3ac[0x24];
    Arg0_3d0 *f3d0;
} ObjectData;
struct Arg0_38 {
    char unknown0[0x2c];
    Arg0_38_2c *f2c;
};
struct Arg0_38_2c {
    char unknown0[0x4];
    Arg0_38_2c_4 *f04;
};
struct S_g8c4d9c40 {
    char unknown0[0x4];
    unsigned char f04;
    unsigned char f05;
    char f06;
};
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c013c58(Object *);
extern "C" void call_8c1086fc(void);
extern "C" void call_8c38ae68(void);
extern "C" int operation_8c03d338(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3aa716(Arg0_38 *);
extern "C" void call_8c3829bc(int, float, float, float);
extern "C" void call_8c3a9436(void *);
extern "C" float call_8c37eb0c(void *);
extern "C" float call_8c12c714(float);
extern "C" void operation_8c01cc90(void *);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c013e74(void);
extern "C" void call_8c391cc4(void);
extern "C" void operation_8c13c698(Object *o)
{
    int t1;
    int t2;
    float t3;
    float t4;
    if (((((ObjectData *)o)->f34 & 0x2000000)) == 0) {
        t1 = o->v11(400.0f, 40.0f);
        if (t1 != 0) {
            call_8c3827d8((void *)(((ObjectData *)o)->f28));
            call_8c013c58(o);
            call_8c1086fc();
            call_8c38ae68();
            t2 = operation_8c03d338();
            if (t2 == 1) {
                call_8c382a40((void *)(((char *)o + 0x3c)));
                call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
                call_8c3aa716((Arg0_38 *)(((ObjectData *)o)->f38));
            } else {
                call_8c3829bc(0, ((ObjectData *)o)->f3c, ((ObjectData *)o)->f40 + ((ObjectData *)o)->f3a8, ((ObjectData *)o)->f44);
                call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
                if (((((ObjectData *)o)->f3a4 & 0x40000)) != 0) {
                    call_8c3a9436((void *)(((ObjectData *)o)->f38->f2c->f04));
                } else {
                    if (((((ObjectData *)o)->f3a4 & 0x80000)) != 0) {
                        t3 = call_8c37eb0c((void *)(((ObjectData *)o)->f3d0));
                        t4 = call_8c12c714(t3);
                        (*(S_g8c4d9c40 **)0x8c4d9c40)->f06 = (int)(t4 * 255.0f);
                        (*(S_g8c4d9c40 **)0x8c4d9c40)->f05 = 0;
                        (*(S_g8c4d9c40 **)0x8c4d9c40)->f04 = 0;
                    } else {
                        (*(S_g8c4d9c40 **)0x8c4d9c40)->f06 = 0;
                        (*(S_g8c4d9c40 **)0x8c4d9c40)->f05 = 0xcc;
                        (*(S_g8c4d9c40 **)0x8c4d9c40)->f04 = 0xff;
                    }
                    operation_8c01cc90((void *)o);
                }
            }
            call_8c38ad10();
            operation_8c013e74();
            call_8c391cc4();
        }
    }
}
