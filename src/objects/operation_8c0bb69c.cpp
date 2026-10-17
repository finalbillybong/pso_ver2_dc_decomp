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
typedef struct Arg0_20 Arg0_20;
class Arg1;
typedef struct Block_frame_0 {
    int f00;
    float f04;
} Block_frame_0;
struct Frame {
    Block_frame_0 f00;
};
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0xb0];
    float fd4;
};
class Arg1 {
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
    virtual void v25(void *, int, Block8);
};
typedef struct Arg1Data {

} Arg1Data;
extern "C" int operation_8c054248(void *, int, int);
extern "C" void operation_8c0bb69c(Object *o, Arg1 *a1)
{
    Frame frame;
    int t1;
    (&frame)->f00.f04 = o->fd4;
    (&frame)->f00.f00 = 3;
    t1 = operation_8c054248((void *)a1, 0, 0x100);
    if (t1 == 0) {
        a1->v25(o->f20, 0, *(Block8 *)&(&frame)->f00);
    }
}
