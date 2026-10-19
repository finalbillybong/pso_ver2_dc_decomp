typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c105504 S_c8c105504;
typedef struct Frame Frame;
typedef struct Arg1 Arg1;
typedef struct Arg1_4 Arg1_4;
typedef struct Arg1_8 Arg1_8;
typedef struct Arg1_c Arg1_c;
class Object;
struct Arg1 {
    char unknown0[0x1];
    char f01;
    char unknown2[0x2];
    Arg1_4 *f04;
    Arg1_8 *f08;
    Arg1_c *f0c;
};
struct S_c8c105504 {
    int f00;
};
struct Frame {
    unsigned char f00;
    char f01;
    unsigned short f02;
    int f04;
    int f08;
};
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *);
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9(Frame *, int);
};
typedef struct ObjectData {

} ObjectData;
extern "C" char g_8c2e7ce0[];
extern "C" S_c8c105504 *call_8c105504(void *, int);
extern "C" void call_8c36b566(void *, void *);
extern "C" int call_8c01c440(void *, void *);
extern "C" void operation_8c02fcf4(Object *o, Arg1 *a1)
{
    Frame frame;
    char *v5;
    int v2;
    S_c8c105504 *t1;
    int t2;
    int t3;
    o->v4((g_8c2e7ce0 + 0x699));
    v5 = (char *)a1->f04;
    if (v5 != 0) {
        t1 = call_8c105504((void *)(((char *)a1 + 0x10)), (int)(v5));
        call_8c36b566((void *)(((char *)a1 + 0x10)), (void *)(a1->f04));
        t3 = ((int (*)(void))(t1->f00))();
        v2 = (int)t3;
    } else {
        v2 = (int)0;
    }
    (&frame)->f00 = 0xb3;
    (&frame)->f01 = a1->f01;
    (&frame)->f02 = 0xc;
    (&frame)->f04 = (int)v2;
    t2 = call_8c01c440((void *)(a1->f08), (void *)(a1->f0c));
    (&frame)->f08 = (int)t2;
    o->v9((&frame), (unsigned short)(&frame)->f02);
}
