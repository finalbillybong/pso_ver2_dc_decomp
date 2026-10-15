typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_c8c03b55c S_c8c03b55c;
typedef struct S_c8c03b55c_e8 S_c8c03b55c_e8;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_158 Arg0_158;
typedef struct Arg0_15c Arg0_15c;
typedef struct Arg0_160 Arg0_160;
typedef struct Arg0_164 Arg0_164;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
class S_c8c0744dc;
struct Object {
    char unknown0[0x24];
    int f24;
    Arg0_28 *f28;
    char unknown2c[0xc];
    Arg0_38 *f38;
    char unknown3c[0x10];
    int f4c;
    char unknown50[0x108];
    Arg0_158 *f158;
    Arg0_15c *f15c;
    Arg0_160 *f160;
    Arg0_164 *f164;
};
struct Frame {
    Block8 f00;
};
struct Arg0_15c {
    char unknown0[0x80];
    unsigned short f80;
};
struct S_c8c03b55c {
    char unknown0[0xe8];
    S_c8c03b55c_e8 *fe8;
};
class S_c8c0744dc {
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
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual int v30();
};
typedef struct S_c8c0744dcData {

} S_c8c0744dcData;
extern "C" char g_8c31cc44[];
extern "C" int operation_8c220ce0(void);
extern "C" int operation_8c156c6c(int);
extern "C" void operation_8c1571d4(void *, int);
extern "C" int operation_8c1571f4(void *);
extern "C" void request_resource_release(void *);
extern "C" void call_8c023bb4(void *, void *);
extern "C" S_c8c0744dc *find_record_8c0744dc(int);
extern "C" S_c8c03b55c *call_8c03b55c(int, int);
extern "C" void call_8c022538(void *, void *);
extern "C" void call_8c02231c(void *, void *, int);
extern "C" void operation_8c220ca8(int, int);
extern "C" void operation_8c1005bc(int);
extern "C" void operation_8c19bc58(Object *o)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    S_c8c0744dc *t4;
    int t5;
    S_c8c03b55c *t6;
    t1 = operation_8c220ce0();
    if (t1 == 0) {
        return;
    }
    if (o->f15c == 0) {
        *(Block8 *)&(&frame)->f00 = *(Block8 *)&*(Block8 *)0x8c31cc34;
        t2 = operation_8c156c6c((int)(&frame));
        o->f15c = (Arg0_15c *)(int)t2;
        operation_8c1571d4((void *)(o->f15c), 0);
    }
    if (o->f15c == 0) {
    } else {
        if (((o->f15c->f80 & 0xffff & 2)) == 0) {
        } else {
            t3 = operation_8c1571f4((void *)(o->f15c));
            if (t3 == 0) {
                if (o->f164 != 0) {
                    request_resource_release((void *)(o->f164));
                    o->f164 = (Arg0_164 *)0;
                }
                if (o->f158 != 0) {
                    request_resource_release((void *)(o->f158));
                    o->f158 = (Arg0_158 *)0;
                }
                if (o->f160 != 0) {
                    request_resource_release((void *)(o->f160));
                    o->f160 = (Arg0_160 *)0;
                }
                request_resource_release((void *)(o->f15c));
                o->f15c = (Arg0_15c *)0;
                o->f38 = (Arg0_38 *)o->f4c;
                call_8c023bb4((void *)(o->f28), (void *)(((char *)o + 0x2c)));
                t4 = find_record_8c0744dc((int)(o->f38));
                if (t4 != 0) {
                    t5 = t4->v30();
                    t6 = call_8c03b55c((int)((int)o->f28 + 0xbcc), (int)((short)t5));
                    if (t6 != 0) {
                        call_8c022538((void *)(o->f28), (void *)(t6->fe8));
                    }
                }
                call_8c02231c((void *)(o->f28), (void *)(o->f38), 0);
                operation_8c220ca8(0xb, 1);
                if (*(int *)0x8c4dc4a8 > 0) {
                    operation_8c1005bc((int)(g_8c31cc44 + 0x35));
                }
                o->f24 = 0;
            }
            if (t3 == 1) {
                request_resource_release((void *)(o->f15c));
                o->f15c = (Arg0_15c *)0;
                o->f38 = (Arg0_38 *)o->f4c;
                call_8c023bb4((void *)(o->f28), (void *)(((char *)o + 0x2c)));
                operation_8c220ca8(0xb, 1);
                if (*(int *)0x8c4dc4a8 > 0) {
                    operation_8c1005bc((int)(g_8c31cc44 + 0x35));
                }
                o->f24 = 0;
            }
        }
    }
    if (o->f15c != 0 && ((o->f15c->f80 & 0xffff & 4)) != 0) {
        request_resource_release((void *)(o->f15c));
        o->f15c = (Arg0_15c *)0;
        o->f38 = (Arg0_38 *)o->f4c;
        call_8c023bb4((void *)(o->f28), (void *)(((char *)o + 0x2c)));
        operation_8c220ca8(0xb, 1);
        if (*(int *)0x8c4dc4a8 > 0) {
            operation_8c1005bc((int)(g_8c31cc44 + 0x35));
        }
        o->f24 = 0;
    }
}
