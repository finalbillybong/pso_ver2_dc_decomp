typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03b55c S_c8c03b55c;
typedef struct S_c8c03b55c_e8 S_c8c03b55c_e8;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg1 Arg1;
class Object;
struct Arg1 {
    short f00;
    short f02;
    short f04;
    short f06;
    short f08;
    short f0a;
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
};
typedef struct ObjectData {
    char unknown0[0xe4];
    short fe4;
    char unknowne6[0x56];
    Arg0_13c *f13c;
} ObjectData;
struct Arg0_13c {
    char unknown0[0x308];
    short f308;
};
struct S_c8c03b55c {
    char unknown0[0xe8];
    S_c8c03b55c_e8 *fe8;
};
extern "C" void call_8c207470(void *, short);
extern "C" void call_8c207518(void *, short);
extern "C" void call_8c207668(void *, short);
extern "C" void call_8c2075c0(void *, short);
extern "C" void operation_8c207710(void *, short);
extern "C" void call_8c207738(void *, short);
extern "C" int call_8c207304(void *);
extern "C" void call_8c074fb4(Object *, int);
extern "C" S_c8c03b55c *call_8c03b55c(void *, int);
extern "C" int call_8c074560(S_c8c03b55c *, Arg0_13c *, int);
extern "C" void call_8c022538(Arg0_13c *, void *);
extern "C" void call_8c07e79c(Object *);
extern "C" int operation_8c07dca8(Object *o, Arg1 *a1)
{
    int v1;
    int t1;
    S_c8c03b55c *t2;
    int t3;
    if (a1 != 0) {
        call_8c207470((void *)(((char *)o + 0x1e4)), a1->f04);
        call_8c207518((void *)(((char *)o + 0x1e4)), a1->f06);
        call_8c207668((void *)(((char *)o + 0x1e4)), a1->f0a);
        call_8c2075c0((void *)(((char *)o + 0x1e4)), a1->f08);
        operation_8c207710((void *)(((char *)o + 0x1e4)), a1->f00);
        call_8c207738((void *)(((char *)o + 0x1e4)), a1->f02);
        t1 = call_8c207304((void *)(((char *)o + 0x1e4)));
        call_8c074fb4(o, t1);
        if (((ObjectData *)o)->fe4 == 2) {
            o->v23();
            v1 = (int)(((ObjectData *)o)->f13c->f308 == 2);
            if (v1 == 0) {
                t2 = call_8c03b55c((void *)(((char *)((ObjectData *)o)->f13c + 0xbcc)), 6);
                if (t2 != 0) {
                    t3 = call_8c074560(t2, (Arg0_13c *)(((ObjectData *)o)->f13c), 0);
                    if (t3 == 0) {
                        call_8c022538((Arg0_13c *)(((ObjectData *)o)->f13c), (void *)(t2->fe8));
                    }
                }
            }
        }
        call_8c07e79c(o);
        return 1;
    }
    return 0;
}
