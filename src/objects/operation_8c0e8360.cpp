typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1c7658 S_c8c1c7658;
class Object;
class Object {
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
    virtual void v18(int);
};
typedef struct ObjectData {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x118];
    unsigned char f138;
    char unknown139[0x87];
    int f1c0;
    char unknown1c4[0x14];
    int f1d8;
    int f1dc;
    char f1e0;
    char f1e1;
    char f1e2;
    char f1e3;
} ObjectData;
struct S_c8c1c7658 {
    char unknown0[0x9];
    char f09;
    char unknowna[0x8];
    unsigned char f12;
    unsigned char f13;
};
extern "C" void create_object_8c20989c(void *);
extern "C" S_c8c1c7658 *call_8c1c7658(int);
extern "C" int operation_8c1c933c(void *);
extern "C" int operation_8c1c9348(void *);
extern "C" Object *operation_8c0e8360(Object *o, int a1, int a2)
{
    Object **home = &o;
    S_c8c1c7658 *t1;
    int t2;
    int t3;
    (void)home;
    create_object_8c20989c((void *)o);
    *(void **)((char *)o + 0x18) = (void *)(void *)0x8c267e34;
    ((ObjectData *)o)->tag = (int)(*(int *)0x8c3082e0);
    ((ObjectData *)o)->size = 0x1e4;
    o->v18(3);
    t1 = call_8c1c7658(a2);
    if (t1 != 0) {
        ((ObjectData *)o)->f1d8 = *(int *)0x8c470300 + t1->f09 * 0x2c;
        ((ObjectData *)o)->f1e2 = t1->f13;
        ((ObjectData *)o)->f1e3 = t1->f12;
    } else {
        ((ObjectData *)o)->f1d8 = (int)(*(int *)0x8c470300);
        ((ObjectData *)o)->f1e2 = 0;
        ((ObjectData *)o)->f1e3 = 0;
    }
    t2 = operation_8c1c933c((void *)a2);
    ((ObjectData *)o)->f1e0 = t2;
    t3 = operation_8c1c9348((void *)a2);
    ((ObjectData *)o)->f1e1 = t3;
    switch (((ObjectData *)o)->f138) {
    case 34:
        ((ObjectData *)o)->f1dc = 1;
        break;
    case 35:
        ((ObjectData *)o)->f1dc = 1;
        break;
    case 22:
        ((ObjectData *)o)->f1c0 |= 8;
        break;
    default:
        ((ObjectData *)o)->f1dc = 0;
        break;
    }
    return o;
}
