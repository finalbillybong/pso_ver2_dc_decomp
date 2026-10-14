typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class Arg0_13c;
struct Object {
    char unknown0[0xec];
    int fec;
    char unknownf0[0x4c];
    Arg0_13c *f13c;
    char unknown140[0x80];
    int f1c0;
    char unknown1c4[0x14];
    int f1d8;
    char unknown1dc[0x44];
    short f220;
    short f222;
};
class Arg0_13c {
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
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual int v17();
};
typedef struct Arg0_13cData {
    char unknown0[0x308];
    short f308;
} Arg0_13cData;
extern "C" void call_8c07f9b0(Object *);
extern "C" void operation_8c07dac0(void *, int);
extern "C" int current_effect_mode(void);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c07d248(Object *o)
{
    int v1;
    int v42;
    int t1;
    int t2;
    o->f1d8 = 0;
    v1 = (int)(((Arg0_13cData *)o->f13c)->f308 == 2);
    if (v1 == 0) {
        o->f1d8 = 0x10;
        call_8c07f9b0(o);
    }
    operation_8c07dac0((void *)o, 1);
    t1 = o->f13c->v17();
    o->f220 = t1;
    if (o->f222 == -1) {
        t2 = current_effect_mode();
        o->f222 = t2;
    }
    v42 = (int)(((o->f1c0 & 1)) != 0);
    if (v42 != 0) {
        o->f1d8 &= -0x21;
    } else {
        o->f1d8 |= 0x20;
    }
    if (((o->fec & 0x40)) == 0) {
        call_8c05fbf8(0xa, (void *)(((char *)o->f13c + 0x3c)), 0, 0);
    }
}
