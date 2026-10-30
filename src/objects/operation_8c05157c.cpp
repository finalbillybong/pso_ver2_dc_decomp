typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467220 S_g8c467220;
typedef struct S_g8c467220_42c S_g8c467220_42c;
typedef struct S_g8c467224 S_g8c467224;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
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
    char unknown68[0x31c];
    int f384;
    char unknown388[0x8];
    short f390;
} ObjectData;
struct S_g8c467224 {
    int f00;
};
struct S_g8c467220 {
    char unknown0[0x42c];
    S_g8c467220_42c *f42c;
};
struct S_g8c467220_42c {
    char unknown0[0x8];
    int f08;
    int f0c;
};
extern S_g8c467220 *g_8c467220;
extern S_g8c467224 *g_8c467224;
extern int g_8c467228;
extern int g_8c575570;
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c013c58(Object *);
extern "C" void operation_8c1086fc(void);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c37e2e4(int, float, float, float);
extern "C" void operation_8c05bc54(float);
extern "C" int global_byte_set_8c08d7e8(void);
extern "C" void call_8c3aa716(void *);
extern "C" void operation_8c01cc90(void *);
extern "C" void operation_8c01cd20(void *);
extern "C" void operation_8c05bc94(void);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c013e74(void);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c04a9e0(Object *, int);
extern "C" void operation_8c05157c(Object *o)
{
    int v4;
    int v12;
    int t1;
    ObjectData *pm5;
    void *pm4;
    int pm7;
    ObjectData *pm8;
    {
        Object *base = o;
        switch (((ObjectData *)base)->f34 & 0x2000000) {
            case 0:
            if (((((ObjectData *)base)->f390 & 1)) != 0) {
                g_8c467224->f00 &= -9;
            } else {
                g_8c467224->f00 |= 8;
            }
            t1 = base->v12(150.0f, 400.0f, 10.0f);
            if (0 != t1) {
                int v71;
                int pm11;
                int pm10;
                pm8 = (ObjectData *)base;
                v71 = (pm8)->f384;
                ((ObjectData *)base)->f38 = (Arg0_38 *)g_8c467220->f42c->f08;
                pm5 = (ObjectData *)base;
                if (v71 == 0) {
                    v4 = (int)g_8c467220->f42c->f0c;
                } else {
                    v4 = (int)g_8c467228;
                }
                (pm5)->f28 = (Arg0_28 *)v4;
                pm4 = (void *)(((ObjectData *)base)->f28);
                call_8c3827d8(pm4);
                call_8c013c58(base);
                operation_8c1086fc();
                call_8c38ae68();
                call_8c382a40((void *)(((char *)base + 0x3c)));
                pm11 = 0;
                call_8c37df90(pm11, (void *)(((ObjectData *)base)->f64));
                pm10 = 0x400;
                if (0 != (((int)(int)((ObjectData *)base)->f390 & pm10))) {
                    call_8c37e2e4(0, 2.0f, 1.5f, 2.0f);
                    operation_8c05bc54(0.666666687f);
                }
                g_8c575570 &= -0x401;
                pm7 = global_byte_set_8c08d7e8();
                if (1 == pm7) {
                    call_8c3aa716((void *)(((ObjectData *)base)->f38));
                } else {
                    if (t1 == 1) {
                        operation_8c01cc90((void *)base);
                    } else {
                        operation_8c01cd20((void *)base);
                    }
                }
                if (((((ObjectData *)base)->f390 & 0x400)) != 0) {
                    operation_8c05bc94();
                }
                call_8c38ad10();
                operation_8c013e74();
                call_8c391cc4();
                v12 = (int)((ObjectData *)base)->f34;
                if (((v12 & 0x800)) == 0) {
                    if (((v12 & 0x800000)) != 0) {
                        call_8c04a9e0(base, 0);
                    }
                }
            }
        }
    }
}
