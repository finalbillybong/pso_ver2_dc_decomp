typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84_dc S_c8c053d84_dc;
class S_c8c053d84 {
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
    virtual void v24(S_c8c053d84 *, float);
};
typedef struct S_c8c053d84Data {
    char unknown0[0xdc];
    S_c8c053d84_dc *fdc;
    char unknowne0[0x304];
    int f3e4;
} S_c8c053d84Data;
struct S_c8c053d84_dc {
    char unknown0[0x18];
    int f18;
};
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void operation_8c13bb4c(int a0)
{
    S_c8c053d84 *t1;
    S_c8c053d84 *t2;
    t1 = lookup_object_by_id((unsigned short)(*(short *)0x8c313128));
    if (t1 != 0 && !(((S_c8c053d84Data *)t1)->f3e4 > 0)) {
        t2 = lookup_object_by_id((unsigned short)a0);
        if (t2 != 0) {
            ((S_c8c053d84Data *)t1)->fdc->f18 |= 0x8000000;
            t1->v24(t2, 1.0f);
        }
    }
}
