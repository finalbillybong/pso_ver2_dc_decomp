typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4627c0 S_g8c4627c0;
typedef struct Object Object;
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_vv2_c S_vv2_c;
class S_vv2;
struct S_g8c4627c0 {
    char unknown0[0x14];
    int f14;
};
class S_vv2 {
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
};
typedef struct S_vv2Data {
    S_vv2_0 *f00;
    char unknown4[0x2];
    unsigned short f06;
    char unknown8[0x4];
    S_vv2_c *f0c;
    char unknown10[0x1b];
    char f2b;
} S_vv2Data;
struct Object {
    char unknown0[0x20];
    int f20;
};
extern "C" char g_8c2ed878[];
extern "C" void operation_8c011ef0(void *, ...);
extern "C" void call_8c036b4c(S_vv2 *);
extern "C" void operation_8c09caac(void *);
extern "C" void set_field_8c09ca50(void *);
extern "C" void operation_8c036ac8(Object *o)
{
    int v1;
    S_vv2 *v2;
    v1 = (int)(*(S_g8c4627c0 **)0x8c4627c0)->f14;
    v2 = (S_vv2 *)v1;
    while (v2 != 0) {
        operation_8c011ef0((void *)((g_8c2ed878 + 0xe)), (void *)(((S_vv2Data *)v2)->f00), (void *)v2);
        if (((S_vv2Data *)v2)->f2b == 0) {
            call_8c036b4c(v2);
            v2->v7();
        }
        if (((S_vv2Data *)v2)->f06 == o->f20) {
            operation_8c09caac((void *)v2);
            set_field_8c09ca50((void *)v2);
        }
        v2 = (S_vv2 *)((S_vv2Data *)v2)->f0c;
    }
    o->f20 = (int)o->f20 + 1 & 3;
}
