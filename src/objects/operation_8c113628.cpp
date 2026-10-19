typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class S_c8c053d84;
struct Object {
    char unknown0[0x2];
    short f02;
    char unknown4[0x4];
    short f08;
    char f0a;
    char f0b;
};
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
    virtual void v24(Object *);
};
typedef struct S_c8c053d84Data {

} S_c8c053d84Data;
extern int g_8c44be04;
extern "C" char g_8c30ff14[];
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" void operation_8c1005bc(int);
extern "C" void operation_03cf64(unsigned short, int);
extern "C" void operation_03cff8(unsigned short, int);
extern "C" void operation_8c113628(Object *o)
{
    S_c8c053d84 *t1;
    t1 = lookup_object_by_id((unsigned short)(o->f02));
    if (t1 != 0) {
        t1->v24(o);
        return;
    }
    if (((o->f0b & 2)) != 0 && o->f0a == g_8c44be04) {
        operation_8c1005bc((int)(g_8c30ff14 + 0x15));
    }
    if (((o->f0b & 1)) != 0) {
        operation_03cf64((unsigned short)(o->f08), (int)(o->f0a));
        return;
    }
    operation_03cff8((unsigned short)(o->f08), (int)(o->f0a));
}
