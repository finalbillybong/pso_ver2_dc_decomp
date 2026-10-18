typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c467240 S_g8c467240;
typedef struct Object Object;
class S_vv4;
class S_vv4 {
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
    virtual int v17();
};
typedef struct S_vv4Data {
    char unknown0[0x20];
    unsigned short f20;
} S_vv4Data;
struct Object {
    int tag;
    int f04;
};
extern int g_8c467874;
extern "C" void operation_8c01372c(Object *o, int a1)
{
    S_vv4 *v4;
    int v3;
    int v2;
    int v1;
    int t1;
    v2 = (int)g_8c467874;
    v3 = (int)0;
    v1 = (int)0x814;
    while (v2 > v3) {
        v4 = (S_vv4 *)*(S_g8c467240 **)((char *)0x8c467240 + (v3 << 2));
        if (v4 != 0 && a1 == ((S_vv4Data *)v4)->f20) {
            t1 = v4->v17();
            o->tag = (int)t1;
            o->f04 = *(char *)((char *)((char *)v4 + 0x0) + (v1));
        }
        v3 = (int)(v3 + 1);
    }
}
