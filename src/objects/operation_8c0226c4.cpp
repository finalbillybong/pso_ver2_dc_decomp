typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class S_c8c03b55c;
class S_c8c03b55c {
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
};
typedef struct S_c8c03b55cData {

} S_c8c03b55cData;
extern "C" S_c8c03b55c *call_8c03b55c(int, int);
extern "C" void operation_8c0226c4(int a0)
{
    int v2;
    int v1;
    S_c8c03b55c *t1;
    v1 = (int)0xbcc;
    v2 = (int)9;
    while (0xc >= v2) {
        t1 = call_8c03b55c((int)(a0 + v1), v2);
        if (t1 != 0) {
            *(int *)((char *)((char *)(a0 + v1) + 0x0) + (v2 << 2)) = 0;
            t1->v20();
        }
        v2 = (int)(v2 + 1);
    }
}
