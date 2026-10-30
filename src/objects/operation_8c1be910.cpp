typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4e2b80 S_g8c4e2b80;
typedef struct S_g8c4e2b80_42c S_g8c4e2b80_42c;
typedef struct S_g8c4e2b80_42c_28 S_g8c4e2b80_42c_28;
typedef struct S_g8c4e2b80_42c_8 S_g8c4e2b80_42c_8;
typedef struct S_g8c4e2b80_42c_88 S_g8c4e2b80_42c_88;
typedef struct S_g8c4e2b80_430 S_g8c4e2b80_430;
typedef struct S_g8c4e2b80_430_2c S_g8c4e2b80_430_2c;
typedef struct S_g8c4e2b80_430_34 S_g8c4e2b80_430_34;
typedef struct S_g8c4e2b84 S_g8c4e2b84;
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
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x24];
    int f8c;
    char unknown90[0x90];
    float f120;
} ObjectData;
struct S_g8c4e2b80 {
    char unknown0[0x42c];
    S_g8c4e2b80_42c *f42c;
    S_g8c4e2b80_430 *f430;
};
struct S_g8c4e2b80_42c {
    char unknown0[0x8];
    S_g8c4e2b80_42c_8 *f08;
    char unknownc[0x1c];
    S_g8c4e2b80_42c_28 *f28;
    char unknown2c[0x5c];
    S_g8c4e2b80_42c_88 *f88;
};
struct S_g8c4e2b80_430 {
    char unknown0[0x2c];
    S_g8c4e2b80_430_2c *f2c;
    char unknown30[0x4];
    S_g8c4e2b80_430_34 *f34;
};
extern S_g8c4e2b80 *g_8c4e2b80;
extern S_g8c4e2b84 *g_8c4e2b84;
extern "C" void call_8c3827d8(void *);
extern "C" void call_8c38ae68(void);
extern "C" void call_8c382a40(void *);
extern "C" void call_8c37df90(int, void *);
extern "C" void call_8c3a944a(void *);
extern "C" void call_8c391c94(void);
extern "C" void call_8c3ac53a(void *, void *, float);
extern "C" void call_8c391cc4(void);
extern "C" void call_8c38ad10(void);
extern "C" void operation_8c1be910(Object *o)
{
    int t1;
    t1 = o->v11(400.0f, 32.0f);
    if (t1 != 0) {
        call_8c3827d8(g_8c4e2b84);
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(((ObjectData *)o)->f64));
        t1 = ((ObjectData *)o)->f8c == 0;
        if ((t1) != 0) {
            S_g8c4e2b80_42c_28 *pm2;
            S_g8c4e2b80_430_2c *pm3;
            S_g8c4e2b80_42c_28 *pm4;
            call_8c3a944a((void *)(g_8c4e2b80->f42c->f88));
            call_8c391c94();
            pm3 = g_8c4e2b80->f430->f2c;
            pm4 = g_8c4e2b80->f42c->f28;
            pm2 = pm4;
            call_8c3ac53a((void *)(pm2), (void *)(pm3), ((ObjectData *)o)->f120);
            call_8c391cc4();
        } else {
            S_g8c4e2b80_430_34 *pm5;
            call_8c391c94();
            pm5 = g_8c4e2b80->f430->f34;
            call_8c3ac53a((void *)(g_8c4e2b80->f42c->f08), (void *)(pm5), ((ObjectData *)o)->f120);
            call_8c391cc4();
        }
        call_8c38ad10();
    }
}
