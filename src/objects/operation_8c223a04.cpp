typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
typedef struct Object Object;
class Arg0_2c;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Object {
    char unknown0[0x2c];
    Arg0_2c *f2c;
    float f30;
};
class Arg0_2c {
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
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25(Arg0_2c *, int, Block8);
};
typedef struct Arg0_2cData {
    char unknown0[0x37c];
    int f37c;
} Arg0_2cData;
struct Frame {
    Block_frame_0 f00;
};
extern "C" int call_8c12b944(void);
extern "C" void operation_8c223a04(Object *o)
{
    Frame frame;
    int t1;
    Arg0_2c *p;
    if (((Arg0_2cData *)o->f2c)->f37c != 0 && ((Arg0_2cData *)o->f2c)->f37c != 0xf) {
        t1 = call_8c12b944();
        if (((float)t1 / 32768.0f) < o->f30) {
            (&frame)->f00.f00 = 0x11;
            (&frame)->f00.f04 = 0.0f;
            p = o->f2c;
            p->v25(p, 0, *(Block8 *)&(&frame)->f00);
        }
    }
}
