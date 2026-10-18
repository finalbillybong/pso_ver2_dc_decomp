typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_g8c467880 S_g8c467880;
typedef struct Object Object;
typedef struct Arg0_10 Arg0_10;
typedef struct Arg0_dc Arg0_dc;
class S_vv1;
struct Object {
    char unknown0[0x10];
    Arg0_10 *f10;
    char unknown14[0xc8];
    Arg0_dc *fdc;
};
struct Arg0_dc {
    char unknown0[0x18];
    int f18;
};
class S_vv1 {
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
typedef struct S_vv1Data {
    char unknown0[0x20];
    short f20;
} S_vv1Data;
extern Block8 g_8c286720;
extern S_g8c467880 *g_8c467880;
extern "C" void clear_words_8c053d64(void);
extern "C" void call_8c0521a0(Object *);
extern "C" void operation_8c15435c(void *, short);
extern "C" int operation_8c1771d0(Object *o)
{
    S_vv1 *v1;
    clear_words_8c053d64();
    call_8c0521a0(o);
    if (((o->fdc->f18 & 0x100000)) != 0) {
        v1 = (S_vv1 *)g_8c467880;
        if (v1 != 0) {
            v1->v25(o->f10, 0, *(Block8 *)&g_8c286720);
            if (o->f10 != 0) {
                operation_8c15435c((void *)(o->f10), ((S_vv1Data *)v1)->f20);
            }
            return 1;
        }
    }
    return 0;
}
