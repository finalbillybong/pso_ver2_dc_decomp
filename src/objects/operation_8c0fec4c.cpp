typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class S_c8c021ef8;
struct Object {
    char unknown0[0x390];
    unsigned short f390;
};
class S_c8c021ef8 {
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
    virtual int v13();
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int operation_8c0fec4c(Object *o)
{
    int v1;
    S_c8c021ef8 *t1;
    int t2;
    v1 = (int)0;
    t1 = lookup_low_id((int)(o->f390 & 0xffff));
    if (t1 != 0) {
        t2 = t1->v13();
        v1 = (int)t2;
    }
    return (int)(v1);
}
