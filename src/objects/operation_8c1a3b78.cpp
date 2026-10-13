typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03b55c S_c8c03b55c;
typedef struct S_c8c03b55c_e8 S_c8c03b55c_e8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
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
    char unknown0[0xec];
    int fec;
} S_c8c0744dcData;
struct Object {
    char unknown0[0x20];
    char f20;
};
struct S_c8c03b55c {
    char unknown0[0xe8];
    S_c8c03b55c_e8 *fe8;
};
extern "C" int lookup_low_id(int);
extern "C" S_c8c0744dc *find_record_8c0744dc(int);
extern "C" int call_8c0240f0(int, int);
extern "C" void call_8c02330c(int, int, int);
extern "C" S_c8c03b55c *call_8c03b55c(int, int);
extern "C" void call_8c022538(int, void *);
extern "C" void call_8c02231c(int, int, int);
extern "C" void operation_8c1a3b78(Object *o, int a1, int a2)
{
    int t1;
    S_c8c0744dc *t2;
    int t3;
    int t4;
    S_c8c03b55c *t5;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = find_record_8c0744dc(a1);
        if (t2 != 0) {
            switch (a2) {
            case 0:
                t3 = call_8c0240f0(t1, a1);
                if (t3 != 0) {
                    if (((((S_c8c0744dcData *)t2)->fec & 0x10)) != 0) {
                        call_8c02330c(t1, a1, 1);
                    }
                }
                o->f20 = 0x16;
                return;
            case 1:
                t4 = t2->v30();
                t5 = call_8c03b55c((int)(t1 + 0xbcc), (int)((short)t4));
                if (t5 != 0) {
                    call_8c022538(t1, (void *)(t5->fe8));
                }
                call_8c02231c(t1, a1, 0);
                o->f20 = 0x16;
                return;
            case 2:
                call_8c022538(t1, (void *)a1);
                o->f20 = 0x16;
                return;
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
                break;
            }
        }
    }
}
