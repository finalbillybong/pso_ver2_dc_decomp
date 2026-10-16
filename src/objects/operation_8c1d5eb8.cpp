typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class S_c8c0744dc;
struct Object {
    char unknown0[0x78];
    int f78;
    char unknown7c[0x2c];
    int fa8;
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
    virtual void v30();
    virtual void v31(void *);
};
typedef struct S_c8c0744dcData {

} S_c8c0744dcData;
extern "C" void operation_8c1d5d3c(void *);
extern "C" void call_8c1d5f4c(Object *);
extern "C" S_c8c0744dc *find_record_8c0744dc(int);
extern "C" void operation_8c1d5eb8(Object *o, int a1)
{
    int v1;
    int v2;
    S_c8c0744dc *t1;
    v1 = (int)-1;
    o->fa8 = a1;
    if (a1 == v1) {
        o->f78 = 0;
        operation_8c1d5d3c((void *)o);
        call_8c1d5f4c(o);
        return;
    }
    t1 = find_record_8c0744dc(a1);
    if (t1 == 0) {
        o->fa8 = -1;
        v2 = (int)0;
        o->f78 = (int)v2;
        operation_8c1d5d3c((void *)o);
        call_8c1d5f4c(o);
        return;
    }
    t1->v31(((char *)o + 0x90));
    o->f78 = (int)(((char *)o + 0x90));
    operation_8c1d5d3c((void *)o);
    call_8c1d5f4c(o);
}
